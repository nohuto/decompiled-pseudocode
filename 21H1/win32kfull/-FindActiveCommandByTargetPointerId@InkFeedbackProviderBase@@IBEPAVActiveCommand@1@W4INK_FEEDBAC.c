/*
 * XREFs of ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IBEPAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1AF99A
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = this + 3;
  result = (_DWORD *)*v3;
  if ( (_DWORD *)*v3 == v3 )
    return 0;
  while ( result[2] != a2 || result[3] != a3 )
  {
    result = (_DWORD *)*result;
    if ( result == v3 )
      return 0;
  }
  return result;
}
