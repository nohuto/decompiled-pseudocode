/*
 * XREFs of ?PtInRectSpace@@YGHPBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x171FF4
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3 (-HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_M.c)
 * Callees:
 *     <none>
 */

int __fastcall PtInRectSpace(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // edx
  int v7; // eax

  v4 = 0;
  if ( !a2 )
  {
    if ( a3 < *a1 || a3 >= a1[2] )
      return v4;
    v7 = a4;
    goto LABEL_18;
  }
  v5 = a2 - 1;
  if ( !v5 )
    goto LABEL_6;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( a3 >= *a1 && a3 < a1[2] && a4 >= a1[1] )
        return 1;
      return v4;
    }
    if ( a3 < *a1 )
      return v4;
LABEL_6:
    if ( a3 >= a1[2] )
      return v4;
    goto LABEL_7;
  }
  if ( a3 < *a1 )
    return v4;
LABEL_7:
  v7 = a4;
  if ( a4 < a1[1] )
    return v4;
LABEL_18:
  if ( v7 < a1[3] )
    return 1;
  return v4;
}
