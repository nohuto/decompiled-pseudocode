/*
 * XREFs of _ValidateGestureInfo@4 @ 0x188C68
 * Callers:
 *     _NtUserInjectGesture@20 @ 0x16561B (_NtUserInjectGesture@20.c)
 *     _SendGestureMessage@28 @ 0x188A6B (_SendGestureMessage@28.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall ValidateGestureInfo(_DWORD *this)
{
  if ( *this == 48 && this[5] && this[10] <= 0x400u )
    return 1;
  UserSetLastError((struct _NT_TIB *)0x57);
  return 0;
}
