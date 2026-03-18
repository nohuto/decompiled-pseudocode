/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x140263448
 * Callers:
 *     CcFetchDataForRead @ 0x14022EED0 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1402654AC (MmWaitMultipleForCacheManagerPrefetch.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfCompletePrefetchIos @ 0x1402634D4 (MiPfCompletePrefetchIos.c)
 *     MiReleaseReadListResources @ 0x14060931C (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
