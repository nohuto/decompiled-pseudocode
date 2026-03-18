/*
 * XREFs of ?hWnd@DC@@QAEXPAUHWND__@@@Z @ 0x8E2B6
 * Callers:
 *     _GreHintDCWnd@20 @ 0x83BD0 (_GreHintDCWnd@20.c)
 * Callees:
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ??XEFLOATEXT@@QAEXJ@Z @ 0x89976 (--XEFLOATEXT@@QAEXJ@Z.c)
 *     ?vClearDpiScaling@DC@@QAEXXZ @ 0x8E326 (-vClearDpiScaling@DC@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z @ 0x1D11D0 (-vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z.c)
 */

void __thiscall DC::hWnd(DC *this, HWND a2)
{
  int v3; // ecx
  unsigned __int16 ScaledLogPixels; // ax
  int v5; // [esp+Ch] [ebp-20h] BYREF
  int v6; // [esp+10h] [ebp-1Ch]
  _DWORD v7[5]; // [esp+14h] [ebp-18h] BYREF

  v3 = *((_DWORD *)this + 126);
  *((_DWORD *)this + 121) = a2;
  if ( !v3 || *(int *)(v3 + 72) < 0 )
  {
    v7[0] = 0;
    if ( a2 && UserIsWindowGdiScaled(a2, v7) && LOWORD(v7[0]) != 96 )
    {
      v5 = 0x40000000;
      v6 = 2;
      ScaledLogPixels = GreGetScaledLogPixels(v7[0]);
      EFLOATEXT::operator*=(&v5, ScaledLogPixels);
      EFLOATEXT::operator/=(&v5, 96);
      v7[1] = v5;
      v7[3] = v5;
      v7[2] = v6;
      v7[4] = v6;
      DC::vSetDpiScaling(v5, v6, v5, v6);
    }
    else
    {
      DC::vClearDpiScaling(this);
    }
  }
}
