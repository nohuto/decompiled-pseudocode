/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B7134
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140312EA0 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404B5508 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1404CB794 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        ULONG *a6)
{
  __int64 v6; // rcx
  ULONG v7; // r8d
  char v8; // r9
  __int64 v9; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v6, v9);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v6, v9, v7, v8, a5, a6);
}
