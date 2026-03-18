/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407B7CE4
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403C2AD8 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404E93E4 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)(v1 << 25) >> 16;
  ++dword_140C4F6A0;
  return 0LL;
}
