/*
 * XREFs of PfpParametersPropagate @ 0x1408E0AD4
 * Callers:
 *     PfpParametersWatcher @ 0x1408E0C00 (PfpParametersWatcher.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     PfTInitialize @ 0x1407BED40 (PfTInitialize.c)
 *     PfTStart @ 0x1407BFA40 (PfTStart.c)
 *     PfTCleanup @ 0x1408E03BC (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1408E0698 (PfpRpShutdown.c)
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
  if ( (dword_140C4FBC8 & 1) != 0 )
    v3 = a1[20] != dword_140C4FDDC;
  if ( (dword_140C4FBC8 & 2) != 0 && a1[19] != dword_140C4FDE4 )
    v3 |= 2u;
  if ( (dword_140C4FBC8 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize(&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C503F0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C503E0, 0LL);
      dword_140C503F0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C50358);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
