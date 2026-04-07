/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800253FC
 * Callers:
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009AA8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000EB94 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000F0A0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18000F270 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800191E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B090 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002A740 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18003EF80 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000C888 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000D36C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000F580 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025084 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x1800252E0 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025E70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180026C30 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x1800289AC (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18003FEA4 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x18003FF0C (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x1800409A4 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180040EE4 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180084CB0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm6_4
  float v5; // xmm10_4
  __int64 v6; // rcx
  __int64 v7; // rax
  CWindowList *v8; // rcx
  int TimelineForTransform; // eax
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  int v17; // r10d
  int v18; // edx
  __m128i v19; // xmm0
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // r8d
  unsigned __int32 v23; // xmm0_4
  __m128i v24; // xmm14
  unsigned int v25; // eax
  float v26; // xmm0_4
  int v27; // ecx
  float v28; // xmm14_4
  __m128i v29; // xmm15
  unsigned int v30; // eax
  __int64 v31; // rdx
  __m128i v32; // xmm8
  __m128i v33; // xmm9
  unsigned int v34; // eax
  __int64 v35; // rcx
  float v36; // xmm8_4
  __m128i v37; // xmm12
  int v38; // eax
  float v39; // xmm9_4
  float v40; // xmm13_4
  float v41; // xmm12_4
  float v42; // xmm15_4
  char v43; // al
  float v44; // xmm1_4
  __int64 Theme; // rax
  unsigned int v46; // r13d
  __int64 v47; // rax
  unsigned int v48; // ebx
  int v49; // r15d
  __int64 v50; // r14
  __int64 v51; // rax
  int ThemeAnimationTransform; // eax
  float v53; // xmm7_4
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rsi
  __int64 v57; // rax
  int ThemeTimingFunction; // eax
  __int64 v59; // rcx
  int v60; // eax
  float v61; // xmm3_4
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // r8
  int v66; // eax
  int v67; // ecx
  float v68; // xmm4_4
  float v69; // xmm2_4
  float v70; // xmm8_4
  float v71; // xmm9_4
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // esi
  float v77; // xmm1_4
  float v78; // xmm0_4
  float v79; // xmm12_4
  float v80; // xmm4_4
  float v81; // xmm0_4
  float v82; // xmm2_4
  float v83; // xmm1_4
  float v84; // xmm0_4
  float v85; // xmm3_4
  float v86; // xmm8_4
  float v87; // xmm0_4
  int v88; // eax
  float v89; // xmm0_4
  int v90; // eax
  float v91; // xmm3_4
  float v92; // xmm8_4
  float v93; // xmm0_4
  int v94; // eax
  float v95; // xmm0_4
  int v96; // eax
  int v97; // r9d
  int v98; // eax
  char v99; // al
  float v100; // xmm0_4
  float v101; // xmm3_4
  int v102; // eax
  float v103; // xmm2_4
  float v104; // xmm3_4
  float v105; // xmm0_4
  float v106; // xmm3_4
  float v107; // xmm1_4
  float v108; // xmm0_4
  float v109; // xmm2_4
  unsigned int v110; // [rsp+28h] [rbp-E0h]
  unsigned int v111; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v112; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v113; // [rsp+50h] [rbp-B8h] BYREF
  float v114; // [rsp+54h] [rbp-B4h]
  unsigned int v115; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v116; // [rsp+5Ch] [rbp-ACh]
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v118; // [rsp+70h] [rbp-98h] BYREF
  float v119; // [rsp+78h] [rbp-90h]
  float v120; // [rsp+7Ch] [rbp-8Ch]
  struct _GUID v121; // [rsp+80h] [rbp-88h] BYREF

  v115 = 0;
  v4 = 0.0;
  v5 = 0.0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_52;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v6, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v6, a2, &v121);
  v7 = *(_QWORD *)&v121.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v121.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)v121.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v8, &v121, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 5)
                                                                                     + 16LL)
                                                                       + 216LL))(
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
        &v121,
        a1 | 0xD100000000000000uLL);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 328) + 611LL) &= ~0x10u;
  *(_DWORD *)(a1 + 368) = a2;
  *(_OWORD *)(a1 + 292) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v110 = 1022;
    goto LABEL_97;
  }
  v11 = *(_QWORD *)(a1 + 328);
  v12 = *(_QWORD *)(a1 + 336);
  v13 = *(_DWORD *)(a1 + 308);
  v14 = *(_DWORD *)(a1 + 312);
  v15 = *(_DWORD *)(v12 + 88);
  v16 = *(_DWORD *)(a1 + 316) - v13;
  v17 = *(_DWORD *)(v12 + 96);
  LODWORD(v12) = v15 + v13;
  v18 = *(_DWORD *)(v11 + 48);
  *(float *)&PerformanceCount.LowPart = (float)(int)v12;
  v19 = _mm_cvtsi32_si128(v17 + v14);
  v20 = 0;
  if ( v16 >= 0 )
    v20 = v16;
  v21 = *(_DWORD *)(a1 + 320) - v14;
  v22 = *(_DWORD *)(v11 + 52);
  v23 = _mm_cvtepi32_ps(v19).m128_u32[0];
  v24 = _mm_cvtsi32_si128(v20);
  v25 = 0;
  if ( v21 >= 0 )
    v25 = v21;
  v114 = *(float *)&v23;
  v26 = FLOAT_0_5;
  v27 = *(_DWORD *)(v11 + 56) - v18;
  LODWORD(v28) = _mm_cvtepi32_ps(v24).m128_u32[0];
  v29 = _mm_cvtsi32_si128(v25);
  v30 = v15 + v18;
  v31 = *(unsigned int *)(a1 + 368);
  v32 = _mm_cvtsi32_si128(v30);
  v33 = _mm_cvtsi32_si128(v17 + v22);
  v34 = 0;
  if ( v27 >= 0 )
    v34 = v27;
  v35 = (unsigned int)(*(_DWORD *)(v11 + 60) - v22);
  LODWORD(v36) = _mm_cvtepi32_ps(v32).m128_u32[0];
  v37 = _mm_cvtsi32_si128(v34);
  v38 = 0;
  if ( (int)v35 >= 0 )
    v38 = *(_DWORD *)(v11 + 60) - v22;
  *(float *)&v116 = v36;
  LODWORD(v39) = _mm_cvtepi32_ps(v33).m128_u32[0];
  v118 = __PAIR64__(LODWORD(v39), LODWORD(v36));
  *((float *)&v116 + 1) = v39;
  v40 = (float)v38;
  LODWORD(v41) = _mm_cvtepi32_ps(v37).m128_u32[0];
  v120 = (float)v38;
  v119 = v41;
  LODWORD(v42) = _mm_cvtepi32_ps(v29).m128_u32[0];
  if ( (((_DWORD)v31 - 2) & 0xFFFFFFFD) != 0 )
  {
    v43 = 0;
    v44 = 0.0;
  }
  else
  {
    v43 = 1;
    v44 = FLOAT_0_5;
  }
  *(float *)(a1 + 468) = v44;
  if ( !v43 )
    v26 = 0.0;
  *(_DWORD *)(a1 + 476) = 0;
  *(float *)(a1 + 472) = v26;
  if ( (_DWORD)v31 == 3 || (_DWORD)v31 == 5 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v11 + 40), a1 + 292);
    if ( !IsRectEmpty((const RECT *)(a1 + 292)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v42 / v28, (struct MilPointAndSizeF *)&v118);
      v39 = *((float *)&v118 + 1);
      LODWORD(v36) = v118;
      v31 = *(unsigned int *)(a1 + 368);
      v40 = v120;
      v41 = v119;
      v116 = v118;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 368) == 3 )
    {
      *(_DWORD *)(a1 + 368) = 6;
      v31 = 6LL;
      goto LABEL_24;
    }
LABEL_52:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v56 = 0LL;
      v50 = 0LL;
      goto LABEL_54;
    }
    v110 = 1302;
    goto LABEL_97;
  }
LABEL_24:
  if ( (unsigned int)(v31 - 7) <= 2 )
  {
    v61 = FLOAT_1_0;
    v5 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 182);
    if ( (_DWORD)v31 == 7 )
    {
      v61 = 0.0;
      v4 = FLOAT_1_0;
    }
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9, v5, v61, v4, 4);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_45;
    v110 = 1078;
LABEL_97:
    v97 = TimelineForTransform;
LABEL_99:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v97, v110);
    return v10;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v35, v31, &v113, &v112);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v110 = 1083;
    goto LABEL_97;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v113, v112, 1LL, &v115, 4, &v111);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v110 = 1090;
    goto LABEL_97;
  }
  v46 = 0;
  if ( !v115 )
  {
LABEL_45:
    v62 = *(_QWORD *)(a1 + 360);
    if ( v62 )
    {
      *(_QWORD *)(v62 + 48) = *(_QWORD *)(v62 + 32);
      *(_WORD *)(v62 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v62 + 24) = v5;
    }
    else
    {
      v63 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              80LL);
      if ( v63 )
      {
        CTimelineBase::CTimelineBase(v63, v5, 0.0, 1.0, 0);
        *v64 = &CTimeline<float>::`vftable';
      }
      else
      {
        v64 = 0LL;
      }
      *(_QWORD *)(a1 + 360) = v64;
      if ( !v64 )
      {
        v10 = -2147024882;
        v110 = 1290;
        v97 = -2147024882;
        goto LABEL_99;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 4096);
    goto LABEL_52;
  }
  while ( 1 )
  {
    v47 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v47, v113, v112, v46, 0LL, 0, &v111) != -2147024662 )
      goto LABEL_40;
    v48 = v111;
    v49 = 0;
    v50 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v111);
    v51 = CDesktopManager::GetTheme(3LL);
    ThemeAnimationTransform = GetThemeAnimationTransform(v51, v113, v112, v46, v50, v48, &v111);
    v10 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v50 - 1) <= 1 )
    {
      v53 = (float)*(int *)(v50 + 12) / 1000.0;
      v54 = CDesktopManager::GetTheme(4LL);
      if ( (unsigned int)GetThemeTimingFunction(v54, *(unsigned int *)(v50 + 4), 0LL, 0LL, &v111) == -2147024662 )
      {
        v55 = v111;
        v56 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v111);
        v57 = CDesktopManager::GetTheme(4LL);
        ThemeTimingFunction = GetThemeTimingFunction(v57, *(unsigned int *)(v50 + 4), v56, v55, &v111);
        v10 = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeTimingFunction, 0x46Bu);
          goto LABEL_54;
        }
        v49 = CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v59, v56);
        (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      }
      if ( *(_DWORD *)v50 != 1 )
      {
        if ( *(_DWORD *)v50 == 2 )
        {
          if ( (*(_BYTE *)(v50 + 16) & 1) != 0 )
          {
            v98 = *(_DWORD *)(a1 + 368);
            if ( v98 == 3 )
            {
              v99 = 1;
            }
            else
            {
              if ( v98 != 5 )
              {
                v10 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x4EBu);
                goto LABEL_134;
              }
              v99 = 0;
            }
            if ( v99 )
              v100 = 0.0;
            else
              v100 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 175);
            if ( v99 )
              v101 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 175);
            else
              v101 = 0.0;
            v102 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9, v53, v101, v100, v49);
            v10 = v102;
            if ( v102 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v102, 0x4E6u);
              goto LABEL_134;
            }
          }
          else
          {
            v60 = CTopLevelWindow3D::CreateTimelineForTransform(
                    a1,
                    9,
                    v53,
                    *(float *)(v50 + 24),
                    *(float *)(v50 + 20),
                    v49);
            v10 = v60;
            if ( v60 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v60, 0x4F2u);
              goto LABEL_134;
            }
          }
        }
LABEL_38:
        v5 = fmaxf(v53, v5);
        goto LABEL_39;
      }
      v66 = *(_DWORD *)(v50 + 16);
      if ( (v66 & 1) != 0 )
      {
        v76 = *(_DWORD *)(a1 + 368);
        if ( ((v76 - 3) & 0xFFFFFFFD) != 0 )
        {
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x498u);
          goto LABEL_134;
        }
        v77 = v114 * *(float *)(v50 + 32);
        v78 = 1.0 - *(float *)(v50 + 28);
        v79 = v78 * v41;
        v80 = (float)(*(float *)&PerformanceCount.LowPart * *(float *)(v50 + 28)) + (float)(v78 * v36);
        v81 = (float)(1.0 - *(float *)(v50 + 32)) * v39;
        v82 = (float)(1.0 - *(float *)(v50 + 32)) * v40;
        *(float *)&v116 = v80;
        v83 = v77 + v81;
        v84 = v28 * *(float *)(v50 + 28);
        v85 = v80 - *(float *)&PerformanceCount.LowPart;
        *((float *)&v116 + 1) = v83;
        v41 = v79 + v84;
        v86 = v83 - v114;
        v40 = v82 + (float)(v42 * *(float *)(v50 + 32));
        if ( v76 == 3 )
        {
          v87 = v80 - *(float *)&PerformanceCount.LowPart;
          v85 = 0.0;
        }
        else
        {
          v87 = 0.0;
        }
        v88 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0, v53, v85, v87, v49);
        v10 = v88;
        if ( v88 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v88, 0x48Cu);
          goto LABEL_134;
        }
        if ( v76 == 3 )
        {
          v89 = v86;
          v86 = 0.0;
        }
        else
        {
          v89 = 0.0;
        }
        v90 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1, v53, v86, v89, v49);
        v10 = v90;
        if ( v90 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v90, 0x48Du);
          goto LABEL_134;
        }
        if ( v28 == 0.0 )
          v91 = 0.0;
        else
          v91 = v41 / v28;
        if ( v42 == 0.0 )
          v92 = 0.0;
        else
          v92 = v40 / v42;
        if ( v76 == 3 )
        {
          v93 = v91;
          v91 = FLOAT_1_0;
        }
        else
        {
          v93 = FLOAT_1_0;
        }
        v94 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6, v53, v91, v93, v49);
        v10 = v94;
        if ( v94 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v94, 0x492u);
          goto LABEL_134;
        }
        if ( v76 == 3 )
        {
          v95 = v92;
          v92 = FLOAT_1_0;
        }
        else
        {
          v95 = FLOAT_1_0;
        }
        v96 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7, v53, v92, v95, v49);
        v10 = v96;
        if ( v96 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v96, 0x493u);
          goto LABEL_134;
        }
        goto LABEL_38;
      }
      if ( v41 > 0.0 && v40 > 0.0 )
      {
        v67 = *(_DWORD *)(a1 + 368);
        if ( v67 == 2 )
        {
          v103 = *(float *)(v50 + 28);
          v106 = fmaxf(v103, v28 / v41);
          v107 = fmaxf(*(float *)(v50 + 32), v42 / v40);
          v105 = fminf(v106, v107);
          v104 = fmaxf(v106, v107);
        }
        else
        {
          if ( v67 != 4 )
            goto LABEL_64;
          v103 = *(float *)(v50 + 28);
          v104 = fminf(fminf(v103, v28 / v41), fminf(*(float *)(v50 + 32), v42 / v40));
          v105 = v104;
        }
        v108 = v105 - *(float *)(v50 + 20);
        v109 = v103 - *(float *)(v50 + 20);
        *(float *)(v50 + 28) = v104;
        *(float *)(v50 + 32) = v104;
        v53 = fmaxf(0.0, (float)(v108 * v53) / v109);
      }
LABEL_64:
      if ( (v66 & 4) != 0 )
      {
        v68 = v36 - *(float *)&PerformanceCount.LowPart;
        v69 = 1.0 - *(float *)(v50 + 40);
        v70 = (float)((float)(1.0 - *(float *)(v50 + 32)) * (float)(v42 * v69)) + (float)(v39 - v114);
        v71 = (float)((float)(1.0 - *(float *)(v50 + 24)) * (float)(v69 * v40)) + (float)(v39 - v114);
        v72 = CTopLevelWindow3D::CreateTimelineForTransform(
                a1,
                0,
                v53,
                (float)((float)(1.0 - *(float *)(v50 + 28)) * (float)(v28 * (float)(1.0 - *(float *)(v50 + 36)))) + v68,
                (float)((float)(1.0 - *(float *)(v50 + 20)) * (float)((float)(1.0 - *(float *)(v50 + 36)) * v41)) + v68,
                v49);
        v10 = v72;
        if ( v72 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v72, 0x4D3u);
          goto LABEL_134;
        }
        v73 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1, v53, v70, v71, v49);
        v10 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0x4D4u);
          goto LABEL_134;
        }
      }
      v74 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6, v53, *(float *)(v50 + 28), *(float *)(v50 + 20), v49);
      v10 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0x4D7u);
        goto LABEL_134;
      }
      v75 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7, v53, *(float *)(v50 + 32), *(float *)(v50 + 24), v49);
      v10 = v75;
      if ( v75 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v75, 0x4D8u);
        goto LABEL_134;
      }
      goto LABEL_38;
    }
LABEL_39:
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v50);
LABEL_40:
    if ( ++v46 >= v115 )
      goto LABEL_45;
    LODWORD(v36) = v116;
    v39 = *((float *)&v116 + 1);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeAnimationTransform, 0x458u);
LABEL_134:
  v56 = 0LL;
LABEL_54:
  if ( v50 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v50);
  if ( v56 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v56);
  return v10;
}
