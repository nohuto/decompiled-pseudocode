/*
 * XREFs of _IsChildWindowDpiMessageEnabledX@4 @ 0x151284
 * Callers:
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

int __thiscall IsChildWindowDpiMessageEnabledX(_DWORD *this)
{
  int v2; // esi
  int TopLevelWindow; // eax

  v2 = 0;
  if ( (*(_DWORD *)(this[5] + 184) & 0xF) == 2 )
  {
    TopLevelWindow = _GetTopLevelWindow((int)this);
    if ( this == (_DWORD *)TopLevelWindow
      || TopLevelWindow && (*(_DWORD *)(*(_DWORD *)(TopLevelWindow + 20) + 144) & 0x20000000) != 0 )
    {
      return 1;
    }
  }
  return v2;
}
