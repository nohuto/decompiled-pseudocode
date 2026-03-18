/*
 * XREFs of CmpAllocate @ 0x1405DE8B0
 * Callers:
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140875598 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x1405DE914 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x14070696C (CmpReleaseGlobalQuota.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(NumberOfBytes) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
