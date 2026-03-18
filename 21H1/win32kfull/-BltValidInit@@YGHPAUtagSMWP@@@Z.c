/*
 * XREFs of ?BltValidInit@@YGHPAUtagSMWP@@@Z @ 0x3C58C
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2 (-SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?IsStillWindowC@@YGHPAUHWND__@@@Z @ 0x3D284 (-IsStillWindowC@@YGHPAUHWND__@@@Z.c)
 *     ?PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z @ 0x13F989 (-PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 */

int __thiscall BltValidInit(_DWORD *this)
{
  int v1; // ebx
  int v2; // edx
  unsigned int *v3; // esi
  int v4; // edi
  __int16 v5; // ax
  int EmptyRgn; // eax
  struct tagCVR *v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+Ch] [ebp-Ch]
  unsigned int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v1 = this[4];
  v2 = 0;
  v3 = (unsigned int *)this[6];
  v11 = 0;
  v4 = 0;
  while ( --v1 >= 0 )
  {
    v3[20] = 0;
    v10 = v3[6];
    if ( !*v3 )
      goto LABEL_10;
    v9 = HMValidateHandleNoSecure(*v3, 1);
    if ( !v9 || !IsStillWindowC((HWND)v8) )
    {
      *v3 = 0;
      v3[6] = 6159;
LABEL_16:
      v2 = v11;
      goto LABEL_10;
    }
    v5 = v10;
    if ( *(_DWORD *)(_gpDispInfo + 16) && (v10 & 8) == 0 )
    {
      SpbCheckRect(v9, *(_DWORD *)(v9 + 20) + 52, 1);
      v5 = v10;
    }
    v2 = ++v11;
    if ( (v5 & 0x18E7) != 0x1807 )
      v4 = 1;
    if ( (v3[6] & 8) == 0 )
    {
      if ( !*(_DWORD *)(_gpsi + 1820) )
        PreventInterMonitorBlts(v8);
      v3[19] = 0;
      EmptyRgn = CreateEmptyRgn();
      v3[20] = EmptyRgn;
      if ( !EmptyRgn || !SwpCalcVisRgn(v9, EmptyRgn) )
        v3[19] = 2;
      goto LABEL_16;
    }
LABEL_10:
    v3 += 32;
  }
  return v4 != 0 ? v2 : 0;
}
