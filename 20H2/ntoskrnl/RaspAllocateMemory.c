/*
 * XREFs of RaspAllocateMemory @ 0x1403ADB08
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403AB92C (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x1403AC204 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x1403AC710 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1403ACF7C (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x1403AD054 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1403AD330 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403AD730 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x1403ADA80 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1405C42AC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C45E4 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14039BCB4 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
