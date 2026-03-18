/*
 * XREFs of ?SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z @ 0x978B8
 * Callers:
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     ?SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z @ 0x978B8 (-SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z.c)
 * Callees:
 *     ?SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z @ 0x978B8 (-SetWindowTreeBand@@YGXPAUtagWND@@W4ZBID@@@Z.c)
 *     _DwmAsyncChildZBandChange@12 @ 0x978FC (_DwmAsyncChildZBandChange@12.c)
 */

int __fastcall SetWindowTreeBand(int a1, int a2)
{
  int result; // eax
  int i; // esi

  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 148) = a2;
  result = IsWindowDesktopComposed(a1);
  if ( result )
  {
    ReferenceDwmApiPort();
    result = DwmAsyncChildZBandChange(a2);
  }
  for ( i = *(_DWORD *)(a1 + 60); i; i = *(_DWORD *)(i + 48) )
    result = SetWindowTreeBand(i, a2);
  return result;
}
