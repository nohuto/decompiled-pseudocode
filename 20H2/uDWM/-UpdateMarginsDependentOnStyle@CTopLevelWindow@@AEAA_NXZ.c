/*
 * XREFs of ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001EAC0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C060 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x18003A320 (-SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DC34 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18003F0F4 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z @ 0x18003F238 (-GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180053C44 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x180056366 (ceil_0.c)
 *     floor_0 @ 0x18005638A (floor_0.c)
 */

_BOOL8 __fastcall CTopLevelWindow::UpdateMarginsDependentOnStyle(CTopLevelWindow *this)
{
  __int64 v2; // rdi
  char v3; // r14
  int SystemMetricsForDpi; // esi
  int v5; // r15d
  int v6; // r13d
  int v7; // r12d
  __int64 v8; // rcx
  double v9; // xmm6_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  int v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  bool v21; // si
  __int64 v22; // rdx
  int v23; // eax
  struct tagRECT v24; // xmm1
  LONG v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // r10d
  int v29; // r8d
  int v30; // edx
  int v31; // r9d
  const struct _MARGINS *v32; // rcx
  bool v33; // si
  char v34; // al
  int v36; // [rsp+38h] [rbp-49h]
  int v37; // [rsp+38h] [rbp-49h]
  int v38[6]; // [rsp+40h] [rbp-41h]
  struct tagRECT v39; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT v40; // [rsp+68h] [rbp-19h] BYREF

  v2 = *((_QWORD *)this + 91);
  v3 = 0;
  SystemMetricsForDpi = 0;
  v5 = 0;
  v6 = 0;
  v36 = *((_DWORD *)this + 148);
  v7 = 0;
  if ( (unsigned __int8)IsOpenThemeDataPresent()
    && (v36 & 6) != 0
    && *(_DWORD *)(v2 + 64) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *(_DWORD *)(v2 + 68) >= dword_1800E2E9C
    && *(_DWORD *)(v2 + 72) >= dword_1800E2EA0
    && *(_DWORD *)(v2 + 76) >= dword_1800E2EA4
    && (*(_DWORD *)(v2 + 104) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *(unsigned int *)(v2 + 324)) > 0 )
  {
    if ( (*(_BYTE *)(v2 + 102) & 0xC0) == 0xC0 )
    {
      v8 = 51LL;
      if ( *(char *)(v2 + 104) >= 0 )
        v8 = 4LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v8, *(unsigned int *)(v2 + 324));
    }
    v9 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    if ( v9 < 0.0 )
      v10 = ceil_0(v9 - 0.5);
    else
      v10 = floor_0(v9 + 0.5);
    v37 = (int)v10;
    if ( v9 < 0.0 )
      v11 = ceil_0(v9 - 0.5);
    else
      v11 = floor_0(v9 + 0.5);
    v12 = *(_DWORD *)(v2 + 68);
    v13 = *(_DWORD *)(v2 + 72);
    v14 = *(_DWORD *)(v2 + 76);
    v15 = v37 + SystemMetricsForDpi;
    v16 = *(_DWORD *)(v2 + 64);
    v17 = v16;
    if ( v16 <= (int)v11 )
      v17 = (int)v11;
    SystemMetricsForDpi = v16 - v17;
    v18 = *(_DWORD *)(v2 + 68);
    if ( v12 <= (int)v11 )
      v18 = (int)v11;
    v5 = v12 - v18;
    v19 = *(_DWORD *)(v2 + 72);
    if ( v13 <= v15 )
      v19 = v15;
    v7 = v13 - v19;
    v20 = *(_DWORD *)(v2 + 76);
    if ( v14 <= v37 )
      v20 = v37;
    v6 = v14 - v20;
  }
  v21 = SetMargin(
          (struct _MARGINS *)((char *)this + 628),
          SystemMetricsForDpi,
          v5,
          v7,
          v6,
          (const struct _MARGINS *)((char *)this + 612));
  if ( (*((_DWORD *)this + 148) & 0x200020) != 0 )
  {
    v22 = *((_QWORD *)this + 91);
    v23 = 0;
    v24 = *(struct tagRECT *)(v22 + 48);
    v40 = v24;
    if ( *(_DWORD *)(v22 + 188) - *(_DWORD *)(v22 + 180) >= 0 )
      v23 = *(_DWORD *)(v22 + 188) - *(_DWORD *)(v22 + 180);
    v25 = _mm_cvtsi128_si32((__m128i)v24) + (int)((double)v23 * *(double *)(v22 + 312));
    v26 = 0;
    v40.right = v25;
    if ( *(_DWORD *)(v22 + 192) - *(_DWORD *)(v22 + 184) >= 0 )
      v26 = *(_DWORD *)(v22 + 192) - *(_DWORD *)(v22 + 184);
    v40.bottom = v40.top + (int)((double)v26 * *(double *)(v22 + 312));
    if ( !CTopLevelWindow::GetMonitorRect((CTopLevelWindow *)(unsigned int)v40.bottom, &v40, &v39) )
      v39 = v40;
    v27 = *(_DWORD *)(v2 + 96);
    v3 = 1;
    v28 = v39.left - v40.left;
    if ( v39.left - v40.left < 0 )
      v28 = 0;
    v29 = v40.right - v39.right;
    if ( v40.right - v39.right < 0 )
      v29 = 0;
    v30 = v39.top - v40.top;
    if ( v39.top - v40.top < 0 )
      v30 = 0;
    v31 = v40.bottom - v39.bottom;
    if ( v40.bottom - v39.bottom < 0 )
      v31 = 0;
    if ( v28 > v27 - *((_DWORD *)this + 157) )
      v28 = 0;
    v38[0] = v28;
    if ( v29 > v27 - *((_DWORD *)this + 158) )
      v29 = 0;
    v38[1] = v29;
    if ( v30 > v27 - *((_DWORD *)this + 159) )
      v30 = 0;
    v38[2] = v30;
    if ( v31 > v27 - *((_DWORD *)this + 160) )
      v31 = 0;
    v38[3] = v31;
    *(_OWORD *)(*((_QWORD *)this + 91) + 280LL) = *(_OWORD *)v38;
  }
  else
  {
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
  }
  v33 = SetMargin((struct _MARGINS *)((char *)this + 644), v28, v29, v30, v31, 0LL) || v21;
  if ( v3 || (*((_BYTE *)this + 240) & 4) != 0 )
  {
    v34 = (4 * v3) | *((_BYTE *)this + 240) & 0xFB;
    *((_BYTE *)this + 240) = v34;
    if ( (v34 & 4) == 0 )
      v32 = 0LL;
    CAtlasedRectsVisual::SetClipMargins(*((CAtlasedRectsVisual **)this + 35), v32);
    CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
  }
  return v33;
}
