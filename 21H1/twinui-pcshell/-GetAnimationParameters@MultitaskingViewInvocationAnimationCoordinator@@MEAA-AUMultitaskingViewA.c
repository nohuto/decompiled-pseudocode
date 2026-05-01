/*
 * XREFs of ?GetAnimationParameters@MultitaskingViewInvocationAnimationCoordinator@@MEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18008B1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MultitaskingViewInvocationAnimationCoordinator::GetAnimationParameters(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  a2[1] = xmmword_1804CD4E0;
  a2[2] = xmmword_1804CD4F0;
  a2[3] = xmmword_1804CD500;
  return result;
}
