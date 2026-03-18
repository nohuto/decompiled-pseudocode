/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x140505534
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140512C04 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x140503590 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x140518870 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(__int64 a1)
{
  __int64 v1; // rcx
  ULONG v2; // r8d
  __int64 v3; // r9

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2(v1, v3);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3(v1, v3, v2);
}
