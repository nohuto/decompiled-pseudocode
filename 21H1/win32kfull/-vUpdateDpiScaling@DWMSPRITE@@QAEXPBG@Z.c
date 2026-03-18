/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QAEXPBG@Z @ 0x1EDDC
 * Callers:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 * Callees:
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ??XEFLOATEXT@@QAEXJ@Z @ 0x89976 (--XEFLOATEXT@@QAEXJ@Z.c)
 */

void __thiscall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, const unsigned __int16 *a2)
{
  int v3; // eax
  int v4; // eax
  unsigned __int16 ScaledLogPixels; // ax
  int v6; // [esp+10h] [ebp-4h] BYREF

  v6 = 96;
  if ( a2 )
  {
    v4 = *a2;
    goto LABEL_5;
  }
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
  {
    if ( !UserIsWindowGdiScaled(v3, &v6) )
    {
      v4 = 96;
LABEL_5:
      v6 = v4;
      goto LABEL_6;
    }
  }
  else if ( UserIsCurrentThreadGdiScaled() )
  {
    return;
  }
  v4 = v6;
LABEL_6:
  if ( (_WORD)v4 == 96 )
  {
    if ( (*((_BYTE *)this + 132) & 0x20) != 0 )
    {
      *((_DWORD *)this + 33) &= ~0x20u;
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_DWORD *)this + 32) = 0;
    }
  }
  else
  {
    ScaledLogPixels = GreGetScaledLogPixels(v4);
    EFLOATEXT::operator*=(ScaledLogPixels);
    EFLOATEXT::operator/=(96);
    *((_DWORD *)this + 29) = 0x40000000;
    *((_DWORD *)this + 30) = 2;
    *((_DWORD *)this + 31) = 0x40000000;
    *((_DWORD *)this + 32) = 2;
    *((_DWORD *)this + 33) |= 0x20u;
  }
}
