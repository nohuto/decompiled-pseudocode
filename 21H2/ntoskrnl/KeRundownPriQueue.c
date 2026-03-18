/*
 * XREFs of KeRundownPriQueue @ 0x14057B42C
 * Callers:
 *     ExpWorkQueueDestroy @ 0x140A02158 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KeRundownQueueCommon @ 0x140234888 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140234D1C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KeRundownPriQueue(
        volatile signed __int32 *SystemArgument1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di
  int v7; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe(SystemArgument1, a2, a3, (__int64)SchedulerAssist);
  LOBYTE(v7) = 1;
  KeRundownQueueCommon(SystemArgument1, (_QWORD **)SystemArgument1 + 84, (_DWORD *)SystemArgument1 + 134, 0x20u, v7);
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive((unsigned __int64)SystemArgument1);
  return KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
}
