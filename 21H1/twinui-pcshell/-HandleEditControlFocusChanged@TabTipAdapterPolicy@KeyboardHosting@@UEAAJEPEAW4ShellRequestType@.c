/*
 * XREFs of ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180347240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlFocusChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  if ( a3 )
    *(_DWORD *)a3 = 0;
  *((_BYTE *)this + 460) = 0;
  *((_BYTE *)this + 504) = a2 != 0;
  return 0LL;
}
