/*
 * XREFs of PfpParametersPropagate @ 0x140989028
 * Callers:
 *     PfpParametersWatcher @ 0x140989150 (PfpParametersWatcher.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     PfTCleanup @ 0x1409882B4 (PfTCleanup.c)
 *     PfTStart @ 0x1409884F4 (PfTStart.c)
 *     PfpRpShutdown @ 0x140988CC0 (PfpRpShutdown.c)
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
  if ( (dword_140C4E968 & 1) != 0 )
    v3 = a1[20] != dword_140C4EB7C;
  if ( (dword_140C4E968 & 2) != 0 && a1[19] != dword_140C4EB84 )
    v3 |= 2u;
  if ( (dword_140C4E968 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize(&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C54630 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C54620, 0LL);
      dword_140C54630 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C54598);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
