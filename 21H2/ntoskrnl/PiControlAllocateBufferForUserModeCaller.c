/*
 * XREFs of PiControlAllocateBufferForUserModeCaller @ 0x140240C80
 * Callers:
 *     PiControlGetPropertyData @ 0x14060C640 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x14060C8B0 (PiControlGetRelatedDevice.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B3850 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B39B0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3BD0 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PiControlAllocateBufferForUserModeCaller(_QWORD *a1, unsigned int a2, char a3, __int64 a4)
{
  size_t v6; // rdi
  PVOID PoolWithQuotaTag; // rax

  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = a4;
    return 0LL;
  }
  v6 = a2;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a2, 0x20207050u);
  *a1 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memset(PoolWithQuotaTag, 0, v6);
    return 0LL;
  }
  return 3221225626LL;
}
