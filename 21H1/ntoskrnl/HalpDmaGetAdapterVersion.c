/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x140304650
 * Callers:
 *     HalGetScatterGatherList @ 0x1403045E0 (HalGetScatterGatherList.c)
 *     HalAllocateCommonBuffer @ 0x14037E890 (HalAllocateCommonBuffer.c)
 *     IoMapTransferInternal @ 0x14038547C (IoMapTransferInternal.c)
 *     IoFlushAdapterBuffers @ 0x1403865A0 (IoFlushAdapterBuffers.c)
 *     IoFreeMapRegisters @ 0x14039F780 (IoFreeMapRegisters.c)
 *     HalJoinDmaDomain @ 0x1403C34D0 (HalJoinDmaDomain.c)
 *     HalAllocateAdapterChannel @ 0x1404B34E0 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B3534 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B3588 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B3664 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B3690 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B36F0 (HalpDmaNextContiguousPiece.c)
 *     IoFreeAdapterChannel @ 0x1404B3750 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C198C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV2 @ 0x14074E2D0 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407ADF10 (HalGetAdapterV3.c)
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
