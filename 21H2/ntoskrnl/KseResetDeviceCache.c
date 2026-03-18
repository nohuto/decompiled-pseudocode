/*
 * XREFs of KseResetDeviceCache @ 0x1409635EC
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x1409650EC (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  ULONG_PTR v2; // rdi

  if ( dword_140C54EF4 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C54F38;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C54F38);
    v2 = qword_140C54F38;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C54F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease(v2);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
