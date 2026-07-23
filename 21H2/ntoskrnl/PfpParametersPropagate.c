/*
 * XREFs of PfpParametersPropagate @ 0x1408E0C34
 * Callers:
 *     PfpParametersWatcher @ 0x1408E0D60 (PfpParametersWatcher.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfTStart @ 0x1407BFF5C (PfTStart.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408E07F8 (PfpRpShutdown.c)
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
  if ( (dword_140C4FC08 & 1) != 0 )
    v3 = a1[20] != dword_140C4FE1C;
  if ( (dword_140C4FC08 & 2) != 0 && a1[19] != dword_140C4FE24 )
    v3 |= 2u;
  if ( (dword_140C4FC08 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize(&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C50430 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C50420, 0LL);
      dword_140C50430 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C50398);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
