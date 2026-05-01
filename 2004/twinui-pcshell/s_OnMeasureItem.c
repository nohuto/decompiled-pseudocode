/*
 * XREFs of s_OnMeasureItem @ 0x18047C99C
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18047B544 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180033108 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z @ 0x18047B1B8 (--0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18047B234 (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18047D264 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x18047E188 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18047E3EC (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnMeasureItem(HWND hwnd, __int64 a2, char a3, unsigned int a4)
{
  signed int Error; // r12d
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v9; // r14
  const WCHAR *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rdx
  HWND WindowW; // rax
  HWND v14; // rbx
  LONG WindowLongW; // eax
  HFONT v16; // rax
  HFONT v17; // rbx
  unsigned int v18; // esi
  HDC v19; // rsi
  HGDIOBJ v20; // rdi
  double v21; // xmm0_8
  int v22; // eax
  __int64 v23; // rdx
  HTHEME hTheme; // [rsp+78h] [rbp-90h]
  _BYTE v26[8]; // [rsp+90h] [rbp-78h] BYREF
  HDC hdc; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  LOGFONTW lf; // [rsp+B8h] [rbp-50h] BYREF
  int pvParam; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v31[220]; // [rsp+11Ch] [rbp+14h] BYREF
  LOGFONTW v32; // [rsp+1F8h] [rbp+F0h]

  v28 = -2LL;
  Error = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 24),
                             *(unsigned int *)(a2 + 8),
                             a4);
  v9 = ContextMenuDataForItem;
  if ( ContextMenuDataForItem )
  {
    if ( *((_BYTE *)ContextMenuDataForItem + 68) )
    {
      v10 = L"DarkMode_ImmersiveStart::Menu";
    }
    else
    {
      v10 = L"LightMode_ImmersiveStart::Menu";
      if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
        v10 = L"ImmersiveStart::Menu";
    }
    hTheme = OpenThemeData(0LL, v10);
    if ( hTheme )
    {
      v11 = 2;
      if ( !MonitorFromWindow(hwnd, 2u) )
      {
LABEL_50:
        CloseThemeData(hTheme);
        return (unsigned int)Error;
      }
      if ( *((_DWORD *)v9 + 6) == 2048 )
      {
        if ( *((_BYTE *)v9 + 69) || (v12 = 7LL, (*((_BYTE *)v9 + 56) & 4) != 0) )
          v12 = 9LL;
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v9 + 15),
                                 v12,
                                 hwnd,
                                 *((unsigned int *)v9 + 16));
        goto LABEL_50;
      }
      WindowW = FindWindowW(L"#32768", 0LL);
      v14 = WindowW;
      if ( !WindowW )
      {
LABEL_40:
        v22 = *((_DWORD *)v9 + 14);
        if ( (v22 & 1) != 0 )
        {
          if ( *((_BYTE *)v9 + 69) || (v23 = 2LL, (v22 & 4) != 0) )
            v23 = 6LL;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v9 + 15),
                                    v23,
                                    hwnd,
                                    *((unsigned int *)v9 + 16));
          v22 = *((_DWORD *)v9 + 14);
        }
        if ( (v22 & 2) != 0 )
        {
          if ( *((_BYTE *)v9 + 69) || (v22 & 4) != 0 )
            v11 = 6;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v9 + 15),
                                    v11,
                                    hwnd,
                                    *((unsigned int *)v9 + 16));
        }
        goto LABEL_50;
      }
      WindowLongW = GetWindowLongW(WindowW, -20);
      if ( a3 && (WindowLongW & 0x400000) == 0 )
        SetWindowLongW(v14, -20, WindowLongW | 0x400000);
      Microsoft::WRL::Wrappers::ClientDC::ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v26, v14);
      if ( !hdc
        || (memset_0(v31, 0, 0x1F4uLL), pvParam = 504, !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0))
        && (Error = ResultFromKnownLastError(), Error < 0) )
      {
LABEL_39:
        Microsoft::WRL::Wrappers::ClientDC::~ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v26);
        goto LABEL_40;
      }
      if ( GetThemeFont(hTheme, 0LL, 14, 0, 210, &lf) < 0 )
      {
        lf = v32;
        goto LABEL_27;
      }
      if ( v32.lfHeight <= 0 )
      {
        if ( v32.lfHeight < lf.lfHeight )
LABEL_25:
          lf.lfHeight = v32.lfHeight;
      }
      else if ( v32.lfHeight > lf.lfHeight )
      {
        goto LABEL_25;
      }
LABEL_27:
      v16 = CreateFontIndirectW(&lf);
      v17 = v16;
      v18 = 36;
      if ( v16 )
      {
        v19 = hdc;
        v20 = SelectObject(hdc, v16);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v9);
        Error = DPIToPPIHelpers::GetThemeTextExtentPPI(hwnd, *((unsigned int *)v9 + 15), (char *)v9 + 64, hTheme, hdc);
        SelectObject(v19, v20);
        v11 = 2;
        v18 = 36;
      }
      else
      {
        Error = -2147467259;
      }
      if ( v17 )
        DeleteObject(v17);
      if ( Error >= 0 )
      {
        *(_DWORD *)(a2 + 12) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v9 + 15),
                                 93LL,
                                 hwnd,
                                 *((unsigned int *)v9 + 16));
        if ( (*((_BYTE *)v9 + 56) & 4) == 0 )
        {
          if ( *((_BYTE *)v9 + 69) )
            v21 = DOUBLE_24_0;
          else
            v21 = DOUBLE_14_0;
          v18 = (int)v21;
        }
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v9 + 15),
                                 v18,
                                 hwnd,
                                 *((unsigned int *)v9 + 16));
      }
      goto LABEL_39;
    }
  }
  return (unsigned int)Error;
}
