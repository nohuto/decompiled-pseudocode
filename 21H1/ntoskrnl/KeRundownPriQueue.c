/*
 * XREFs of KeRundownPriQueue @ 0x14051E96C
 * Callers:
 *     ExpWorkQueueDestroy @ 0x140951728 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x1402FBA2C (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1402FBE64 (KiAcquireReleaseObjectRundownLockExclusive.c)
 */

char __fastcall KeRundownPriQueue(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  KeRundownQueueCommon(a1, (__int64 **)(a1 + 672), a1 + 536, (_DWORD *)0x20, 1);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  return KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, CurrentIrql);
}
