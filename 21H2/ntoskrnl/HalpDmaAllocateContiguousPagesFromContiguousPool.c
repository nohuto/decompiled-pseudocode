/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x140456892
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1404588B6 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140503628 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPool(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v1, v2);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v1, v2);
}
