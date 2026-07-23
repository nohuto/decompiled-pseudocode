/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x140234490
 * Callers:
 *     HalGetScatterGatherList @ 0x140234420 (HalGetScatterGatherList.c)
 *     HalAllocateCommonBuffer @ 0x140381200 (HalAllocateCommonBuffer.c)
 *     IoMapTransferInternal @ 0x140388E3C (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x140389F70 (IoFlushAdapterBuffers.c)
 *     IoFreeMapRegisters @ 0x1403A2DF0 (IoFreeMapRegisters.c)
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1404B8CE0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B8D34 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B8D88 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B8E64 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x1404B8F50 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6F2C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x1407649D0 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
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
