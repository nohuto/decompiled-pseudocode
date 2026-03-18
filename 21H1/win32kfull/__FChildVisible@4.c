/*
 * XREFs of __FChildVisible@4 @ 0x9DDDE
 * Callers:
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     <none>
 */

int __fastcall _FChildVisible(int a1)
{
  char v1; // al

  v1 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23);
  do
  {
    if ( (v1 & 0xC0) != 0x40 )
      return 1;
    a1 = *(_DWORD *)(a1 + 56);
    if ( !a1 )
      return 1;
    v1 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23);
  }
  while ( (v1 & 0x10) != 0 );
  return 0;
}
