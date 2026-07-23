/*
 * XREFs of KeForceResumeThread @ 0x1402677AC
 * Callers:
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x14063FDC4 (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x1406B0E40 (NtTerminateProcess.c)
 * Callees:
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  char CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v4; // r8
  unsigned int v5; // edi
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1 + 736);
  v5 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 14) & 1);
  if ( v5 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(v4) = 1;
  KiResumeThread(a1, CurrentPrcb, v4);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v5;
}
