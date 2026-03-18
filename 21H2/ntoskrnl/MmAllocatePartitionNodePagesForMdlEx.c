/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403A5320 (MmAllocateNodePagesForMdlEx.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140511BD0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405164D0 (HalpAllocateCommonBufferDmarThin.c)
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 *     EtwpAllocatePartitionMemory @ 0x1406333A8 (EtwpAllocatePartitionMemory.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14093BBD8 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiComputeNumaCosts @ 0x140B31500 (KiComputeNumaCosts.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140264ED0 (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
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
  __int64 v16; // rdx
  __int64 PagesForMdl; // rbx
  __int64 v18; // r8
  _BYTE v20[16]; // [rsp+50h] [rbp-38h] BYREF

  v20[0] = 0;
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
  v14 = MiPartitionObjectToPartition(BugCheckParameter2, 0LL, v20);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  PagesForMdl = MiAllocatePagesForMdl(
                  (_DWORD)v14,
                  a1,
                  a2,
                  v9,
                  a4,
                  v12,
                  a6,
                  v13,
                  (__int64)KeGetCurrentThread()->ApcState.Process);
  if ( v20[0] )
    PsDereferencePartition(v15[22], v16, v18);
  return PagesForMdl;
}
