/*
 * XREFs of ACPIBusIrpDeviceUsageNotification @ 0x1C00A2490
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009E0DC (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIBusIrpDeviceUsageNotification(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v3; // di
  int v4; // ebp
  __int64 DeviceExtension; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  struct _DEVICE_OBJECT *v10; // rcx
  unsigned __int8 Lock; // al
  __int64 v12; // rcx
  char *IrpText; // rax
  const char *v14; // r8
  const char *v15; // r10

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v8 = DeviceExtension;
  if ( CurrentStackLocation->Parameters.Create.Options == 5 )
  {
    if ( !CurrentStackLocation->Parameters.SetLock.Lock && (*(_DWORD *)(DeviceExtension + 960) & 0x40000) != 0 )
    {
      v4 = -1073741811;
      goto LABEL_13;
    }
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(DeviceExtension + 752);
  if ( !v9 )
    goto LABEL_5;
  v10 = *(struct _DEVICE_OBJECT **)(v9 + 728);
  if ( !v10 )
  {
    v4 = -1073741810;
    goto LABEL_13;
  }
  v4 = ACPIInternalSendSynchronousIrp(v10, (__int64)CurrentStackLocation, 0LL);
  if ( v4 >= 0 )
  {
LABEL_5:
    Lock = CurrentStackLocation->Parameters.SetLock.Lock;
    if ( CurrentStackLocation->Parameters.Create.Options == 2 )
    {
      if ( Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 696));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 696));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 700));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 700));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 3 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 704));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 704));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 5 )
    {
      Lock = 0;
      *(_QWORD *)(v8 + 960) = *(_QWORD *)(v8 + 960) & 0xFFFFFFFFFFFBFFFFuLL | (CurrentStackLocation->Parameters.SetLock.Lock != 0
                                                                             ? 0x40000
                                                                             : 0);
    }
    if ( Lock )
      PhysicalDeviceObject->Flags &= ~0x2000u;
    IoInvalidateDeviceState(PhysicalDeviceObject);
  }
LABEL_13:
  Irp->IoStatus.Status = v4;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  if ( v8 )
  {
    v12 = 0x200000000000LL;
    v3 = v8;
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
      v12 = 0x400000000000LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v12, 0x16u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x1Eu,
      (__int64)&WPP_aa0188d95df637fd68421574d89cc32b_Traceguids,
      (char)Irp,
      IrpText,
      v4,
      v3,
      v14,
      v15);
  }
  return (unsigned int)v4;
}
