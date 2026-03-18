/*
 * XREFs of HalAllocateCommonBufferExV2 @ 0x14037E6D0
 * Callers:
 *     HalAllocateCommonBuffer @ 0x14037E890 (HalAllocateCommonBuffer.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1402F8F60 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 */

void *__fastcall HalAllocateCommonBufferExV2(__int64 a1, __int64 *a2, int a3, PHYSICAL_ADDRESS *a4, int a5, int a6)
{
  __int64 v8; // r8
  void *ContiguousNodeMemory; // rax
  void *v10; // rbx

  if ( a2 )
    v8 = *a2;
  else
    v8 = *(_QWORD *)(a1 + 136);
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(a3, 0LL, v8, 0, *(_BYTE *)(a1 + 437) != 0 ? 4 : 516, a6);
  v10 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
    *a4 = MmGetPhysicalAddress(ContiguousNodeMemory);
  return v10;
}
