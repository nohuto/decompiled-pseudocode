/*
 * XREFs of CmpAllocate @ 0x140720DE0
 * Callers:
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872E48 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140709E4C (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140720E44 (CmpClaimGlobalQuota.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
