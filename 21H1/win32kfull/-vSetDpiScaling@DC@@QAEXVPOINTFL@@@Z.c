/*
 * XREFs of ?vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z @ 0x1D11D0
 * Callers:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 *     ?hWnd@DC@@QAEXPAUHWND__@@@Z @ 0x8E2B6 (-hWnd@DC@@QAEXPAUHWND__@@@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QAEXXZ @ 0x1D1265 (-vUpdateCachedDPIScaleValue@DC@@QAEXXZ.c)
 */

int __thiscall DC::vSetDpiScaling(DC *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // ecx

  *((_DWORD *)this + 130) |= 5u;
  *((_DWORD *)this + 6) |= 0x10u;
  *((_DWORD *)this + 131) = a2;
  *((_DWORD *)this + 132) = a3;
  *((_DWORD *)this + 133) = a4;
  *((_DWORD *)this + 134) = a5;
  DC::vUpdateCachedDPIScaleValue(this);
  result = DC::bDpiScaledSurface(this);
  if ( result )
  {
    v7 = *((_DWORD *)this + 126);
    *((_DWORD *)this + 135) = *(_DWORD *)(v7 + 476);
    result = *(_DWORD *)(v7 + 480);
    *((_DWORD *)this + 136) = result;
  }
  return result;
}
