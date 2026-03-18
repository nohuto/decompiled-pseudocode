/*
 * XREFs of xxxRealizePalette @ 0x1C0113460
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01518B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021EA68 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     FreeAllSpbs @ 0x1C002A9A0 (FreeAllSpbs.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GreRealizePalette @ 0x1C01134BC (GreRealizePalette.c)
 *     WindowFromCacheDC @ 0x1C01E841C (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0234CF0 (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C02B6BE0 (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v2 = GreRealizePalette(a1);
  v3 = v2;
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v5 = WindowFromCacheDC(a1);
      if ( v5 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v12 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v12;
        *((_QWORD *)&v12 + 1) = v5;
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
        ThreadUnlock1(v10, v9, v11);
      }
    }
    FreeAllSpbs();
  }
  return v3;
}
