/*
 * XREFs of ?UT_InvertCaret@@YGXXZ @ 0xBA85A
 * Callers:
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 *     _CaretBlinkProc@16 @ 0x19FA86 (_CaretBlinkProc@16.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreSaveDC@4 @ 0x93070 (_GreSaveDC@4.c)
 *     __ExcludeUpdateRgn@8 @ 0x1964AE (__ExcludeUpdateRgn@8.c)
 */

void __stdcall UT_InvertCaret()
{
  int v0; // ebx
  int v1; // esi
  HDC DC; // edi
  unsigned int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // [esp+0h] [ebp-28h]
  int v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  _DWORD var10[5]; // [esp+18h] [ebp-10h] BYREF

  v0 = *(_DWORD *)(_gptiCurrent + 236);
  v1 = *(_DWORD *)(v0 + 216);
  if ( v1 && IsVisible(*(_DWORD **)(v0 + 216)) )
  {
    DC = (HDC)_GetDC(v1);
    if ( *(_DWORD *)(*(_DWORD *)(v1 + 20) + 92) )
    {
      v7 = 1;
      GreSaveDC(v6);
      if ( (*(_BYTE *)(*(_DWORD *)(v1 + 20) + 13) & 1) != 0 )
        _ExcludeUpdateRgn(DC);
    }
    else
    {
      v7 = 0;
    }
    v3 = *(_DWORD *)(v0 + 248);
    if ( v3 <= 1 )
    {
      var10[0] = *(_DWORD *)(v0 + 232);
      var10[1] = *(_DWORD *)(v0 + 236);
      var10[2] = *(_DWORD *)(v0 + 244);
      var10[3] = *(_DWORD *)(v0 + 240);
      if ( v3 == 1 )
        v5 = *(_DWORD *)(_gpsi + 4416);
      else
        v5 = _ghbrWhite;
      var10[4] = v5;
      GrePolyPatBlt(DC, 0x5A0049u, (struct XDCOBJ *)var10, 1u, v3);
    }
    else
    {
      v4 = GreSelectBitmap(_ghdcMem, *(_DWORD *)(v0 + 248));
      NtGdiBitBltInternal(
        (HDC)v7,
        *(_DWORD *)(v0 + 232),
        *(struct XDCOBJ **)(v0 + 236),
        *(_DWORD *)(v0 + 244),
        *(_DWORD *)(v0 + 240),
        _ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(_ghdcMem, v4);
      DC = (HDC)v7;
    }
    if ( v8 )
      GreRestoreDC(DC, -1);
    _ReleaseDC(DC);
  }
  else
  {
    *(_DWORD *)(v0 + 220) &= ~1u;
  }
}
