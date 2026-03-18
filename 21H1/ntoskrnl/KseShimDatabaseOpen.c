/*
 * XREFs of KseShimDatabaseOpen @ 0x140743ACC
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14073E854 (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140741730 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A38EBC (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x14073EF08 (KsepSdbUnmapFromMemory.c)
 *     KsepDeletePatchSdb @ 0x1408BC434 (KsepDeletePatchSdb.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v3 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_140C2A9B0);
      goto LABEL_4;
    }
    *a1 = 0LL;
LABEL_15:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v3 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140C2A9B8);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb", (__int64)KsepShimDb);
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2A9BC);
    goto LABEL_15;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", (__int64)qword_140C2AEB8) >= 0
    && dword_140C2AEB0 >= (unsigned int)dword_140C2AEE8 )
  {
    KsepSdbUnmapFromMemory(qword_140C2AEB8);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)KsepShimDb;
  *a1 = KsepShimDb;
  _InterlockedIncrement(&dword_140C2A9B4);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return (unsigned int)v3;
}
