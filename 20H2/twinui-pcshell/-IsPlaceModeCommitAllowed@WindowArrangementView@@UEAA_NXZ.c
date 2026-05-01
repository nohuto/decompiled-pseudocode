/*
 * XREFs of ?IsPlaceModeCommitAllowed@WindowArrangementView@@UEAA_NXZ @ 0x180085570
 * Callers:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800109CC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangementView::IsPlaceModeCommitAllowed(WindowArrangementView *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
