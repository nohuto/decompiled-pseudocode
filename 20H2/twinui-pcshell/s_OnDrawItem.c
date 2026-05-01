/*
 * XREFs of s_OnDrawItem @ 0x18047B5B0
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18047ABA4 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     floorf_0 @ 0x1800F03C3 (floorf_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x180422950 (-MulDiv@CRect@Geometry@@SA-AU12@AEBUtagRECT@@HH@Z.c)
 *     ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x18047A858 (--0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18047A8C8 (--1CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ @ 0x18047A8FC (-CheckValidity@CompatibleDC@Wrappers@WRL@Microsoft@@QEAAJXZ.c)
 *     ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18047AB38 (-SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z.c)
 *     s_DrawGlyph @ 0x18047AC98 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x18047AF90 (s_DrawThemeTextPPIAware.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18047C8C4 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x18047DA4C (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

__int64 __fastcall s_OnDrawItem(HWND hwnd, __int64 a2, __int64 a3, unsigned int a4)
{
  int ScaleFactorForWindow; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // r15
  const WCHAR *v8; // rdx
  int v9; // ecx
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // ebx
  HDC v14; // rdx
  int *v15; // rsi
  HTHEME v16; // r14
  int v17; // ebx
  int v18; // edi
  int v19; // r14d
  int v20; // esi
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // r14d
  bool v25; // zf
  int v26; // r8d
  int v27; // r9d
  int *v28; // rax
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // ebx
  int v32; // eax
  HDC v33; // r9
  COLORREF v34; // edx
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // edi
  int v39; // r8d
  int v40; // r9d
  int v41; // r8d
  int v42; // r9d
  int *v43; // rax
  __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // r14d
  int v52; // ebx
  SHSTOCKICONID v53; // ecx
  int v54; // ebx
  void *v55; // rbx
  int v56; // eax
  HWND v57; // rcx
  int v58; // esi
  int v59; // edi
  __int64 v60; // r9
  __int64 v61; // rcx
  int v62; // r8d
  int v63; // ecx
  __int64 v64; // kr00_8
  int v65; // r8d
  int v66; // esi
  HDC v67; // rcx
  BOOL v68; // eax
  int v69; // ebx
  HDC v70; // rcx
  int v71; // esi
  int *v72; // rax
  __int64 v73; // r9
  __int64 v74; // rcx
  int v75; // ebx
  int v76; // eax
  HDC v77; // r9
  int v78; // eax
  int v79; // eax
  __int64 v80; // r9
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rdx
  int v84; // eax
  float v85; // xmm0_4
  HDC v86; // rdx
  __int16 pClipRect; // [rsp+28h] [rbp-D8h]
  UINT diFlags; // [rsp+40h] [rbp-C0h]
  UINT diFlagsa; // [rsp+40h] [rbp-C0h]
  char v91; // [rsp+60h] [rbp-A0h]
  int nDenominator; // [rsp+64h] [rbp-9Ch] BYREF
  int yTop; // [rsp+68h] [rbp-98h]
  int nNumerator; // [rsp+6Ch] [rbp-94h]
  HTHEME hTheme; // [rsp+70h] [rbp-90h]
  HDC hdc[2]; // [rsp+80h] [rbp-80h] BYREF
  int iStateId; // [rsp+90h] [rbp-70h]
  int v98; // [rsp+94h] [rbp-6Ch]
  int v99; // [rsp+98h] [rbp-68h] BYREF
  COLORREF pColor; // [rsp+9Ch] [rbp-64h] BYREF
  _BYTE pv[4]; // [rsp+A0h] [rbp-60h] BYREF
  int nNumber; // [rsp+A4h] [rbp-5Ch]
  int hSrc; // [rsp+A8h] [rbp-58h]
  SHSTOCKICONINFO psii; // [rsp+C0h] [rbp-40h] BYREF
  HDC pRect[2]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v106[46]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int16 v107; // [rsp+31Eh] [rbp+21Eh]
  int v108; // [rsp+320h] [rbp+220h]

  ScaleFactorForWindow = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 56),
                             *(unsigned int *)(a2 + 8),
                             a4);
  if ( ContextMenuDataForItem )
  {
    if ( MonitorFromWindow(hwnd, 2u) )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(hwnd, &v99);
      if ( ScaleFactorForWindow >= 0 )
      {
        if ( *((_BYTE *)ContextMenuDataForItem + 68) )
        {
          v8 = L"DarkMode_ImmersiveStart::Menu";
        }
        else
        {
          v8 = L"LightMode_ImmersiveStart::Menu";
          if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
            v8 = L"ImmersiveStart::Menu";
        }
        hTheme = OpenThemeData(0LL, v8);
        if ( hTheme )
        {
          v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          v10 = *(_DWORD *)(a2 + 16);
          yTop = v10;
          v11 = 6;
          if ( (v9 & 1) != 0 )
          {
            if ( *((_BYTE *)ContextMenuDataForItem + 69) || (v12 = 2LL, (v9 & 4) != 0) )
              v12 = 6LL;
            *(_DWORD *)(a2 + 44) += DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v12,
                                      hwnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
            v9 = *((_DWORD *)ContextMenuDataForItem + 14);
          }
          if ( (v9 & 2) != 0 )
          {
            if ( !*((_BYTE *)ContextMenuDataForItem + 69) && (v9 & 4) == 0 )
              v11 = 2;
            *(_DWORD *)(a2 + 52) -= DPIToPPIHelpers::ScaleByType(
                                      *((unsigned int *)ContextMenuDataForItem + 15),
                                      v11,
                                      hwnd,
                                      *((unsigned int *)ContextMenuDataForItem + 16));
          }
          if ( (v10 & 4) != 0 )
          {
            if ( (v10 & 1) != 0 && *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
              v13 = 4;
            else
              v13 = 3;
          }
          else if ( (v10 & 1) == 0
                 || !*(_QWORD *)ContextMenuDataForItem
                 || (v13 = 2, !**(_WORD **)ContextMenuDataForItem) )
          {
            v13 = 1;
          }
          v14 = *(HDC *)(a2 + 32);
          v15 = (int *)(a2 + 40);
          v16 = hTheme;
          iStateId = v13;
          ScaleFactorForWindow = DrawThemeBackground(hTheme, v14, 14, v13, (LPCRECT)(a2 + 40), 0LL);
          if ( ScaleFactorForWindow < 0 )
            goto LABEL_91;
          if ( *(_QWORD *)ContextMenuDataForItem && **(_WORD **)ContextMenuDataForItem )
          {
            if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
            {
              v17 = *v15;
              v18 = *(_DWORD *)(a2 + 44);
              v19 = *(_DWORD *)(a2 + 48);
              v20 = *(_DWORD *)(a2 + 52);
              v21 = DPIToPPIHelpers::ScaleByType(
                      *((unsigned int *)ContextMenuDataForItem + 15),
                      32LL,
                      hwnd,
                      *((unsigned int *)ContextMenuDataForItem + 16));
              v22 = *((unsigned int *)ContextMenuDataForItem + 16);
              v23 = *((unsigned int *)ContextMenuDataForItem + 15);
              LODWORD(hdc[0]) = v17 + v21;
              HIDWORD(hdc[0]) = v18;
              HIDWORD(hdc[1]) = v20;
              LODWORD(hdc[1]) = v19 - DPIToPPIHelpers::ScaleByType(v23, 17LL, hwnd, v22);
              v24 = iStateId;
              ScaleFactorForWindow = s_DrawThemeTextPPIAware(
                                       hTheme,
                                       (unsigned int)iStateId,
                                       (__int64)hwnd,
                                       a2,
                                       (__int64)ContextMenuDataForItem,
                                       (__m128i *)hdc);
              if ( ScaleFactorForWindow >= 0 )
              {
                v98 = *(_DWORD *)(a2 + 52) - *(_DWORD *)(a2 + 44);
                if ( (yTop & 8) != 0 && !*((_QWORD *)ContextMenuDataForItem + 5) )
                {
                  v25 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                  *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                  if ( v25 )
                  {
                    v26 = v99;
                    v27 = 100;
                  }
                  else
                  {
                    v27 = 96;
                    v26 = *((_DWORD *)ContextMenuDataForItem + 16);
                  }
                  v28 = Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v26, v27);
                  v29 = *((unsigned int *)ContextMenuDataForItem + 16);
                  v30 = *((unsigned int *)ContextMenuDataForItem + 15);
                  v31 = *(_DWORD *)(a2 + 44);
                  *(_OWORD *)pRect = *(_OWORD *)v28;
                  v32 = DPIToPPIHelpers::ScaleByType(v30, 16LL, hwnd, v29);
                  v33 = *(HDC *)(a2 + 32);
                  v34 = *((_DWORD *)ContextMenuDataForItem + 16);
                  v35 = v98 / 2 - v32 / 2;
                  HIDWORD(pRect[1]) += v31 + v35;
                  diFlags = *((_DWORD *)ContextMenuDataForItem + 15);
                  HIDWORD(pRect[0]) += v31 + v35;
                  pClipRect = *((_DWORD *)ContextMenuDataForItem + 6);
                  *(_OWORD *)hdc = *(_OWORD *)pRect;
                  ScaleFactorForWindow = s_DrawGlyph(
                                           hwnd,
                                           v34,
                                           hTheme,
                                           v33,
                                           11,
                                           pClipRect,
                                           v24,
                                           (struct tagRECT *)hdc,
                                           diFlags);
LABEL_40:
                  v16 = hTheme;
                  goto LABEL_41;
                }
                if ( *((_DWORD *)ContextMenuDataForItem + 7) != -1 )
                {
                  v25 = *((_DWORD *)ContextMenuDataForItem + 15) == 1;
                  *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                  if ( v25 )
                  {
                    v41 = v99;
                    v42 = 100;
                  }
                  else
                  {
                    v42 = 96;
                    v41 = *((_DWORD *)ContextMenuDataForItem + 16);
                  }
                  v43 = Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v41, v42);
                  v44 = *((unsigned int *)ContextMenuDataForItem + 16);
                  v45 = *((unsigned int *)ContextMenuDataForItem + 15);
                  v46 = *(_DWORD *)(a2 + 44);
                  *(_OWORD *)pRect = *(_OWORD *)v43;
                  v47 = DPIToPPIHelpers::ScaleByType(v45, 16LL, hwnd, v44);
                  v48 = v98 / 2 - v47 / 2;
                  v49 = v46 + v48 + HIDWORD(pRect[1]);
                  v25 = *((_DWORD *)ContextMenuDataForItem + 15) == 0;
                  yTop = v46 + HIDWORD(pRect[0]) + v48;
                  if ( v25 )
                  {
                    v50 = (int)DPIToPPIHelpers::ScaleByType(
                                 0LL,
                                 16LL,
                                 hwnd,
                                 *((unsigned int *)ContextMenuDataForItem + 16))
                        / 2;
                    v51 = v50 + LODWORD(pRect[0]);
                    v52 = v50 + LODWORD(pRect[1]);
                  }
                  else
                  {
                    v52 = (int)pRect[1];
                    v51 = (int)pRect[0];
                  }
                  memset_0(&psii.cbSize + 1, 0, 0x21CuLL);
                  v53 = *((_DWORD *)ContextMenuDataForItem + 7);
                  psii.cbSize = 544;
                  v54 = v52 - v51;
                  if ( SHGetStockIconInfo(v53, (v54 < 24) + 256, &psii) >= 0 )
                  {
                    if ( DrawIconEx(*(HDC *)(a2 + 32), v51, yTop, psii.hIcon, v54, v49 - yTop, 0, 0LL, 3u) )
                    {
                      v16 = hTheme;
                      ScaleFactorForWindow = 0;
LABEL_42:
                      if ( (*((_BYTE *)ContextMenuDataForItem + 24) & 0x10) != 0 )
                      {
                        v36 = *((unsigned int *)ContextMenuDataForItem + 16);
                        v37 = *((unsigned int *)ContextMenuDataForItem + 15);
                        *(__m128i *)pRect = _mm_load_si128((const __m128i *)&_xmm);
                        v38 = *(_DWORD *)(a2 + 48) - DPIToPPIHelpers::ScaleByType(v37, 28LL, hwnd, v36);
                        if ( *((_DWORD *)ContextMenuDataForItem + 15) == 1 )
                        {
                          v39 = v99;
                          v40 = 100;
                        }
                        else
                        {
                          v39 = *((_DWORD *)ContextMenuDataForItem + 16);
                          v40 = 96;
                        }
                        v72 = Geometry::CRect::MulDiv((int *)hdc, (int *)pRect, v39, v40);
                        v73 = *((unsigned int *)ContextMenuDataForItem + 16);
                        v74 = *((unsigned int *)ContextMenuDataForItem + 15);
                        v75 = *(_DWORD *)(a2 + 44);
                        *(_OWORD *)pRect = *(_OWORD *)v72;
                        v76 = DPIToPPIHelpers::ScaleByType(v74, 16LL, hwnd, v73);
                        v77 = *(HDC *)(a2 + 32);
                        v78 = v98 / 2 - v76 / 2;
                        LODWORD(hdc[0]) = v38 + LODWORD(pRect[0]);
                        HIDWORD(hdc[1]) = v75 + HIDWORD(pRect[1]) + v78;
                        diFlagsa = *((_DWORD *)ContextMenuDataForItem + 15);
                        HIDWORD(hdc[0]) = v75 + v78 + HIDWORD(pRect[0]);
                        v79 = *((_DWORD *)ContextMenuDataForItem + 6);
                        LODWORD(hdc[1]) = v38 + LODWORD(pRect[1]);
                        ScaleFactorForWindow = s_DrawGlyph(
                                                 hwnd,
                                                 *((_DWORD *)ContextMenuDataForItem + 16),
                                                 v16,
                                                 v77,
                                                 16,
                                                 v79,
                                                 iStateId,
                                                 (struct tagRECT *)hdc,
                                                 diFlagsa);
                      }
                      goto LABEL_90;
                    }
                    ScaleFactorForWindow = ResultFromKnownLastError();
                  }
                  v16 = hTheme;
                  goto LABEL_41;
                }
                v55 = (void *)*((_QWORD *)ContextMenuDataForItem + 4);
                if ( !v55 && ((yTop & 8) == 0 || (v55 = (void *)*((_QWORD *)ContextMenuDataForItem + 5)) == 0LL) )
                {
                  v55 = (void *)*((_QWORD *)ContextMenuDataForItem + 6);
                  if ( !v55 )
                    goto LABEL_40;
                }
                ScaleFactorForWindow = -2147467259;
                if ( GetObjectW(v55, 32, pv) )
                {
                  Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
                    (Microsoft::WRL::Wrappers::CompatibleDC *)hdc,
                    *(HDC *)(a2 + 32));
                  ScaleFactorForWindow = Microsoft::WRL::Wrappers::CompatibleDC::CheckValidity((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
                  if ( ScaleFactorForWindow < 0 )
                  {
                    v16 = hTheme;
                  }
                  else
                  {
                    v56 = DPIToPPIHelpers::ScaleByType(
                            *((unsigned int *)ContextMenuDataForItem + 15),
                            16LL,
                            hwnd,
                            *((unsigned int *)ContextMenuDataForItem + 16));
                    v58 = hSrc;
                    v59 = nNumber;
                    v91 = 0;
                    if ( hSrc > v56 || nNumber > v56 )
                    {
                      nNumerator = *((_DWORD *)ContextMenuDataForItem + 16);
                      SHComputeDPI(v57, &nDenominator, 0LL);
                      if ( nDenominator > nNumerator )
                      {
                        v91 = 1;
                        v59 = MulDiv(v59, nNumerator, nDenominator);
                        v58 = MulDiv(v58, nNumerator, nDenominator);
                      }
                    }
                    v60 = *((unsigned int *)ContextMenuDataForItem + 16);
                    v61 = *((unsigned int *)ContextMenuDataForItem + 15);
                    nDenominator = *(_DWORD *)(a2 + 44);
                    yTop = v58 + nDenominator;
                    v62 = DPIToPPIHelpers::ScaleByType(v61, 16LL, hwnd, v60);
                    if ( v62 > v59 )
                    {
                      v91 = 1;
                      v62 = 2 * v62 - v59;
                    }
                    pColor = 0;
                    v63 = (v98 - v58) / 2;
                    v64 = v62;
                    v65 = v24;
                    v16 = hTheme;
                    v66 = v63 + yTop;
                    nNumerator = v64 / 2;
                    yTop = v63 + nDenominator;
                    GetThemeColor(hTheme, 14, v65, 3803, &pColor);
                    pRect[0] = hdc[1];
                    hTheme = SelectObject(hdc[1], v55);
                    if ( GetObjectW(v55, 104, v106) == 104 && v107 == 32 && !v108 )
                    {
                      v67 = *(HDC *)(a2 + 32);
                      nDenominator = 33488896;
                      v68 = GdiAlphaBlend(
                              v67,
                              nNumerator,
                              yTop,
                              v59,
                              v66 - yTop,
                              hdc[1],
                              0,
                              0,
                              nNumber,
                              hSrc,
                              (BLENDFUNCTION)33488896);
                    }
                    else
                    {
                      v69 = yTop;
                      v70 = *(HDC *)(a2 + 32);
                      v71 = v66 - yTop;
                      if ( v91 )
                      {
                        SetStretchBltMode(v70, 3);
                        v68 = StretchBlt(
                                *(HDC *)(a2 + 32),
                                nNumerator,
                                v69,
                                v59,
                                v71,
                                hdc[1],
                                0,
                                0,
                                nNumber,
                                hSrc,
                                0xCC0020u);
                      }
                      else
                      {
                        v68 = BitBlt(v70, nNumerator, yTop, v59, v71, hdc[1], 0, 0, 0xCC0020u);
                      }
                    }
                    if ( v68 )
                      ScaleFactorForWindow = 0;
                    else
                      ScaleFactorForWindow = ResultFromKnownLastError();
                    SelectObject(pRect[0], hTheme);
                  }
                  Microsoft::WRL::Wrappers::CompatibleDC::~CompatibleDC((Microsoft::WRL::Wrappers::CompatibleDC *)hdc);
LABEL_41:
                  if ( ScaleFactorForWindow >= 0 )
                    goto LABEL_42;
LABEL_90:
                  v15 = (int *)(a2 + 40);
                  goto LABEL_91;
                }
              }
              v16 = hTheme;
              goto LABEL_90;
            }
          }
          else if ( *((_DWORD *)ContextMenuDataForItem + 6) != 2048 )
          {
LABEL_91:
            ExcludeClipRect(*(HDC *)(a2 + 32), *v15, *(_DWORD *)(a2 + 44), *(_DWORD *)(a2 + 48), *(_DWORD *)(a2 + 52));
            CloseThemeData(v16);
            return (unsigned int)ScaleFactorForWindow;
          }
          v80 = *((unsigned int *)ContextMenuDataForItem + 16);
          v81 = *((unsigned int *)ContextMenuDataForItem + 15);
          pRect[0] = *(HDC *)v15;
          pRect[1] = *(HDC *)(a2 + 48);
          v82 = DPIToPPIHelpers::ScaleByType(v81, 8LL, hwnd, v80);
          LODWORD(pRect[0]) += v82;
          LODWORD(pRect[1]) -= v82;
          if ( *((_BYTE *)ContextMenuDataForItem + 69)
            || (v83 = 7LL, (*((_BYTE *)ContextMenuDataForItem + 56) & 4) != 0) )
          {
            v83 = 9LL;
          }
          v84 = DPIToPPIHelpers::ScaleByType(
                  *((unsigned int *)ContextMenuDataForItem + 15),
                  v83,
                  hwnd,
                  *((unsigned int *)ContextMenuDataForItem + 16));
          v85 = floorf_0((double)(v84 - 5) * 0.5);
          --HIDWORD(pRect[1]);
          v86 = *(HDC *)(a2 + 32);
          HIDWORD(pRect[0]) += (int)v85;
          DrawThemeBackground(hTheme, v86, 15, v13, (LPCRECT)pRect, 0LL);
          goto LABEL_91;
        }
      }
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
