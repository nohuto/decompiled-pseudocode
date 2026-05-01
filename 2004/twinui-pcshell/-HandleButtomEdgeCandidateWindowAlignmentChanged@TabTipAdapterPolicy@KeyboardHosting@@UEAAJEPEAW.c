/*
 * XREFs of ?HandleButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800857B0
 * Callers:
 *     ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x180085730 (-OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleButtomEdgeCandidateWindowAlignmentChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  *(_DWORD *)a3 = 0;
  if ( *((_BYTE *)this + 509) != (a2 != 0) )
  {
    *((_BYTE *)this + 509) = a2 != 0;
    *(_DWORD *)a3 = 3;
  }
  return 0LL;
}
