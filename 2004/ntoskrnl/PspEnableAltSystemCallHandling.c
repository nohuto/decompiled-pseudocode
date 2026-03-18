/*
 * XREFs of PspEnableAltSystemCallHandling @ 0x140904848
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspEnableAltSystemCallHandling(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v3; // rdi
  volatile signed __int32 **v5; // rsi
  volatile signed __int32 *i; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)qword_140CFC7A0 < 2 )
    return 3221225473LL;
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 1080);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( (*(_DWORD *)(a1 + 2172) & 0x2000001) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 3221225473LL;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2172), 0x2000000u);
  v5 = (volatile signed __int32 **)(a1 + 1504);
  for ( i = *v5; i != (volatile signed __int32 *)v5; i = *(volatile signed __int32 **)i )
    _interlockedbittestandset(i - 314, 0x1Du);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0LL;
}
