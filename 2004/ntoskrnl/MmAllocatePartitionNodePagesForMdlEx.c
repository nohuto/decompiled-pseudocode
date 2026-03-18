/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140313410
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x140313330 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403CB350 (MmAllocateNodePagesForMdlEx.c)
 *     HalAllocateCommonBufferVector @ 0x1404C0810 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C63C0 (HalpAllocateCommonBufferThin.c)
 *     HvlpDepositPages @ 0x1404ED7F8 (HvlpDepositPages.c)
 *     MmAllocateSecureKernelPages @ 0x14054DF34 (MmAllocateSecureKernelPages.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AB0A8 (EtwpAllocatePartitionMemory.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140894690 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiComputeNumaCosts @ 0x140A45AA0 (KiComputeNumaCosts.c)
 * Callees:
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x14031338C (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x14031379C (MiAllocatePagesForMdl.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        ULONG_PTR **BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  ULONG_PTR *v14; // rax
  ULONG_PTR *v15; // r15
  __int64 PagesForMdl; // rbx
  _BYTE v18[16]; // [rsp+40h] [rbp-38h] BYREF

  v18[0] = 0;
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
  if ( (v13 & 0x100) != 0 && ((v13 & 4) != 0 || KeGetCurrentIrql()) )
    return 0LL;
  v14 = MiPartitionObjectToPartition(BugCheckParameter2, 0, v18);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  PagesForMdl = MiAllocatePagesForMdl((_DWORD)v14, a1, a2, v9, a4, v12, a6, v13);
  if ( v18[0] )
    PsDereferencePartition(v15[22]);
  return PagesForMdl;
}
