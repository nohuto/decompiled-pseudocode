/*
 * XREFs of ?InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z @ 0x1A2BEF
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 */

void __fastcall InvertScrollHilite(int a1, _DWORD *a2)
{
  int *v4; // ebx
  HDC DCEx; // edi
  struct tagSBTRACK *v6; // [esp+0h] [ebp-Ch]

  v4 = a2 + 4;
  if ( !ERECTL::bWrapped((ERECTL *)(a2 + 4)) )
  {
    if ( (*(_BYTE *)a2 & 8) != 0 )
    {
      RecalcTrackRect(v6);
      *a2 &= ~8u;
    }
    DCEx = (HDC)_GetDCEx(a1, 0, 65537);
    NtGdiPatBlt(DCEx, *v4, (struct XDCOBJ *)v4[1], v4[2] - *v4, v4[3] - v4[1], (struct EXFORMOBJ *)0x550009);
    _ReleaseDC(DCEx);
  }
}
