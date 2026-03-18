/*
 * XREFs of BitBltSysBmp @ 0x1C0101C5C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245FD4 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0246280 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C024D6B4 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C0102050 (IS_UI_LANGID.c)
 *     GreGetDCDpiScaleValue @ 0x1C0102144 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall BitBltSysBmp(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
  __int16 *v6; // rdi
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // rsi
  __int64 v12; // rcx
  HDC v13; // r14
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int DCDpiScaleValue; // eax
  int v19; // r15d
  int v20; // r9d
  int v21; // r8d

  v6 = 0LL;
  DpiForSystem = GetDpiForSystem(a1);
  OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v12) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue((HDC)a1);
    if ( DCDpiScaleValue > 1 )
      v6 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v13 = (HDC)PrepareHDCBITSBitmap((HDC)(a1 & -(__int64)(v6 != 0LL)));
  else
    v13 = *(HDC *)(gpDispInfo + 64LL);
  if ( !v13 )
    return 0LL;
  v14 = OemBitmapInfoForDpi[2];
  if ( v6 )
    v15 = GreStretchBltInternal(
            (HDC)a1,
            a2,
            a3,
            v14,
            OemBitmapInfoForDpi[3],
            v13,
            *v6,
            v6[1],
            v6[2],
            v6[3],
            13369376,
            0,
            0);
  else
    v15 = NtGdiBitBltInternal(
            (HDC)a1,
            a2,
            a3,
            v14,
            OemBitmapInfoForDpi[3],
            v13,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            13369376,
            0,
            0);
  v16 = v15;
  if ( v15
    && ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
    && (GreGetLayout((HDC)a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v19 = a2 + 2;
    if ( a4 != 12 )
      v19 = a2;
    v20 = OemBitmapInfoForDpi[2] - 4;
    v21 = a3 + 2;
    if ( v6 )
      return (unsigned int)GreStretchBltInternal(
                             (HDC)a1,
                             v19,
                             v21,
                             v20,
                             OemBitmapInfoForDpi[3] - 4,
                             v13,
                             *v6 + 2,
                             v6[1] + 2,
                             v6[2] - 4,
                             v6[3] - 4,
                             -2134114272,
                             0,
                             0);
    else
      return (unsigned int)NtGdiBitBltInternal(
                             (HDC)a1,
                             v19,
                             v21,
                             v20,
                             OemBitmapInfoForDpi[3] - 4,
                             v13,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v16;
}
