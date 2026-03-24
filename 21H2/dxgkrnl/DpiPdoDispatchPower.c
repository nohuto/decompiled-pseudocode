/*
 * XREFs of DpiPdoDispatchPower @ 0x1C001FE70
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4B0 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C0020068 (DpiCorrectPowerAction.c)
 *     DpiEnableD3Requests @ 0x1C00E28DC (DpiEnableD3Requests.c)
 *     DpiPdoSetDevicePower @ 0x1C017680C (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  PVOID DeviceExtension; // rdi
  ULONG Options; // eax
  POWER_STATE v7; // ebx
  unsigned int v8; // eax
  NTSTATUS v9; // esi
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
      goto LABEL_13;
    v9 = 0;
LABEL_12:
    Irp->IoStatus.Status = v9;
    goto LABEL_13;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( Options == 1 )
  {
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 484) )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( v7.SystemState > *((_DWORD *)DeviceExtension + 71) )
    {
      PoSetPowerState(DeviceObject, DevicePowerState, v7);
      v9 = DpiPdoSetDevicePower(
             DeviceObject,
             (unsigned int)v7.SystemState,
             CurrentStackLocation->Parameters.Create.EaLength);
    }
    else if ( v7.SystemState >= *((_DWORD *)DeviceExtension + 71) )
    {
      v9 = 0;
    }
    else
    {
      v8 = DpiCorrectPowerAction(
             DeviceObject,
             HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
             CurrentStackLocation->Parameters.Create.EaLength);
      v9 = DpiPdoSetDevicePower(DeviceObject, (unsigned int)v7.SystemState, v8);
      PoSetPowerState(DeviceObject, DevicePowerState, v7);
    }
    if ( *((_BYTE *)DeviceExtension + 484) )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( Options )
      goto LABEL_13;
    *((POWER_STATE *)DeviceExtension + 70) = v7;
    v9 = 0;
  }
  if ( v9 != -1073741637 )
    goto LABEL_12;
LABEL_13:
  PoStartNextPowerIrp(Irp);
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
