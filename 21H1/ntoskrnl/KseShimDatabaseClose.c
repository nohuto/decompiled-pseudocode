/*
 * XREFs of KseShimDatabaseClose @ 0x140741858
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14073E854 (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140741730 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A38EBC (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x140582D70 (RtlAssert.c)
 *     KsepSdbUnmapFromMemory @ 0x14073EF08 (KsepSdbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x1407A63C0 (KseShimDatabaseBootRelease.c)
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
        KsepSdbUnmapFromMemory(KsepShimDb);
        KsepSdbUnmapFromMemory(qword_140C2AEB8);
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegion();
  }
}
