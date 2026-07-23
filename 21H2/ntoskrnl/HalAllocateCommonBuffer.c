/*
 * XREFs of HalAllocateCommonBuffer @ 0x140381200
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140234490 (HalpDmaGetAdapterVersion.c)
 *     HalAllocateCommonBufferExV2 @ 0x140380EA0 (HalAllocateCommonBufferExV2.c)
 *     HalAllocateCommonBufferExV3 @ 0x1403A12C0 (HalAllocateCommonBufferExV3.c)
 */

PVOID __stdcall HalAllocateCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PPHYSICAL_ADDRESS LogicalAddress,
        BOOLEAN CacheEnabled)
{
  PHYSICAL_ADDRESS *v4; // r8
  char v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  int v9; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) != 2 )
    return (PVOID)HalAllocateCommonBufferExV3(v6, 0, v7, (_DWORD)v4, 1, 0x80000000);
  LOBYTE(v9) = v5;
  return HalAllocateCommonBufferExV2(v6, 0LL, v7, v4, v9, 0x80000000);
}
