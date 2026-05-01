/*
 * XREFs of ?GetBeginRect@MultitaskingViewDismissalAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1803AF790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::GetBeginRect(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct tagRECT *a3)
{
  return MultitaskingViewAnimationCoordinatorBase::GetDestinationRect(this, a2, a3);
}
