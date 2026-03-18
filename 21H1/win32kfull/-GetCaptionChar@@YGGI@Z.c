/*
 * XREFs of ?GetCaptionChar@@YGGI@Z @ 0x9106C
 * Callers:
 *     ?DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z @ 0x8FEF0 (-DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 * Callees:
 *     <none>
 */

int __fastcall GetCaptionChar(char a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 & 0xF;
  if ( !v1 )
    return 114;
  v2 = v1 - 1;
  if ( !v2 )
    return 48;
  v3 = v2 - 1;
  if ( !v3 )
    return 49;
  if ( v3 == 1 )
    return 50;
  return 115;
}
