/*
 * XREFs of KseShimDatabaseBootRelease @ 0x14084DB84
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403D2178 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x14075C588 (KseShimDatabaseClose.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KsepSdbBootRelease @ 0x14084DC30 (KsepSdbBootRelease.c)
 */

void KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    v1 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v1 == 1) )
    {
      KsepSdbBootRelease(&KsepShimDb);
      KsepSdbBootRelease(&unk_140C2A698);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
}
