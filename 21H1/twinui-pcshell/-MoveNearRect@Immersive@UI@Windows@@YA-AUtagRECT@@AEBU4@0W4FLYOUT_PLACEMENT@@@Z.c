/*
 * XREFs of ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x18045655C
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1804565DC (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::MoveNearRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        _DWORD *a3,
        int a4)
{
  int v4; // eax
  int v6; // r8d

  v4 = 0;
  if ( a4 < 0 )
    goto LABEL_10;
  if ( a4 <= 1 )
  {
    v6 = a3[1] - a2->bottom;
  }
  else
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        v4 = *a3 - a2->right;
        goto LABEL_11;
      }
      if ( a4 == 4 )
      {
        v4 = a3[2] - a2->left;
LABEL_11:
        v6 = 0;
        goto LABEL_12;
      }
LABEL_10:
      v4 = 0;
      goto LABEL_11;
    }
    v6 = a3[3] - a2->top;
  }
LABEL_12:
  *a1 = *a2;
  OffsetRect(a1, v4, v6);
  return a1;
}
