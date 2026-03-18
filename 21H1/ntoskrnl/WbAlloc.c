/*
 * XREFs of WbAlloc @ 0x14065F1C8
 * Callers:
 *     sub_1405CC5BC @ 0x1405CC5BC (sub_1405CC5BC.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405CCB2C (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405CD390 (WbInitializeEncryptionSegment.c)
 *     WbHashData @ 0x14065C34C (WbHashData.c)
 *     WbCreateHeapExecutedBlock @ 0x14065CA04 (WbCreateHeapExecutedBlock.c)
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 *     WbProcessModuleUnload @ 0x1406D53C8 (WbProcessModuleUnload.c)
 *     WbReAlloc @ 0x1406D6D80 (WbReAlloc.c)
 *     WbAllocateMemoryBlock @ 0x1406EB6D4 (WbAllocateMemoryBlock.c)
 *     WbCreateWarbirdProcess @ 0x1406ECC7C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406ED048 (WbProcessStartup.c)
 *     sub_1406ED56C @ 0x1406ED56C (sub_1406ED56C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
