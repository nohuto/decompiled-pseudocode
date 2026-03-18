/*
 * XREFs of ?PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x188CC6
 * Callers:
 *     ?PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x188CC6 (-PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     __WOWModuleUnload@4 @ 0x188E7A (__WOWModuleUnload@4.c)
 * Callees:
 *     ?PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x188CC6 (-PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

int __fastcall PseudoDestroyClassWindows(int a1, int **a2)
{
  int result; // eax
  _DWORD *i; // esi
  int v5; // ecx

  result = _gptiCurrent;
  for ( i = *(_DWORD **)(a1 + 60); i; i = (_DWORD *)i[12] )
  {
    result = **a2;
    if ( i[19] == result && _gptiCurrent == i[2] )
    {
      v5 = i[5];
      if ( (*(_BYTE *)(v5 + 10) & 4) == 0 )
      {
        result = *(_DWORD *)(_gpsi + 244);
        *(_DWORD *)(v5 + 84) = result;
      }
    }
    if ( i[15] )
      result = PseudoDestroyClassWindows(i, a2);
  }
  return result;
}
