/*
 * XREFs of ?ArrangementStyleFromOverlap@@YGKK@Z @ 0x170C7D
 * Callers:
 *     ?IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1718DA (-IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ArrangementStyleFromOverlap(char a1)
{
  int v1; // edx

  v1 = 0;
  if ( (a1 & 3) == 3 )
    v1 = 35073;
  if ( (a1 & 9) == 9 )
    v1 = 35073;
  if ( (a1 & 6) == 6 )
    v1 |= 0x8902u;
  if ( (a1 & 0xC) == 0xC )
    return v1 | 0x8902;
  return v1;
}
