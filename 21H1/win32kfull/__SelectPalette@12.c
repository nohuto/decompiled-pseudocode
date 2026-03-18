/*
 * XREFs of __SelectPalette@12 @ 0x9AAF6
 * Callers:
 *     _NtUserSelectPalette@12 @ 0x9AAC8 (_NtUserSelectPalette@12.c)
 *     ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097 (-xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z.c)
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     __IsChild@8 @ 0xAEE18 (__IsChild@8.c)
 *     _WindowFromCacheDC@4 @ 0x15434A (_WindowFromCacheDC@4.c)
 *     ?IsTopmostRealApp@@YGHPAUtagWND@@@Z @ 0x196218 (-IsTopmostRealApp@@YGHPAUtagWND@@@Z.c)
 */

int __fastcall _SelectPalette(int a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *NonChildAncestor; // esi
  int v8; // ecx
  int v9; // eax
  struct tagWND *v10; // [esp+0h] [ebp-14h]

  v3 = 1;
  if ( !a3 && (*(_BYTE *)(_gpsi + 6248) & 1) != 0 && a2 != GreGetStockObject(15) )
  {
    v5 = WindowFromCacheDC(a1);
    v6 = v5;
    if ( v5 )
    {
      NonChildAncestor = (_DWORD *)GetNonChildAncestor(v5);
      if ( (*(_BYTE *)(NonChildAncestor[5] + 10) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (_DWORD *)GetThreadDesktopWindow(0) )
          *(_DWORD *)(NonChildAncestor[2] + 264) |= 0x800u;
        SetOrClrWF(1, (int)NonChildAncestor, 0x220u, 1);
      }
      if ( _gpqForeground )
        v8 = *(_DWORD *)(_gpqForeground + 64);
      else
        v8 = 0;
      v9 = *(_DWORD *)(NonChildAncestor[3] + 4);
      if ( NonChildAncestor != *(_DWORD **)(v9 + 12)
        && NonChildAncestor != *(_DWORD **)(v9 + 84)
        && v8
        && (v8 == v6 || _IsChild(v8, v6) || IsTopmostRealApp(v10))
        && *(char *)(*(_DWORD *)(v6 + 20) + 16) >= 0 )
      {
        v3 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v3);
}
