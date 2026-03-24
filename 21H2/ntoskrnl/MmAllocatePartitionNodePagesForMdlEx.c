/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x1402E32F0
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1402E3290 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403CE960 (MmAllocateNodePagesForMdlEx.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5700 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB2F0 (HalpAllocateCommonBufferThin.c)
 *     HvlpDepositPages @ 0x1404F2C04 (HvlpDepositPages.c)
 *     MmAllocateSecureKernelPages @ 0x1405533D4 (MmAllocateSecureKernelPages.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0608 (EtwpAllocatePartitionMemory.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897910 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiComputeNumaCosts @ 0x140A4D2E0 (KiComputeNumaCosts.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     MiAllocatePagesForMdl @ 0x1402E33F4 (MiAllocatePagesForMdl.c)
 *     MiPartitionObjectToPartition @ 0x1402E5F80 (MiPartitionObjectToPartition.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  __int64 v14; // rax

  v9 = a3;
  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a5;
  if ( a5 == -1 || a5 > 2 )
    v12 = 3;
  v13 = a7;
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x60) == 0x20 )
  {
    v13 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v13 = a7 | 0x14;
    }
  }
  if ( (v13 & 0x100) == 0 || (v13 & 4) == 0 && !KeGetCurrentIrql() )
  {
    v14 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v14 )
      return MiAllocatePagesForMdl(v14, a1, a2, v9, a4, v12, a6, v13);
  }
  return 0LL;
}
