/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B3C14
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C1A0C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140342130 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404B1FE8 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1404C8234 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
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
