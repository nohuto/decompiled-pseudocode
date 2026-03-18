/*
 * XREFs of _xxxMoveWindow@24 @ 0x9A1C4
 * Callers:
 *     _NtUserMoveWindow@24 @ 0x99F8E (_NtUserMoveWindow@24.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _xxxValidateRect@8 @ 0xAD504 (_xxxValidateRect@8.c)
 */

int __fastcall xxxMoveWindow(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v8; // ecx
  int v10; // ecx
  int v11; // edi

  if ( a1 == (_DWORD *)_GetDesktopWindow(a1) || (*(_BYTE *)(a1[5] + 13) & 1) != 0 || a1[14] != _GetDesktopWindow(v8) )
    return xxxSetWindowPos((int)a1, 0, a2, a3, a4, a5, 8 * (a6 == 0) + 20);
  v11 = xxxSetWindowPos(v10, 0, a2, a3, a4, a5, 20);
  if ( !a6 )
    xxxValidateRect(a1, 0);
  return v11;
}
