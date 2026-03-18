/*
 * XREFs of ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IAEXPAPAVActiveCommand@1@@Z @ 0x1AFE22
 * Callers:
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UAEXPBX@Z @ 0x99BCC (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UAEXPBX@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UAEXI@Z @ 0x1AF909 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UAEXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z @ 0x1AFD94 (-RemoveActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z.c)
 */

void __thiscall InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand **a2)
{
  InkFeedbackProviderBase::RemoveActiveCommand(this, *a2);
  if ( *a2 )
    Win32FreePool(*a2);
  *a2 = 0;
}
