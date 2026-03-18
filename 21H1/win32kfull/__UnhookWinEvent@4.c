/*
 * XREFs of __UnhookWinEvent@4 @ 0x13618
 * Callers:
 *     _NtUserUnhookWinEvent@4 @ 0x13596 (_NtUserUnhookWinEvent@4.c)
 * Callees:
 *     _DestroyEventHook@4 @ 0x14A42 (_DestroyEventHook@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall _UnhookWinEvent(_DWORD *this)
{
  if ( (*(_BYTE *)(_HMPheFromObject(this) + 13) & 1) != 0 || this[2] != _gptiCurrent )
  {
    UserSetLastError(6);
    return 0;
  }
  else
  {
    DestroyEventHook(this);
    return 1;
  }
}
