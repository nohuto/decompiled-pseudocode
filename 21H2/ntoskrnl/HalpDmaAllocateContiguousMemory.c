/*
 * XREFs of HalpDmaAllocateContiguousMemory @ 0x1404C6A38
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140216B60 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousMemory(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        PHYSICAL_ADDRESS *a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  char v6; // r12
  __int64 v7; // rax
  int v8; // r13d
  unsigned int v9; // ebp
  __int64 v10; // rdi
  char i; // r14
  __int64 v12; // rbx
  void *ContiguousNodeMemory; // rax
  void *v14; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v5 = *(_QWORD *)(a1 + 136);
  v6 = 0;
  v7 = a1;
  v8 = a2 << 12;
  v9 = a2;
  while ( 2 )
  {
    if ( v6 || *(_BYTE *)(v7 + 145) || v9 > 0x10 )
      v10 = 0LL;
    else
      v10 = 0x10000LL;
    for ( i = 0; ; i = 1 )
    {
      v12 = 0LL;
      if ( !i && (_DWORD)v5 == -1 )
        v12 = 0x1000000LL;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v8, v12, v5, v10, 4u, 0x80000000);
      v14 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *a3 = v14;
        *a4 = PhysicalAddress;
        goto LABEL_20;
      }
      if ( i || !v12 )
        break;
    }
    if ( !v6 && v10 )
    {
      v7 = a1;
      v6 = 1;
      continue;
    }
    break;
  }
  v9 = 0;
LABEL_20:
  *a5 = 0LL;
  return v9;
}
