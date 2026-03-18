/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407A44C0
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403BE2D0 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404E58A4 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)(v1 << 25) >> 16;
  ++dword_140C4F760;
  return 0LL;
}
