/*
 * XREFs of PfpParametersPropagate @ 0x1408E3314
 * Callers:
 *     PfpParametersWatcher @ 0x1408E3440 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     PfTStart @ 0x1407BB63C (PfTStart.c)
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408E2ED8 (PfpRpShutdown.c)
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
  if ( (dword_140C4FA48 & 1) != 0 )
    v3 = a1[20] != dword_140C4FC5C;
  if ( (dword_140C4FA48 & 2) != 0 && a1[19] != dword_140C4FC64 )
    v3 |= 2u;
  if ( (dword_140C4FA48 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize(&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C50270 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C50260, 0LL);
      dword_140C50270 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C501D8);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
