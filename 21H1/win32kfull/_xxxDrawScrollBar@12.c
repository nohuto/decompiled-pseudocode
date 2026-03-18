/*
 * XREFs of _xxxDrawScrollBar@12 @ 0xC1AFC
 * Callers:
 *     ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114 (-xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 * Callees:
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     _GetWndSBDisableFlags@8 @ 0xC1ECC (_GetWndSBDisableFlags@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall xxxDrawScrollBar(_DWORD *a1, HDC a2, struct tagSBCALC *a3)
{
  HDC WndSBDisableFlags; // eax
  int v5; // [esp+0h] [ebp-5Ch]
  unsigned int v6; // [esp+4h] [ebp-58h]

  CalcSBStuff(a1, (int)a3);
  WndSBDisableFlags = (HDC)GetWndSBDisableFlags(a1, a3);
  xxxDrawSB2(a2, a3, WndSBDisableFlags, v5, v6);
}
