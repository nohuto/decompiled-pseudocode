/*
 * XREFs of s_DrawThemeTextPPIAware @ 0x18047B930
 * Callers:
 *     s_OnDrawItem @ 0x18047BF50 (s_OnDrawItem.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180033108 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x18047B1F8 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18047B268 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18047B450 (-InternalClose@-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x18047E050 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x18047E188 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_DrawThemeTextPPIAware(HTHEME hTheme, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128i *a6)
{
  HDC v8; // rcx
  signed int Error; // edi
  int v10; // r12d
  int v11; // edi
  HBITMAP v12; // rax
  HDC v13; // r13
  __m128i v14; // xmm0
  int v15; // eax
  HFONT v16; // rbx
  __int16 *v17; // r12
  __int16 *v18; // rcx
  unsigned int v19; // r14d
  __int16 i; // ax
  HDC v21; // r13
  __int64 v22; // rdx
  signed int LastError; // eax
  _BYTE v25[8]; // [rsp+80h] [rbp-88h] BYREF
  HDC hdc; // [rsp+88h] [rbp-80h]
  __int32 v27; // [rsp+90h] [rbp-78h]
  int yoriginDest; // [rsp+94h] [rbp-74h]
  int wDest; // [rsp+98h] [rbp-70h]
  int xoriginDest; // [rsp+9Ch] [rbp-6Ch]
  HTHEME v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int128 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  HGDIOBJ h; // [rsp+C8h] [rbp-40h]
  HDC v36; // [rsp+D0h] [rbp-38h]
  HGDIOBJ v37; // [rsp+D8h] [rbp-30h]
  void **v38; // [rsp+E0h] [rbp-28h] BYREF
  HBITMAP v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  void *ppvBits; // [rsp+F8h] [rbp-10h] BYREF
  int v42; // [rsp+108h] [rbp+0h]
  int v43[19]; // [rsp+10Ch] [rbp+4h] BYREF
  int v44; // [rsp+158h] [rbp+50h]
  int v45; // [rsp+15Ch] [rbp+54h]
  int v46; // [rsp+160h] [rbp+58h]
  int v47; // [rsp+164h] [rbp+5Ch]
  BITMAPINFO pbmi; // [rsp+168h] [rbp+60h] BYREF
  LOGFONTW pFont; // [rsp+198h] [rbp+90h] BYREF
  int pvParam; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v51[220]; // [rsp+1FCh] [rbp+F4h] BYREF
  LOGFONTW v52; // [rsp+2D8h] [rbp+1D0h]

  v40 = -2LL;
  v34 = a4;
  v32 = a3;
  v31 = hTheme;
  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v25, *(HDC *)(a4 + 32));
  v8 = hdc;
  if ( !hdc )
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_39;
    v8 = hdc;
  }
  memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
  pbmi.bmiHeader.biSize = 44;
  v10 = a6->m128i_i32[0];
  xoriginDest = v10;
  wDest = a6->m128i_i32[2] - v10;
  pbmi.bmiHeader.biWidth = wDest;
  v11 = a6->m128i_i32[1];
  yoriginDest = v11;
  v27 = a6->m128i_i32[3];
  pbmi.bmiHeader.biHeight = v11 - v27;
  *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
  v12 = CreateDIBSection(v8, &pbmi, 0, &ppvBits, 0LL, 0);
  v39 = v12;
  if ( v12 )
  {
    v13 = hdc;
    v36 = hdc;
    v37 = SelectObject(hdc, v12);
    v14 = *a6;
    v44 = _mm_cvtsi128_si32(*a6) - v10;
    v46 = v14.m128i_i32[2] - v10;
    v47 = v14.m128i_i32[3] - v11;
    v45 = v14.m128i_i32[1] - v11;
    memset_0(v51, 0, 0x1F4uLL);
    pvParam = 504;
    if ( !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0) )
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
      {
LABEL_36:
        SelectObject(v13, v37);
        v12 = v39;
        goto LABEL_37;
      }
    }
    v42 = 72;
    memset_0(v43, 0, 0x44uLL);
    if ( GetThemeFont(hTheme, hdc, 14, 0, 210, &pFont) < 0 )
    {
      pFont = v52;
      v15 = v43[0];
    }
    else
    {
      v15 = v43[0] | 0x40;
      v43[0] |= 0x40u;
      if ( v52.lfHeight <= 0 )
      {
        if ( v52.lfHeight >= pFont.lfHeight )
          goto LABEL_15;
      }
      else if ( v52.lfHeight <= pFont.lfHeight )
      {
        goto LABEL_15;
      }
      pFont.lfHeight = v52.lfHeight;
    }
LABEL_15:
    if ( (*(_BYTE *)(a4 + 16) & 0x20) != 0 )
    {
      pFont.lfWeight = 700;
      v43[0] = v15 | 0x40;
    }
    v16 = CreateFontIndirectW(&pFont);
    if ( !v16 )
    {
      Error = -2147467259;
LABEL_34:
      if ( v16 )
        DeleteObject(v16);
      goto LABEL_36;
    }
    Error = 0;
    v17 = *(__int16 **)a5;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)a5);
    *(_QWORD *)&v33 = *(_QWORD *)(a5 + 8);
    v18 = v17;
    v19 = 0;
    for ( i = *v17; i && i != 9; i = *v18 )
    {
      ++v18;
      ++v19;
    }
    v21 = hdc;
    h = SelectObject(hdc, v16);
    v22 = a5 + 64;
    if ( v19 )
    {
      Error = DPIToPPIHelpers::DrawThemeTextExPPI(v32, *(unsigned int *)(a5 + 60), a5 + 64, v31, hdc);
      v22 = a5 + 64;
    }
    if ( Error >= 0 )
    {
      if ( v19 >= (unsigned __int64)(v33 - 1) )
        goto LABEL_28;
      v33 = 0LL;
      Error = DPIToPPIHelpers::GetThemeTextExtentPPI(v32, *(unsigned int *)(a5 + 60), v22, v31, hdc);
      if ( Error >= 0 )
      {
        v44 = v46 + v33 - DWORD2(v33);
        Error = DPIToPPIHelpers::DrawThemeTextExPPI(v32, *(unsigned int *)(a5 + 60), a5 + 64, v31, hdc);
LABEL_28:
        if ( Error >= 0 )
        {
          if ( GdiAlphaBlend(
                 *(HDC *)(v34 + 32),
                 xoriginDest,
                 yoriginDest,
                 wDest,
                 v27 - yoriginDest,
                 hdc,
                 0,
                 0,
                 wDest,
                 v27 - yoriginDest,
                 (BLENDFUNCTION)33488896) )
          {
            Error = 0;
          }
          else
          {
            Error = ResultFromKnownLastError();
          }
        }
      }
    }
    SelectObject(v21, h);
    v13 = v36;
    goto LABEL_34;
  }
  Error = -2147024882;
LABEL_37:
  v38 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::`vftable';
  if ( v12
    && !Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose((__int64)&v38) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
    JUMPOUT(0x18047BEA4LL);
  }
LABEL_39:
  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)v25);
  return (unsigned int)Error;
}
