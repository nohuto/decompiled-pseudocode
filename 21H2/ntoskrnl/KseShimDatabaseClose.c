/*
 * XREFs of KseShimDatabaseClose @ 0x14075C588
 * Callers:
 *     KsepDbGetDriverShims @ 0x14075C460 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x1407ED450 (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     KsepSdbUnmapFromMemory @ 0x1406E09F8 (KsepSdbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x14084DB84 (KseShimDatabaseBootRelease.c)
 */

void __fastcall KseShimDatabaseClose(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // eax
  __int64 v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( a1 != KsepShimDbHandle )
  {
    v4 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v4 + 1] = -1073740768;
    KsepHistoryErrors[2 * v4] = 590387;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("DbHandleIn == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x233u, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegion();
    KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v3 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v3 == 1) )
      {
        KsepSdbUnmapFromMemory((__int64)&KsepShimDb);
        KsepSdbUnmapFromMemory((__int64)&unk_140C2A698);
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegion();
  }
}
