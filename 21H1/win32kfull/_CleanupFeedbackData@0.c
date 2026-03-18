/*
 * XREFs of _CleanupFeedbackData@0 @ 0xD4CF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRKEVENT __stdcall CleanupFeedbackData()
{
  PRKEVENT result; // eax

  result = Feedback::gpevtPointerCursorOperation;
  if ( Feedback::gpevtPointerCursorOperation )
  {
    result = (PRKEVENT)Win32FreePool(Feedback::gpevtPointerCursorOperation);
    Feedback::gpevtPointerCursorOperation = 0;
  }
  return result;
}
