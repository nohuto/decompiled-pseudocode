/*
 * XREFs of XpressDecodeClose @ 0x1405C4874
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409541E0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14075F150 (CMFFreeFn.c)
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
