/*
 * XREFs of ?ShellReadyChanged@SearchAppDesktopExperienceView@@EEAAJXZ @ 0x1801E50E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801E4B00 (-PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShellReadyChanged(SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView::PostTargetedMessage((__int64)this - 56, 1u, 0);
  return 0LL;
}
