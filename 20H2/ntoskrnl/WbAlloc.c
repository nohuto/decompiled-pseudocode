/*
 * XREFs of WbAlloc @ 0x14065F5FC
 * Callers:
 *     sub_1405D3E30 @ 0x1405D3E30 (sub_1405D3E30.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405D43A0 (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405D4C04 (WbInitializeEncryptionSegment.c)
 *     WbProcessModuleUnload @ 0x14065BF28 (WbProcessModuleUnload.c)
 *     WbHashData @ 0x14065DC58 (WbHashData.c)
 *     WbCreateHeapExecutedBlock @ 0x14065E314 (WbCreateHeapExecutedBlock.c)
 *     WbDispatchOperation @ 0x14065F0D4 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1406E1924 (WbAllocateMemoryBlock.c)
 *     WbReAlloc @ 0x1406E2598 (WbReAlloc.c)
 *     WbCreateWarbirdProcess @ 0x1406E2A94 (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406E2F88 (WbProcessStartup.c)
 *     sub_1406E36CC @ 0x1406E36CC (sub_1406E36CC.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbAlloc(SIZE_T NumberOfBytes, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = 0LL;
  if ( (_DWORD)NumberOfBytes
    && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42524157u)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    if ( a2 )
    {
      *a2 = PoolWithTag;
      PoolWithTag = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x42524157u);
  }
  return v2;
}
