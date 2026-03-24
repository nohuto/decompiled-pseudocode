/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x1402B62B0
 * Callers:
 *     HalGetScatterGatherList @ 0x1402B6240 (HalGetScatterGatherList.c)
 *     HalAllocateCommonBuffer @ 0x1403816B0 (HalAllocateCommonBuffer.c)
 *     IoMapTransferInternal @ 0x140388CEC (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x140389E20 (IoFlushAdapterBuffers.c)
 *     IoFreeMapRegisters @ 0x1403A2CA0 (IoFreeMapRegisters.c)
 *     HalJoinDmaDomain @ 0x1403C7110 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1404B8AA0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B8AF4 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B8B48 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B8C24 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8C50 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8CB0 (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x1404B8D10 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6CEC (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x140764810 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C33B0 (HalGetAdapterV3.c)
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
