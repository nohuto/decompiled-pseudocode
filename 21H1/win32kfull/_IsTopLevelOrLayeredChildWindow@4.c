/*
 * XREFs of _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

BOOL __thiscall IsTopLevelOrLayeredChildWindow(_DWORD *this)
{
  return _IsTopLevelWindow(this) || (*(_BYTE *)(this[5] + 18) & 8) != 0 && _GetTopLevelWindow((int)this);
}
