/*
 * XREFs of ?IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1718DA
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@@Z @ 0x174406 (-xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAU.c)
 * Callees:
 *     ?ArrangementStyleFromOverlap@@YGKK@Z @ 0x170C7D (-ArrangementStyleFromOverlap@@YGKK@Z.c)
 *     ?GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z @ 0x171195 (-GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z.c)
 */

int __fastcall IsProperRectForArrangement(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // ebx
  char OverlapCoordinatesForArrangement; // al
  int v5; // ecx
  bool v6; // zf
  const struct tagRECT *v8; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  v3 = 0;
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(
                                       a2,
                                       a1,
                                       (const struct tagRECT *const)1,
                                       v8,
                                       savedregs);
  v5 = ArrangementStyleFromOverlap(OverlapCoordinatesForArrangement);
  if ( a3 == 1 )
  {
    v3 = 0;
    v6 = v5 == 35073;
    goto LABEL_5;
  }
  if ( a3 == 2 )
  {
    v6 = v5 == 35074;
LABEL_5:
    LOBYTE(v3) = v6;
  }
  return v3;
}
