/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404B35B4
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C1C78 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x14086074C (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404B1BBC (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x1404B36CC (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1404C8008 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        ULONG *a6)
{
  __int64 v6; // rcx
  ULONG v7; // r8d
  int v8; // r9d
  __int64 v9; // r10

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
    return HalpDmaAllocateScatterPagesFromContiguousPoolV2(v6, v9, v7, v8, a5, (__int64)a6);
  else
    return HalpDmaAllocateScatterPagesFromContiguousPoolV3(v6, v9, v7, v8, a5, a6);
}
