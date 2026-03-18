/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x140342130
 * Callers:
 *     HalGetScatterGatherList @ 0x1403420C0 (HalGetScatterGatherList.c)
 *     HalAllocateCommonBuffer @ 0x14037F280 (HalAllocateCommonBuffer.c)
 *     IoMapTransferInternal @ 0x1403863EC (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x140387510 (IoFlushAdapterBuffers.c)
 *     IoFreeMapRegisters @ 0x14039FF10 (IoFreeMapRegisters.c)
 *     HalJoinDmaDomain @ 0x1403C4390 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1404B3BC0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B3C14 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B3C68 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B3D44 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B3D70 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B3DD0 (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x1404B3E30 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C1DFC (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x140752960 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407B1070 (HalGetAdapterV3.c)
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
