/*
 * XREFs of KseShimDatabaseBootRelease @ 0x1407A63C0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403BF4C4 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x140741858 (KseShimDatabaseClose.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KsepSdbBootRelease @ 0x1407A6468 (KsepSdbBootRelease.c)
 */

_QWORD *KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v1 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v1 == 1) )
    {
      KsepSdbBootRelease(KsepShimDb);
      KsepSdbBootRelease(qword_140C2AEB8);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
