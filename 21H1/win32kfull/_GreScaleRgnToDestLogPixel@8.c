/*
 * XREFs of _GreScaleRgnToDestLogPixel@8 @ 0x1FD5E2
 * Callers:
 *     _NtUserGetWindowRgnEx@12 @ 0x4329C (_NtUserGetWindowRgnEx@12.c)
 *     ?GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z @ 0xF479E (-GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z.c)
 *     ?DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z @ 0x19CCF2 (-DrawWindowShadow@@YGHPAUtagWND@@PAUHDC__@@HHPAH@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ??XEFLOATEXT@@QAEXJ@Z @ 0x89976 (--XEFLOATEXT@@QAEXJ@Z.c)
 */

int __fastcall GreScaleRgnToDestLogPixel(int a1, HRGN a2)
{
  unsigned __int16 ScaledLogPixels; // ax
  int v4; // esi
  _DWORD v6[3]; // [esp+1Ch] [ebp-14h] BYREF
  int v7; // [esp+28h] [ebp-8h] BYREF
  int v8; // [esp+2Ch] [ebp-4h]

  ScaledLogPixels = GreGetScaledLogPixels(a1);
  v4 = ScaledLogPixels;
  if ( ScaledLogPixels != 96 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 1);
    if ( !v6[0] )
    {
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
      return 0;
    }
    v7 = 0x40000000;
    v8 = 2;
    EFLOATEXT::operator*=(&v7, v4);
    EFLOATEXT::operator/=(&v7, 96);
    RGNOBJ::vScale(v6, v7, v8, v7, v8);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  }
  return 1;
}
