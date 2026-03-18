/*
 * XREFs of MmReserveViewInSystemCache @ 0x1407A6C18
 * Callers:
 *     CcInitializePartitionVacbs @ 0x1403BF260 (CcInitializePartitionVacbs.c)
 *     CcBuildUpHighPriorityMappings @ 0x1404E5E54 (CcBuildUpHighPriorityMappings.c)
 * Callees:
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 */

__int64 __fastcall MmReserveViewInSystemCache(__int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = MiObtainSystemCacheView(*a1);
  if ( v1 )
    return (__int64)(v1 << 25) >> 16;
  ++dword_140C4F620;
  return 0LL;
}
