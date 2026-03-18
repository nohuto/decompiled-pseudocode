/*
 * XREFs of CmpAllocateForNonPagedHive @ 0x14053F520
 * Callers:
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14091972C (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x14068B144 (CmpClaimGlobalQuota.c)
 *     CmpReleaseGlobalQuota @ 0x14079CF18 (CmpReleaseGlobalQuota.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateForNonPagedHive(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  SIZE_T v4; // rbx
  PVOID PoolWithTag; // rdi

  v4 = (unsigned int)NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? NonPagedPoolNxCacheAligned : NonPagedPoolNx), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota((unsigned int)v4);
  return PoolWithTag;
}
