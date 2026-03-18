/*
 * XREFs of PfpParametersPropagate @ 0x1408DC164
 * Callers:
 *     PfpParametersWatcher @ 0x1408DC290 (PfpParametersWatcher.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     PfTStart @ 0x1407AA59C (PfTStart.c)
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408DBD28 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_140C4FB08 & 1) != 0 )
    v3 = a1[20] != dword_140C4FD1C;
  if ( (dword_140C4FB08 & 2) != 0 && a1[19] != dword_140C4FD24 )
    v3 |= 2u;
  if ( (dword_140C4FB08 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize(&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C50330 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C50320, 0LL);
      dword_140C50330 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C50298);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
