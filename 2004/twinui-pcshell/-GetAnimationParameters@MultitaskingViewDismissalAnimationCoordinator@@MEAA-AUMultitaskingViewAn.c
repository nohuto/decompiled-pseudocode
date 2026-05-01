/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewDismissalAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18008B8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewDismissalAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = MultitaskingViewDismissalAnimationCoordinator::animationParameters;
  a2[1] = xmmword_1804F4CB0;
  a2[2] = xmmword_1804F4CC0;
  a2[3] = xmmword_1804F4CD0;
  return result;
}
