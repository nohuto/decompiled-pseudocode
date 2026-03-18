/*
 * XREFs of _xxxRealizePalette@4 @ 0xBF854
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097 (-xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z.c)
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _FreeAllSpbs@0 @ 0xB246C (_FreeAllSpbs@0.c)
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _WindowFromCacheDC@4 @ 0x15434A (_WindowFromCacheDC@4.c)
 *     _xxxBroadcastPaletteChanged@8 @ 0x196256 (_xxxBroadcastPaletteChanged@8.c)
 *     _IsDCCurrentPalette@4 @ 0x21E7FE (_IsDCCurrentPalette@4.c)
 */

int __stdcall xxxRealizePalette(HDC a1)
{
  int v1; // ebx
  int v3; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int i; // edx
  int j; // eax
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v1 = GreRealizePalette(a1);
  if ( HIWORD(v1) )
  {
    if ( IsDCCurrentPalette(a1) )
    {
      v3 = WindowFromCacheDC(a1);
      if ( v3 )
      {
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v8 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v8;
        v9 = v3;
        HMLockObject(v3);
        xxxBroadcastPaletteChanged(v3, 0);
        for ( i = _grpWinStaList; i; i = *(_DWORD *)(i + 4) )
        {
          for ( j = *(_DWORD *)(i + 8); j; j = *(_DWORD *)(j + 16) )
          {
            if ( j != *(_DWORD *)(v3 + 12) )
              *(_DWORD *)(j + 24) |= 1u;
          }
        }
        GreRealizePalette(a1);
        ThreadUnlock1();
      }
    }
    FreeAllSpbs();
  }
  return (unsigned __int16)v1;
}
