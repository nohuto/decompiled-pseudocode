/*
 * XREFs of __VisrgnFromWindow@12 @ 0xA99E4
 * Callers:
 *     _UserVisrgnFromHwnd@12 @ 0xA99B8 (_UserVisrgnFromHwnd@12.c)
 * Callees:
 *     _IsWindowContentProtected@4 @ 0x20BBA (_IsWindowContentProtected@4.c)
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 */

int __fastcall _VisrgnFromWindow(_DWORD *a1, int a2, _DWORD *a3)
{
  int v5; // eax
  char v6; // cl
  unsigned int v7; // esi

  if ( (*(_BYTE *)(a1[5] + 144) & 0x20) != 0 && !_GhostWindowFromHungWindow(a1) && !IsWindowContentProtected() )
  {
    v5 = a1[5];
LABEL_9:
    SetRectRgnIndirect(*a3, v5 + 52);
    return 1;
  }
  v5 = a1[5];
  v6 = *(_BYTE *)(v5 + 23);
  if ( (*(_BYTE *)(v5 + 18) & 0x20) != 0 )
  {
    if ( (v6 & 0x10) != 0 )
      goto LABEL_9;
    return 0;
  }
  else
  {
    v7 = a2 != 0 ? 17409 : 134218753;
    if ( (v6 & 4) != 0 )
      v7 |= 0x10u;
    return CalcVisRgn((int)a3, a1, (int)a1, (struct tagWND *)v7);
  }
}
