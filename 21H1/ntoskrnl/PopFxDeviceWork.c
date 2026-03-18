/*
 * XREFs of PopFxDeviceWork @ 0x140564DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A371C (PopFxDeliverDevicePowerRequired.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall PopFxDeviceWork(ULONG_PTR BugCheckParameter2)
{
  KSPIN_LOCK *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  LONG result; // eax

  v2 = (KSPIN_LOCK *)(BugCheckParameter2 + 360);
  do
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v2);
    PopFxDeliverDevicePowerRequired(BugCheckParameter2, 0LL);
    KxReleaseSpinLock(v2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 336), 0xFFFFFFFF) != 1 );
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  return result;
}
