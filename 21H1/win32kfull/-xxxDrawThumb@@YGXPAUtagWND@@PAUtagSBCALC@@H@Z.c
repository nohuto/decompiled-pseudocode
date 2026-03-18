/*
 * XREFs of ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2
 * Callers:
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 * Callees:
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     _GetWndSBDisableFlags@8 @ 0xC1ECC (_GetWndSBDisableFlags@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge xxxDrawThumb(int *a1@<ecx>, struct tagWND *a2, struct tagSBCALC *a3, int a4)
{
  char WndSBDisableFlags; // bl
  int ColorObjects; // esi
  int v7; // edi
  HDC DCEx; // [esp+10h] [ebp-50h]
  _DWORD v10[17]; // [esp+18h] [ebp-48h] BYREF

  DCEx = (HDC)_GetDCEx(a1, 0, 65537);
  CalcSBStuff(a1, (int)a2);
  WndSBDisableFlags = GetWndSBDisableFlags((int)a1, (int)a2);
  ColorObjects = xxxGetColorObjects(a1, (int)DCEx);
  v7 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2((int)a1, v10, DCEx, ColorObjects, (HBRUSH)a2, WndSBDisableFlags);
  GreSelectBrush(DCEx, v7);
  _ReleaseDC(DCEx);
}
