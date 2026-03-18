/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B3534
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140304650 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404B1908 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1404C7D84 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
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
