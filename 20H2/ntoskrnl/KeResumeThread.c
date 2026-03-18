/*
 * XREFs of KeResumeThread @ 0x1403106F4
 * Callers:
 *     KeAlertResumeThread @ 0x140511420 (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x1406BC270 (PsResumeProcess.c)
 *     PsResumeThread @ 0x1406BC3F0 (PsResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  volatile signed __int32 *v7; // rsi
  unsigned int v8; // r14d
  char v9; // al

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
  v7 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736), a2, a3, (__int64)SchedulerAssist);
  v8 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v9 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v9;
    if ( !v9 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
      KiResumeThread(a1, (__int64)CurrentPrcb, 0LL);
  }
  _InterlockedAnd(v7, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v8;
}
