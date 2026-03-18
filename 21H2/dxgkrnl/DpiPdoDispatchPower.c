/*
 * XREFs of DpiPdoDispatchPower @ 0x1C0023630
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiPdoSetDevicePower @ 0x1C01EFE0C (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PVOID DeviceExtension; // rsi
  ULONG Options; // eax
  POWER_STATE v7; // ebx
  unsigned int EaLength; // r12d
  NTSTATUS v9; // ebp
  NTSTATUS v10; // edi
  unsigned int Status; // ebx
  ULONG Length; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
      goto LABEL_13;
    v10 = 0;
    goto LABEL_12;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( Options != 1 )
  {
    v10 = 0;
    if ( Options )
      goto LABEL_13;
    *((POWER_STATE *)DeviceExtension + 70) = v7;
    goto LABEL_12;
  }
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
  else
  {
    if ( v7.SystemState < *((_DWORD *)DeviceExtension + 71) )
    {
      EaLength = CurrentStackLocation->Parameters.Create.EaLength;
      if ( EaLength == 3 )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( (Length & 0xF0000) < 0x20000 )
          goto LABEL_24;
        if ( (Length & 0xF0000) <= 0x40000 )
        {
          EaLength = 2;
          WdLogSingleEntry1(4LL, DeviceObject);
          goto LABEL_8;
        }
        if ( (Length & 0xF0000) != 0x50000 )
        {
LABEL_24:
          WdLogSingleEntry1(2LL, DeviceObject);
          goto LABEL_8;
        }
        WdLogSingleEntry1(4LL, DeviceObject);
      }
LABEL_8:
      v9 = DpiPdoSetDevicePower(DeviceObject, (unsigned int)v7.SystemState, EaLength);
      PoSetPowerState(DeviceObject, DevicePowerState, v7);
      goto LABEL_9;
    }
    v9 = 0;
  }
LABEL_9:
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  v10 = v9;
  if ( v9 != -1073741637 )
LABEL_12:
    Irp->IoStatus.Status = v10;
LABEL_13:
  PoStartNextPowerIrp(Irp);
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
