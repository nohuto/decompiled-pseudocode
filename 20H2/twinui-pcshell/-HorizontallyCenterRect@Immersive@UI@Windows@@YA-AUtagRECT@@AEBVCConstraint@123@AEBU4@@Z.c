/*
 * XREFs of ?HorizontallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x180479B80
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x180479C4C (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x180479D58 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

LPRECT __fastcall Windows::UI::Immersive::HorizontallyCenterRect(
        LPRECT lprc,
        struct tagRECT *__return_ptr retstr,
        const struct Windows::UI::Immersive::CConstraint *a3,
        const struct tagRECT *a4)
{
  __int64 v5; // kr00_8

  v5 = retstr->left + retstr->right - *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
  *lprc = *(LPRECT)a3;
  OffsetRect(lprc, v5 / 2, 0);
  return lprc;
}
