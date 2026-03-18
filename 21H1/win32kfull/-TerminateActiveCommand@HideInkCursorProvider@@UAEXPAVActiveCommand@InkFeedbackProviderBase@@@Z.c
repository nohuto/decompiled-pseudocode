/*
 * XREFs of ?TerminateActiveCommand@HideInkCursorProvider@@UAEXPAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1AFE47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __thiscall HideInkCursorProvider::TerminateActiveCommand(
        HideInkCursorProvider *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  if ( *((_DWORD *)a2 + 2) == 3 )
    HideInkCursorProvider::DoHideInkCursorStop(this, a2);
}
