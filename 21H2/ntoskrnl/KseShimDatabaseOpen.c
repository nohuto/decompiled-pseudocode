/*
 * XREFs of KseShimDatabaseOpen @ 0x14075B2A0
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14075603C (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140758E20 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x1407565FC (KsepSdbUnmapFromMemory.c)
 *     KsepDeletePatchSdb @ 0x1408C0DD4 (KsepDeletePatchSdb.c)
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
      _InterlockedIncrement(&dword_140C2AA50);
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
    _InterlockedIncrement(&dword_140C2AA58);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb", (__int64)KsepShimDb);
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2AA5C);
    goto LABEL_15;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", (__int64)qword_140C2AF38) >= 0
    && dword_140C2AF30 >= (unsigned int)dword_140C2AF68 )
  {
    KsepSdbUnmapFromMemory(qword_140C2AF38);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)KsepShimDb;
  *a1 = KsepShimDb;
  _InterlockedIncrement(&dword_140C2AA54);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return (unsigned int)v3;
}
