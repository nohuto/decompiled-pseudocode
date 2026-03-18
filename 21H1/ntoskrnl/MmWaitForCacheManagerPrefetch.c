/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x1402BC478
 * Callers:
 *     CcFetchDataForRead @ 0x140287F20 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1402BE4DC (MmWaitMultipleForCacheManagerPrefetch.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiPfCompletePrefetchIos @ 0x1402BC504 (MiPfCompletePrefetchIos.c)
 *     MiReleaseReadListResources @ 0x14063E46C (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  int v1; // ebp
  _QWORD *v2; // r14
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return v3;
}
