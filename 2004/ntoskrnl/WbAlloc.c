/*
 * XREFs of WbAlloc @ 0x140619AA8
 * Callers:
 *     sub_1405CD98C @ 0x1405CD98C (sub_1405CD98C.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405CDEFC (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1405CE760 (WbInitializeEncryptionSegment.c)
 *     WbDispatchOperation @ 0x140619580 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1406D8A34 (WbAllocateMemoryBlock.c)
 *     WbCreateHeapExecutedBlock @ 0x1406D8EB0 (WbCreateHeapExecutedBlock.c)
 *     WbHashData @ 0x1406D9BD4 (WbHashData.c)
 *     WbReAlloc @ 0x1406DA390 (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x1406F8848 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x14071075C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x140710BF8 (WbProcessStartup.c)
 *     sub_14071109C @ 0x14071109C (sub_14071109C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
