/*
 * XREFs of KseShimDatabaseOpen @ 0x14074564C
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1407403D4 (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x1407432B0 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KsepSdbMapToMemory @ 0x140740014 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x140740A88 (KsepSdbUnmapFromMemory.c)
 *     KsepDeletePatchSdb @ 0x1408BD754 (KsepDeletePatchSdb.c)
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
      _InterlockedIncrement(&dword_140C2A7B0);
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
    _InterlockedIncrement(&dword_140C2A7B8);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb", (__int64)KsepShimDb);
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2A7BC);
    goto LABEL_15;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb", (__int64)qword_140C2ACB8) >= 0
    && dword_140C2ACB0 >= (unsigned int)dword_140C2ACE8 )
  {
    KsepSdbUnmapFromMemory(qword_140C2ACB8);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)KsepShimDb;
  *a1 = KsepShimDb;
  _InterlockedIncrement(&dword_140C2A7B4);
LABEL_4:
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
