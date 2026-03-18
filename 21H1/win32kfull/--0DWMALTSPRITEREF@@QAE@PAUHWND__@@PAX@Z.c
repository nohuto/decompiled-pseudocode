/*
 * XREFs of ??0DWMALTSPRITEREF@@QAE@PAUHWND__@@PAX@Z @ 0x1CCCE8
 * Callers:
 *     _GreGetHwndUpdateIds@12 @ 0x1CE24A (_GreGetHwndUpdateIds@12.c)
 *     _GreSetHwndPresentFlags@8 @ 0x1CE820 (_GreSetHwndPresentFlags@8.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__thiscall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2, void *a3)
{
  int v4; // eax

  *(_DWORD *)this = 0;
  if ( a2 )
    v4 = DWMALTSPRITEREF::hspLookupWindow(a2);
  else
    v4 = (int)a3;
  if ( v4 )
    *(_DWORD *)this = HmgShareLockCheck(v4, 15);
  return this;
}
