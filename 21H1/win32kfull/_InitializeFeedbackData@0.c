/*
 * XREFs of _InitializeFeedbackData@0 @ 0xEC9D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KEVENT *__stdcall InitializeFeedbackData()
{
  struct _KEVENT *result; // eax

  result = (struct _KEVENT *)CreateKernelEvent(1, 0);
  Feedback::gpevtPointerCursorOperation = result;
  return result;
}
