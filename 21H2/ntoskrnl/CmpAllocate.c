/*
 * XREFs of CmpAllocate @ 0x1406F8250
 * Callers:
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872FA8 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x1406F82B4 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x14072122C (CmpReleaseGlobalQuota.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
