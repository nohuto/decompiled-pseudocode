/*
 * XREFs of xxxRealizePalette @ 0x1C00308F0
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014F270 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021F8F8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreRealizePalette @ 0x1C003075C (GreRealizePalette.c)
 *     FreeAllSpbs @ 0x1C004C3C0 (FreeAllSpbs.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     WindowFromCacheDC @ 0x1C01E90DC (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0235B80 (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C02B8180 (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 i; // rcx
  __int64 j; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v2 = GreRealizePalette(a1);
  v3 = v2;
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v5 = WindowFromCacheDC(a1);
      if ( v5 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)&v9 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
        *((_QWORD *)&v9 + 1) = v5;
        HMLockObject(v5);
        xxxBroadcastPaletteChanged(v5, 0LL);
        for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( j != *(_QWORD *)(v5 + 24) )
              *(_DWORD *)(j + 48) |= 1u;
          }
        }
        GreRealizePalette(a1);
        ThreadUnlock1();
      }
    }
    FreeAllSpbs();
  }
  return v3;
}
