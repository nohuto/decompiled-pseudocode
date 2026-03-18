/*
 * XREFs of HalpDmaGrowScatterMapBuffers @ 0x1409095FC
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x140505810 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x140908B50 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x14051314C (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x14090943C (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaGrowScatterMapBuffers(PHYSICAL_ADDRESS *a1, unsigned int a2)
{
  PMDL v3; // rax
  struct _MDL *v4; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  v3 = HalpDmaAllocateScatterMemory(a1, a2, &BaseAddress);
  v4 = v3;
  if ( v3 )
  {
    if ( !HalpDmaCommitScatterMapBuffers((__int64)a1, (__int64)BaseAddress, 0LL, 0, v3) )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, v4);
      MmFreePagesFromMdl(v4);
    }
    ExFreePoolWithTag(v4, 0);
  }
}
