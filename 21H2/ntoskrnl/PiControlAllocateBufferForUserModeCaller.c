/*
 * XREFs of PiControlAllocateBufferForUserModeCaller @ 0x1402C27E0
 * Callers:
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1406AE010 (PiControlGetRelatedDevice.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B36F0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B3850 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3A70 (PiControlQueryDeviceRelations.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140414200 (memset.c)
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
