/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x1403341D0
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x140334170 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403CDF70 (MmAllocateNodePagesForMdlEx.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     HvlpDepositPages @ 0x1404F1064 (HvlpDepositPages.c)
 *     MmAllocateSecureKernelPages @ 0x140551904 (MmAllocateSecureKernelPages.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AEC08 (EtwpAllocatePartitionMemory.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14089A340 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiComputeNumaCosts @ 0x140A4BD40 (KiComputeNumaCosts.c)
 * Callees:
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     MiAllocatePagesForMdl @ 0x1403342D4 (MiAllocatePagesForMdl.c)
 *     MiPartitionObjectToPartition @ 0x140336E60 (MiPartitionObjectToPartition.c)
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
