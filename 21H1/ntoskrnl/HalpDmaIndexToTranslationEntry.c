/*
 * XREFs of HalpDmaIndexToTranslationEntry @ 0x1404C2938
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B1AE8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404B1BBC (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaLinkContiguousTranslations @ 0x1404C2974 (HalpDmaLinkContiguousTranslations.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404C7F40 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1404C8008 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaIndexToTranslationEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 *v3; // r9
  unsigned int v4; // eax

  v3 = *(__int64 **)(a1 + 40);
  while ( 1 )
  {
    if ( !v3 )
      return 0LL;
    v4 = *((_DWORD *)v3 + 2);
    if ( a2 < v4 )
      break;
    v3 = (__int64 *)*v3;
    a2 -= v4;
  }
  if ( a3 )
    *a3 = v3;
  return v3[2] + 72LL * a2;
}
