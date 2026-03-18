/*
 * XREFs of ?GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z @ 0x171195
 * Callers:
 *     ?IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1718DA (-IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C (-PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@3PAUtagWND@@33@Z @ 0x172538 (-TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIREC.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge GetOverlapCoordinatesForArrangement@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        const struct tagRECT *const a3,
        const struct tagRECT *const a4,
        int a5)
{
  int v6; // edx

  if ( a3 && *a2 > *a1 )
    return 0;
  v6 = *a1 == *a2;
  if ( a3 )
  {
    if ( a2[1] > a1[1] )
      return 0;
  }
  if ( a2[1] == a1[1] )
    v6 |= 2u;
  if ( a3 && a2[2] < a1[2] )
    return 0;
  if ( a2[2] == a1[2] )
    v6 |= 4u;
  if ( a3 && a2[3] < a1[3] )
    return 0;
  if ( a2[3] == a1[3] )
    return v6 | 8;
  return v6;
}
