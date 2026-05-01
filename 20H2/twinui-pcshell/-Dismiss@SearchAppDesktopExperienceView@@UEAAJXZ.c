/*
 * XREFs of ?Dismiss@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1800A45B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18007E5D8 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::Dismiss(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView::DismissCortanaApp((SearchAppDesktopExperienceView *)((char *)this - 24));
  return 0LL;
}
