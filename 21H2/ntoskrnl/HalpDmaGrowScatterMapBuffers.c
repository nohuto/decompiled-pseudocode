/*
 * XREFs of HalpDmaGrowScatterMapBuffers @ 0x1408655C8
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x1404B91A0 (HalpGrowMapBufferWorker.c)
 *     HalpAllocateMapRegisters @ 0x140864810 (HalpAllocateMapRegisters.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x1404C7474 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaAllocateScatterMemory @ 0x140865408 (HalpDmaAllocateScatterMemory.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
