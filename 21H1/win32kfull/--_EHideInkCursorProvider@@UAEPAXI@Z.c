/*
 * XREFs of ??_EHideInkCursorProvider@@UAEPAXI@Z @ 0x1AF785
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HideInkCursorProvider *__thiscall HideInkCursorProvider::`vector deleting destructor'(
        HideInkCursorProvider *this,
        char a2)
{
  *(_DWORD *)this = &InkFeedbackProviderBase::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
