/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1402FB588
 * Callers:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1402F9980 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x140320A30 (CcFetchDataForRead.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1402FCB00 (MiPfCompletePrefetchIos.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReleaseReadListResources @ 0x1406E8B14 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  int v1; // ebp
  _QWORD *v2; // r14
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx

  v1 = P[26];
  v2 = P;
  v3 = 0;
  do
  {
    v4 = (_QWORD *)*v2;
    v5 = MiPfCompletePrefetchIos(v2 + 15, 0LL, 0LL);
    MiReleaseReadListResources(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = v4;
    if ( v5 < 0 )
      v3 = v5;
  }
  while ( v4 );
  if ( (v1 & 1) != 0 )
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return v3;
}
