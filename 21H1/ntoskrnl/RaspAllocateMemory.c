/*
 * XREFs of RaspAllocateMemory @ 0x1403B1968
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403AF798 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x1403B0070 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x1403B0570 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1403B0DDC (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x1403B0EB4 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1403B1190 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403B1590 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x1403B18E0 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1405BFF0C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C0244 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140399064 (BgpFwAllocateMemory.c)
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
