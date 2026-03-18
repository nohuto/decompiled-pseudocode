/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x14023A8D0
 * Callers:
 *     HalGetScatterGatherList @ 0x14023A860 (HalGetScatterGatherList.c)
 *     IoMapTransferInternal @ 0x140390C08 (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x140393E00 (IoFlushAdapterBuffers.c)
 *     HalJoinDmaDomain @ 0x1403CD4E0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x140456892 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x14045699C (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     HalAllocateCommonBuffer @ 0x1405054E0 (HalAllocateCommonBuffer.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x140505534 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1405055B8 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140512C04 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
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
