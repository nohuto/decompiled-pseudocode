/*
 * XREFs of KseShimDatabaseBootRelease @ 0x1407B8000
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403C2BC8 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x140751FB8 (KseShimDatabaseClose.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KsepSdbBootRelease @ 0x1407B80A8 (KsepSdbBootRelease.c)
 */

_QWORD *KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v1 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v1 == 1) )
    {
      KsepSdbBootRelease(KsepShimDb);
      KsepSdbBootRelease(qword_140C2AD98);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
