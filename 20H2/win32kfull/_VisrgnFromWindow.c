/*
 * XREFs of _VisrgnFromWindow @ 0x1C0114638
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C01145F4 (UserVisrgnFromHwnd.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C0038DE0 (_GhostWindowFromHungWindow.c)
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 *     IsWindowContentProtected @ 0x1C00C9FF8 (IsWindowContentProtected.c)
 */

__int64 __fastcall VisrgnFromWindow(struct tagWND *a1, int a2, HRGN *a3)
{
  __int64 v6; // rdx
  char v7; // cl
  unsigned int v8; // r9d

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) != 0
    && !GhostWindowFromHungWindow((__int64)a1)
    && !(unsigned int)IsWindowContentProtected((__int64)a1) )
  {
    v6 = *((_QWORD *)a1 + 5);
LABEL_11:
    SetRectRgnIndirect(*a3, v6 + 88);
    return 1LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(_BYTE *)(v6 + 31);
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    if ( (v7 & 0x10) == 0 )
      return 0LL;
    goto LABEL_11;
  }
  v8 = (a2 != 0 ? 17409 : 134218753) | 0x10;
  if ( (v7 & 4) == 0 )
    v8 = a2 != 0 ? 17409 : 134218753;
  return CalcVisRgn(a3, a1, a1, v8);
}
