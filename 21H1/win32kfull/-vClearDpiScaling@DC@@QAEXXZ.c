/*
 * XREFs of ?vClearDpiScaling@DC@@QAEXXZ @ 0x8E326
 * Callers:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?hWnd@DC@@QAEXPAUHWND__@@@Z @ 0x8E2B6 (-hWnd@DC@@QAEXPAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall DC::vClearDpiScaling(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 130);
  if ( (v1 & 1) != 0 )
  {
    *((_DWORD *)this + 131) = 0;
    *((_DWORD *)this + 132) = 0;
    *((_DWORD *)this + 133) = 0;
    *((_DWORD *)this + 134) = 0;
    *((_DWORD *)this + 6) |= 0x10u;
    *((_DWORD *)this + 130) = v1 & 0xFFFFFFF8 | 4;
    *((_DWORD *)this + 135) = 0;
    *((_DWORD *)this + 136) = 0;
    DC::vUpdateCachedDPIScaleValue(this);
  }
}
