/*
 * XREFs of KeForceResumeThread @ 0x1402FA0EC
 * Callers:
 *     KeRequestTerminationThread @ 0x1402FBC30 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x1406B0D4C (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x1406B4060 (NtTerminateProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v7; // r8
  unsigned int v8; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736), a2, a3, (__int64)SchedulerAssist);
  v8 = *(char *)(a1 + 644) + ((*(_DWORD *)(a1 + 120) >> 14) & 1);
  if ( v8 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
    *(_BYTE *)(a1 + 644) = 0;
  }
  LOBYTE(v7) = 1;
  KiResumeThread(a1, CurrentPrcb, v7);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v8;
}
