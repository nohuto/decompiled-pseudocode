/*
 * XREFs of XpressDecodeClose @ 0x1405C8C34
 * Callers:
 *     CMFReadCompressedSegment @ 0x14095B670 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14076FB60 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[26] == 903790814 )
    {
      a1[26] = 0;
      CMFFreeFn(0LL, a1);
    }
  }
}
