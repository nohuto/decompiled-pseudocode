/*
 * XREFs of _IsWindowGDIScaledDpiMessageEnabledX@4 @ 0x1512F0
 * Callers:
 *     _NtUserIsWindowGDIScaledDpiMessageEnabled@4 @ 0x165C58 (_NtUserIsWindowGDIScaledDpiMessageEnabled@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

BOOL __thiscall IsWindowGDIScaledDpiMessageEnabledX(_DWORD *this)
{
  PKTHREAD CurrentThread; // eax
  int v3; // esi
  PKTHREAD v4; // eax
  PKTHREAD v5; // eax
  int v6; // ecx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    v4 = KeGetCurrentThread();
    if ( *(_DWORD *)(W32GetThreadWin32Thread(v4) + 248) )
    {
      v5 = KeGetCurrentThread();
      if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v5) + 248) + 4) + 32) & 1) != 0 )
      {
        v6 = this[5];
        if ( (*(_DWORD *)(v6 + 184) & 0x4000000F) == 0x40000000 )
          return (*(_DWORD *)(v6 + 144) & 0x20000000) != 0;
      }
    }
  }
  return v3;
}
