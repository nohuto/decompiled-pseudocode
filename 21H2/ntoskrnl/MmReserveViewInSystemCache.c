/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407BC944
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403C3328 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404EAF74 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140312500 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  __int64 v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return v1 << 25 >> 16;
  ++dword_140C4F820;
  return 0LL;
}
