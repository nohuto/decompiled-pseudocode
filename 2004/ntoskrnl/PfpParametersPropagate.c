/*
 * XREFs of PfpParametersPropagate @ 0x1408DD4D4
 * Callers:
 *     PfpParametersWatcher @ 0x1408DD600 (PfpParametersWatcher.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     PfTStart @ 0x1407AD6FC (PfTStart.c)
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408DD098 (PfpRpShutdown.c)
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
  if ( (dword_140C4F9C8 & 1) != 0 )
    v3 = a1[20] != dword_140C4FBDC;
  if ( (dword_140C4F9C8 & 2) != 0 && a1[19] != dword_140C4FBE4 )
    v3 |= 2u;
  if ( (dword_140C4F9C8 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize(&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C501F0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C501E0, 0LL);
      dword_140C501F0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C50158);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
