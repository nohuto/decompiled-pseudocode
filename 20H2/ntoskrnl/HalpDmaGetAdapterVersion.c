/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x140312EA0
 * Callers:
 *     HalGetScatterGatherList @ 0x140312E30 (HalGetScatterGatherList.c)
 *     HalAllocateCommonBuffer @ 0x140380FB0 (HalAllocateCommonBuffer.c)
 *     IoMapTransferInternal @ 0x14038858C (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x1403896D0 (IoFlushAdapterBuffers.c)
 *     IoFreeMapRegisters @ 0x1403A23E0 (IoFreeMapRegisters.c)
 *     HalJoinDmaDomain @ 0x1403C6720 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1404B70E0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B7134 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B7188 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B7264 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B7290 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B72F0 (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x1404B7350 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C531C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x140761540 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407BEFB0 (HalGetAdapterV3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 148);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
