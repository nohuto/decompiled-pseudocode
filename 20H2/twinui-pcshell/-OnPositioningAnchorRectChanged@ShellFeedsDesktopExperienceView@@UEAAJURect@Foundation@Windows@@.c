/*
 * XREFs of ?OnPositioningAnchorRectChanged@ShellFeedsDesktopExperienceView@@UEAAJURect@Foundation@Windows@@@Z @ 0x1800A7A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnPositioningAnchorRectChanged(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 128) = *a2;
  return result;
}
