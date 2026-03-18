/*
 * XREFs of KseShimDatabaseOpen @ 0x14075C68C
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
 *     KsepSdbUnmapFromMemory @ 0x1406E09F8 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     KsepDeletePatchSdb @ 0x140964CB8 (KsepDeletePatchSdb.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi

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
      _InterlockedIncrement(&dword_140C2A190);
      goto LABEL_4;
    }
    *a1 = 0LL;
    goto LABEL_16;
  }
  if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v3 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140C2A198);
    goto LABEL_4;
  }
  v3 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  if ( v3 < 0 )
  {
    *a1 = 0LL;
    _InterlockedIncrement(&dword_140C2A19C);
LABEL_16:
    v3 = -1073741823;
    goto LABEL_4;
  }
  if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
    && dword_140C2A690 >= (unsigned int)dword_140C2A6C8 )
  {
    KsepSdbUnmapFromMemory((__int64)&unk_140C2A698);
    KsepDeletePatchSdb();
  }
  ++KsepShimDbRefCount;
  KsepShimDbHandle = (__int64)&KsepShimDb;
  *a1 = &KsepShimDb;
  _InterlockedIncrement(&dword_140C2A194);
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
