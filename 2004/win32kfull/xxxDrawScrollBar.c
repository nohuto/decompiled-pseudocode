/*
 * XREFs of xxxDrawScrollBar @ 0x1C014A280
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F12F4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0027538 (CalcSBStuff.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     GetWndSBDisableFlags @ 0x1C014A7FC (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall xxxDrawScrollBar(struct tagWND *a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rcx
  struct tagSBCALC *v7; // rdi
  unsigned int WndSBDisableFlags; // eax
  char v9; // [rsp+30h] [rbp-68h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
  if ( v6 && a1 == *(struct tagWND **)(v6 + 8) && (*(_DWORD *)v6 & 4) == 0 && a3 == ((*(_DWORD *)v6 >> 1) & 1) )
    v7 = *(struct tagSBCALC **)(v6 + 96);
  else
    v7 = (struct tagSBCALC *)&v9;
  CalcSBStuff((__int64)a1, (__int64)v7, a3);
  WndSBDisableFlags = GetWndSBDisableFlags(a1, a3);
  xxxDrawSB2(a1, v7, a2, a3, WndSBDisableFlags);
}
