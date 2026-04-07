/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180021E40
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001F3B0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18002A95C (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18003A890 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DD64 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ??$max@H@@YAHHH@Z @ 0x18003F5F8 (--$max@H@@YAHHH@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18003F660 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180053C34 (IsOpenThemeDataPresent.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@details@wil@@QEAA_NXZ @ 0x180055BA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2011c_29519204@@@detail.c)
 *     ceil_0 @ 0x180056016 (ceil_0.c)
 *     floor_0 @ 0x18005603A (floor_0.c)
 *     ?RectHeight@@YAHAEBUtagRECT@@@Z @ 0x18008079C (-RectHeight@@YAHAEBUtagRECT@@@Z.c)
 *     ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x1800807B4 (-RectWidth@@YAHAEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  int v1; // eax
  __int64 v2; // rbx
  char v4; // di
  int v5; // r13d
  int SystemMetricsForDpi; // esi
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rcx
  double v10; // xmm6_8
  double v11; // xmm0_8
  double v12; // xmm0_8
  int v13; // r15d
  int v14; // r12d
  int v15; // r13d
  int v16; // edx
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // r15
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // r9
  CTopLevelWindow *v28; // rcx
  int v29; // r9^4
  int v30; // r8^4
  LONG v31; // eax
  LONG v32; // r9d
  LONG v33; // r10d
  LONG v34; // r11d
  int v35; // edi
  LONG v36; // esi
  LONG v37; // eax
  LONG v38; // ecx
  LONG v39; // ebx
  LONG v40; // r8d
  LONG v41; // edx
  LONG v42; // ecx
  bool v43; // cc
  LONG v44; // eax
  LONG v45; // ecx
  LONG v46; // edi
  LONG v47; // eax
  _DWORD *v48; // rax
  LONG v49; // r10d
  LONG v50; // r11d
  LONG v51; // r9d
  LONG v52; // r8d
  LONG v53; // edx
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // r9
  CTopLevelWindow *v59; // rcx
  int v60; // r9^4
  int v61; // r8^4
  LONG v62; // eax
  LONG v63; // ecx
  __int64 v64; // rax
  LONG v65; // edx
  const struct _MARGINS *v66; // rbx
  bool v67; // r15
  CAtlasedRectsVisual *v68; // rcx
  char v69; // al
  char v71; // [rsp+38h] [rbp-49h]
  int v72; // [rsp+38h] [rbp-49h]
  struct tagRECT si128; // [rsp+48h] [rbp-39h] BYREF
  struct tagRECT v74; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v75; // [rsp+68h] [rbp-19h] BYREF

  v1 = *((_DWORD *)this + 148);
  v2 = *((_QWORD *)this + 91);
  v4 = 0;
  v5 = 0;
  si128 = 0LL;
  SystemMetricsForDpi = 0;
  v74 = 0LL;
  v7 = 0;
  v71 = v1;
  v8 = 0;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v71 & 6) != 0
    && *(_DWORD *)(v2 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v2 + 68) >= dword_1800E4E9C
    && *(_DWORD *)(v2 + 72) >= dword_1800E4EA0
    && *(_DWORD *)(v2 + 76) >= dword_1800E4EA4
    && (*(_DWORD *)(v2 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v2 + 324)) > 0 )
  {
    if ( (*(_BYTE *)(v2 + 102) & 0xC0) == 0xC0 )
    {
      v9 = 51LL;
      if ( *(char *)(v2 + 104) >= 0 )
        v9 = 4LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v9, *(unsigned int *)(v2 + 324));
    }
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    if ( v10 < 0.0 )
      v11 = ceil_0(v10 - 0.5);
    else
      v11 = floor_0(v10 + 0.5);
    v72 = (int)v11;
    if ( v10 < 0.0 )
      v12 = ceil_0(v10 - 0.5);
    else
      v12 = floor_0(v10 + 0.5);
    v13 = *(_DWORD *)(v2 + 68);
    v14 = *(_DWORD *)(v2 + 72);
    v15 = *(_DWORD *)(v2 + 76);
    v16 = v72 + SystemMetricsForDpi;
    v17 = *(_DWORD *)(v2 + 64);
    v18 = v17;
    if ( v17 <= (int)v12 )
      v18 = (int)v12;
    SystemMetricsForDpi = v17 - v18;
    v19 = *(_DWORD *)(v2 + 68);
    if ( v13 <= (int)v12 )
      v19 = (int)v12;
    v7 = v13 - v19;
    v20 = *(_DWORD *)(v2 + 72);
    if ( v14 <= v16 )
      v20 = v16;
    v8 = v14 - v20;
    v21 = *(_DWORD *)(v2 + 76);
    if ( v15 <= v72 )
      v21 = v72;
    v5 = v15 - v21;
  }
  v22 = SetMargin(
          (struct _MARGINS *)((char *)this + 628),
          SystemMetricsForDpi,
          v7,
          v8,
          v5,
          (const struct _MARGINS *)((char *)this + 612));
  if ( (*((_DWORD *)this + 148) & 0x200020) != 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2011c_29519204>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29519204>::GetImpl'::`2'::impl) )
    {
      v23 = *((_QWORD *)this + 91);
      v75 = *(struct tagRECT *)(v23 + 48);
      v24 = RectWidth((const struct tagRECT *)(v23 + 180));
      v75.right = _mm_cvtsi128_si32((__m128i)v75) + (int)((double)v24 * *(double *)(v25 + 312));
      v26 = RectHeight((const struct tagRECT *)(v25 + 180));
      v75.bottom = v75.top + (int)((double)v26 * *(double *)(v27 + 312));
      if ( !CTopLevelWindow::GetMonitorRect(v28, &v75, &v74) )
        v74 = v75;
      max<int>(0LL, (unsigned int)(v74.left - v75.left));
      max<int>(0LL, (unsigned int)(v75.right - v74.right));
      max<int>(0LL, (unsigned int)(v29 - v75.top));
      v31 = max<int>(0LL, (unsigned int)(v75.bottom - v30));
      v35 = *(_DWORD *)(v2 + 96);
      v36 = v31;
      v37 = v34;
      v38 = v33;
      v39 = 0;
      v40 = 0;
      if ( v33 <= v35 - *((_DWORD *)this + 157) )
        v39 = v33;
      else
        v38 = 0;
      si128.left = v38;
      v41 = 0;
      if ( v34 <= v35 - *((_DWORD *)this + 158) )
        v40 = v34;
      else
        v37 = 0;
      v42 = v35 - *((_DWORD *)this + 159);
      si128.top = v37;
      v43 = v32 <= v42;
      v44 = v32;
      v45 = 0;
      if ( v43 )
        v41 = v32;
      else
        v44 = 0;
      v46 = v35 - *((_DWORD *)this + 160);
      si128.right = v44;
      v43 = v36 <= v46;
      v47 = v36;
      v4 = 1;
      if ( v43 )
        v45 = v36;
      else
        v47 = 0;
      si128.bottom = v47;
      v48 = (_DWORD *)*((_QWORD *)this + 91);
      v48[70] = v39;
      v48[71] = v40;
      v48[72] = v41;
      v48[73] = v45;
    }
    else
    {
      if ( (*((_DWORD *)this + 148) & 0x200000) != 0 )
      {
        v49 = *(_DWORD *)(v2 + 96);
        v50 = v49;
        v51 = v49;
        v52 = v49;
        v53 = v49;
      }
      else
      {
        v54 = *((_QWORD *)this + 91);
        v75 = *(struct tagRECT *)(v54 + 48);
        v55 = RectWidth((const struct tagRECT *)(v54 + 180));
        v75.right = _mm_cvtsi128_si32((__m128i)v75) + (int)((double)v55 * *(double *)(v56 + 296));
        v57 = RectHeight((const struct tagRECT *)(v56 + 180));
        v75.bottom = v75.top + (int)((double)v57 * *(double *)(v58 + 296));
        if ( !CTopLevelWindow::GetMonitorRect(v59, &v75, &si128) )
          si128 = v75;
        max<int>(0LL, (unsigned int)(si128.left - v75.left));
        max<int>(0LL, (unsigned int)(v75.right - si128.right));
        max<int>(0LL, (unsigned int)(v60 - v75.top));
        v62 = max<int>(0LL, (unsigned int)(v75.bottom - v61));
        v53 = *(_DWORD *)(v2 + 96);
        v52 = v62;
      }
      v4 = 1;
      if ( v49 > v53 - *((_DWORD *)this + 157) )
        v49 = 0;
      v63 = v53 - *((_DWORD *)this + 158);
      v74.left = v49;
      if ( v50 > v63 )
        v50 = 0;
      v43 = v51 <= v53 - *((_DWORD *)this + 159);
      v74.top = v50;
      v64 = *((_QWORD *)this + 91);
      if ( !v43 )
        v51 = 0;
      v65 = v53 - *((_DWORD *)this + 160);
      v74.right = v51;
      if ( v52 > v65 )
        v52 = 0;
      v74.bottom = v52;
      si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&v74);
      *(struct tagRECT *)(v64 + 280) = si128;
    }
  }
  v66 = (const struct _MARGINS *)((char *)this + 644);
  v67 = SetMargin((struct _MARGINS *)((char *)this + 644), si128.left, si128.top, si128.right, si128.bottom, 0LL) || v22;
  if ( v4 || (*((_BYTE *)this + 240) & 4) != 0 )
  {
    v68 = (CAtlasedRectsVisual *)*((_QWORD *)this + 35);
    v69 = (4 * v4) | *((_BYTE *)this + 240) & 0xFB;
    *((_BYTE *)this + 240) = v69;
    if ( (v69 & 4) == 0 )
      v66 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(v68, v66);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v67;
}
