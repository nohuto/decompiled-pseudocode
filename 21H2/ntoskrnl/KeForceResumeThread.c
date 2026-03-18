/*
 * XREFs of KeForceResumeThread @ 0x1402EF5FC
 * Callers:
 *     KeRequestTerminationThread @ 0x1402ECD10 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x14079FBD4 (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x1407D7CA0 (NtTerminateProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v4; // r8
  int v5; // r14d
  int v6; // esi
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1 + 736);
  v5 = *(char *)(a1 + 644);
  v6 = (*(_DWORD *)(a1 + 120) >> 14) & 1;
  if ( v5 | v6 )
  {
    *(_BYTE *)(a1 + 794) &= 0xF9u;
    *(_BYTE *)(a1 + 644) = 0;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
  }
  LOBYTE(v4) = 1;
  KiResumeThread(a1, CurrentPrcb, v4);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return (unsigned int)(v6 + v5);
}
