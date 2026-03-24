/*
 * XREFs of KseShimDatabaseOpen @ 0x14075B0E0
 * Callers:
 *     KsepDbCacheReadDevice @ 0x140755E7C (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140758C60 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1408BF81C (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A3C89C (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KsepSdbMapToMemory @ 0x140755A54 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x14075643C (KsepSdbUnmapFromMemory.c)
 *     KsepDeletePatchSdb @ 0x1408C0C74 (KsepDeletePatchSdb.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  char v4; // si

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
      _InterlockedIncrement(&dword_140C2AA10);
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
    _InterlockedIncrement(&dword_140C2AA18);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb", (__int64)KsepShimDb);
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2AA1C);
    goto LABEL_15;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", (__int64)qword_140C2AEF8) >= 0
    && dword_140C2AEF0 >= (unsigned int)dword_140C2AF28 )
  {
    KsepSdbUnmapFromMemory(qword_140C2AEF8);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)KsepShimDb;
  *a1 = KsepShimDb;
  _InterlockedIncrement(&dword_140C2AA14);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
