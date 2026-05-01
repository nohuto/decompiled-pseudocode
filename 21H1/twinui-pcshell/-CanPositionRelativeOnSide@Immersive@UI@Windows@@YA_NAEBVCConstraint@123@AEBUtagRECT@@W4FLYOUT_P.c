/*
 * XREFs of ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x180456488
 * Callers:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1804566E8 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::UI::Immersive::CanPositionRelativeOnSide(int *a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // r11d
  int v5; // r10d
  char v6; // bl
  int v7; // r10d
  int v8; // r11d

  v4 = 0;
  v5 = 0;
  v6 = 1;
  if ( a3 < 0 )
    goto LABEL_12;
  if ( a3 <= 1 )
  {
    v8 = a4[2];
    v7 = a1[1];
    goto LABEL_10;
  }
  switch ( a3 )
  {
    case 2:
      v4 = a4[2] - *a4;
      v5 = a4[3] - a1[3];
      break;
    case 3:
      v8 = *a1;
      v7 = a4[3];
LABEL_10:
      v4 = v8 - *a4;
      goto LABEL_11;
    case 4:
      v4 = a4[2] - a1[2];
      v7 = a4[3];
LABEL_11:
      v5 = v7 - a4[1];
      break;
  }
LABEL_12:
  if ( v4 < a2[2] - *a2 || v5 < a2[3] - a2[1] )
    return 0;
  return v6;
}
