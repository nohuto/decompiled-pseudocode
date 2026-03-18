/*
 * XREFs of XpressDecodeClose @ 0x1405C4FA4
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409558B0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140761550 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( Buffer )
  {
    if ( Buffer[26] == 903790814 )
    {
      Buffer[26] = 0;
      CMFFreeFn(0LL, Buffer);
    }
  }
}
