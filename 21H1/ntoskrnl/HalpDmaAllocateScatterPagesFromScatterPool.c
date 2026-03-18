/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPool @ 0x1404B360C
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C1C78 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x14086074C (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x1404B1E70 (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x1404B36CC (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV2 @ 0x1404C829C (HalpDmaAllocateScatterPagesFromScatterPoolV2.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // r8d
  int v8; // r9d
  __int64 v9; // r10

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
    return HalpDmaAllocateScatterPagesFromScatterPoolV2(v6, v9, v7, v8, a5, (__int64)a6);
  else
    return HalpDmaAllocateScatterPagesFromScatterPoolV3(v6, v9, v7, v8, a5, a6);
}
