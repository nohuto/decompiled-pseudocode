/*
 * XREFs of KeResumeThread @ 0x140356BE0
 * Callers:
 *     KeAlertResumeThread @ 0x14050D4A0 (KeAlertResumeThread.c)
 *     PsResumeProcess @ 0x1406E90D0 (PsResumeProcess.c)
 *     PsResumeThread @ 0x140708FB0 (PsResumeThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x140356190 (KiResumeThread.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  volatile signed __int32 *v7; // rsi
  __int64 v8; // r9
  unsigned int v9; // r14d
  char v10; // al

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
  v9 = *(char *)(a1 + 644);
  if ( *(_BYTE *)(a1 + 644) )
  {
    v10 = *(_BYTE *)(a1 + 644) - 1;
    *(_BYTE *)(a1 + 644) = v10;
    if ( !v10 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
      KiResumeThread(a1, (__int64)CurrentPrcb, 0LL, v8);
  }
  _InterlockedAnd(v7, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v9;
}
