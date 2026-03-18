/*
 * XREFs of RaspAllocateMemory @ 0x1403AB118
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403A8F3C (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x1403A9814 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x1403A9D20 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1403AA58C (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x1403AA664 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1403AA940 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403AAD40 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x1403AB090 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1405C062C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C0964 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
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
