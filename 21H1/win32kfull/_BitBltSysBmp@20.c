/*
 * XREFs of _BitBltSysBmp@20 @ 0x910DA
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     ?xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z @ 0xC1B60 (-xxxDrawSB2@@YGXPAUtagWND@@PAUtagSBCALC@@PAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _DrawSize@16 @ 0x1A3566 (_DrawSize@16.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _IS_UI_LANGID@4 @ 0x91280 (_IS_UI_LANGID@4.c)
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 */

DC *__fastcall BitBltSysBmp(HDC a1, int a2, int a3, int a4, int a5)
{
  HDC v5; // edi
  __int16 *v6; // esi
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // ebx
  HDC v9; // ecx
  DC *result; // eax
  int DCDpiScaleValue; // eax
  LONG v12; // ecx
  HDC v14; // [esp+18h] [ebp-Ch]
  __int16 *v15; // [esp+1Ch] [ebp-8h]
  DC *v17; // [esp+34h] [ebp+10h]

  v5 = a1;
  v6 = 0;
  v15 = 0;
  DpiForSystem = GetDpiForSystem();
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v5);
    if ( DCDpiScaleValue > 1 )
    {
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
      v15 = v6;
    }
  }
  if ( a5 )
    v9 = (HDC)PrepareHDCBITSBitmap(v6 != 0 ? v5 : 0);
  else
    v9 = *(HDC *)(_gpDispInfo + 32);
  v14 = v9;
  if ( !v9 )
    return 0;
  if ( v6 )
  {
    v5 = a1;
    result = (DC *)GreStretchBltInternal(
                     a1,
                     a2,
                     (struct XDCOBJ *)a3,
                     OemBitmapInfoForDpi[2],
                     OemBitmapInfoForDpi[3],
                     v9,
                     *v15,
                     (struct XDCOBJ *)v6[1],
                     v6[2],
                     v6[3],
                     13369376,
                     0,
                     0);
    v6 = v15;
  }
  else
  {
    result = NtGdiBitBltInternal(
               v5,
               a2,
               (struct XDCOBJ *)a3,
               OemBitmapInfoForDpi[2],
               OemBitmapInfoForDpi[3],
               v9,
               (struct ECLIPOBJ *)*OemBitmapInfoForDpi,
               (struct ECLIPOBJ *)OemBitmapInfoForDpi[1],
               13369376,
               0,
               0);
  }
  v17 = result;
  if ( result )
  {
    if ( (IS_UI_LANGID() || *(_WORD *)(_gpsi + 6256) == 1037)
      && (GreGetLayout(v5) & 1) != 0
      && (unsigned int)(a4 - 11) <= 2 )
    {
      v12 = a2;
      if ( a4 == 12 )
      {
        v12 = a2 + 2;
        a2 += 2;
      }
      if ( v6 )
        return (DC *)GreStretchBltInternal(
                       a1,
                       a2,
                       (struct XDCOBJ *)(a3 + 2),
                       OemBitmapInfoForDpi[2] - 4,
                       OemBitmapInfoForDpi[3] - 4,
                       v14,
                       *v15 + 2,
                       (struct XDCOBJ *)(v6[1] + 2),
                       v6[2] - 4,
                       v6[3] - 4,
                       -2134114272,
                       0,
                       0);
      else
        return NtGdiBitBltInternal(
                 v5,
                 v12,
                 (struct XDCOBJ *)(a3 + 2),
                 OemBitmapInfoForDpi[2] - 4,
                 OemBitmapInfoForDpi[3] - 4,
                 v14,
                 (struct ECLIPOBJ *)(*OemBitmapInfoForDpi + 2),
                 (struct ECLIPOBJ *)(OemBitmapInfoForDpi[1] + 2),
                 -2134114272,
                 0,
                 0);
    }
    else
    {
      return v17;
    }
  }
  return result;
}
