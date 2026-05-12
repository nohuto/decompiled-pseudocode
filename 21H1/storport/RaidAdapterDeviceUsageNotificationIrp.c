/*
 * XREFs of RaidAdapterDeviceUsageNotificationIrp @ 0x1C0011D2C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0011DF0 (RaForwardIrpSynchronous.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1C00576D0 (RaidNotifyPoAboutSpecialDevice.c)
 */

__int64 __fastcall RaidAdapterDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  volatile signed __int32 *v3; // rbx
  unsigned int Options; // r14d
  unsigned __int8 Lock; // r15
  signed int v8; // ebp

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  if ( Options == 1 )
  {
    v3 = (volatile signed __int32 *)(a1 + 92);
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
  {
    v3 = (volatile signed __int32 *)(a1 + 100);
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 3 )
  {
    v3 = (volatile signed __int32 *)(a1 + 96);
  }
  v8 = RaForwardIrpSynchronous(*(_QWORD *)(a1 + 24));
  if ( v8 >= 0 && v3 )
  {
    if ( Lock )
      _InterlockedIncrement(v3);
    else
      _InterlockedDecrement(v3);
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 32));
    if ( Options == 1 )
      RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 32), *(unsigned int *)v3);
  }
  return RaidCompleteRequestEx(a2, 0, v8);
}
