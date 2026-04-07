/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180024E74
 * Callers:
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009B08 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010040 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180015CD8 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180016DA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180022400 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002782C (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18003EE00 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001A7D4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800258E8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18002612C (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800289B0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180028FB4 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18002A3C8 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002B80C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18002C410 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18003F840 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18003FCC4 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x18003FE68 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x1800403C4 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180040834 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085510 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm10_4
  __int64 v5; // rcx
  __int64 v6; // rax
  CWindowList *v7; // rcx
  int TimelineForTransform; // eax
  unsigned int v9; // ebx
  __int64 v10; // r11
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  int v16; // r10d
  int v17; // edx
  __m128i v18; // xmm0
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // r8d
  unsigned __int32 v22; // xmm0_4
  __m128i v23; // xmm14
  unsigned int v24; // eax
  float v25; // xmm0_4
  int v26; // ecx
  float v27; // xmm14_4
  __m128i v28; // xmm15
  unsigned int v29; // eax
  __int64 v30; // rdx
  __m128i v31; // xmm8
  __m128i v32; // xmm9
  unsigned int v33; // eax
  __int64 v34; // rcx
  float v35; // xmm8_4
  __m128i v36; // xmm12
  int v37; // eax
  float v38; // xmm9_4
  float v39; // xmm13_4
  float v40; // xmm12_4
  float v41; // xmm15_4
  char v42; // al
  float v43; // xmm1_4
  __int64 Theme; // rax
  unsigned int v45; // r13d
  __int64 v46; // rax
  unsigned int v47; // ebx
  __int64 v48; // r14
  __int64 v49; // rax
  int ThemeAnimationTransform; // eax
  float v51; // xmm7_4
  __int64 v52; // rax
  unsigned int v53; // ebx
  __int64 v54; // rsi
  __int64 v55; // rax
  int ThemeTimingFunction; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // r8
  int v63; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm4_4
  float v73; // xmm0_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // r9d
  int v82; // eax
  int v83; // eax
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm0_4
  float v87; // xmm3_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm2_4
  unsigned int v91; // [rsp+28h] [rbp-E0h]
  unsigned int v92; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v93; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v94; // [rsp+50h] [rbp-B8h] BYREF
  float v95; // [rsp+54h] [rbp-B4h]
  unsigned int v96; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v97; // [rsp+5Ch] [rbp-ACh]
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v99; // [rsp+70h] [rbp-98h] BYREF
  float v100; // [rsp+78h] [rbp-90h]
  float v101; // [rsp+7Ch] [rbp-8Ch]
  struct _GUID v102; // [rsp+80h] [rbp-88h] BYREF

  v96 = 0;
  v4 = 0.0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_50;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v5, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v102);
  v6 = *(_QWORD *)&v102.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v102.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)v102.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v7, &v102, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 5)
                                                                                     + 16LL)
                                                                       + 216LL))(
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
        &v102,
        a1 | 0xD100000000000000uLL);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 328) + 611LL) &= ~0x10u;
  *(_DWORD *)(a1 + 368) = a2;
  *(_OWORD *)(a1 + 292) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v91 = 1022;
    goto LABEL_79;
  }
  v10 = *(_QWORD *)(a1 + 328);
  v11 = *(_QWORD *)(a1 + 336);
  v12 = *(_DWORD *)(a1 + 308);
  v13 = *(_DWORD *)(a1 + 312);
  v14 = *(_DWORD *)(v11 + 88);
  v15 = *(_DWORD *)(a1 + 316) - v12;
  v16 = *(_DWORD *)(v11 + 96);
  LODWORD(v11) = v14 + v12;
  v17 = *(_DWORD *)(v10 + 48);
  *(float *)&PerformanceCount.LowPart = (float)(int)v11;
  v18 = _mm_cvtsi32_si128(v16 + v13);
  v19 = 0;
  if ( v15 >= 0 )
    v19 = v15;
  v20 = *(_DWORD *)(a1 + 320) - v13;
  v21 = *(_DWORD *)(v10 + 52);
  v22 = _mm_cvtepi32_ps(v18).m128_u32[0];
  v23 = _mm_cvtsi32_si128(v19);
  v24 = 0;
  if ( v20 >= 0 )
    v24 = v20;
  v95 = *(float *)&v22;
  v25 = FLOAT_0_5;
  v26 = *(_DWORD *)(v10 + 56) - v17;
  LODWORD(v27) = _mm_cvtepi32_ps(v23).m128_u32[0];
  v28 = _mm_cvtsi32_si128(v24);
  v29 = v14 + v17;
  v30 = *(unsigned int *)(a1 + 368);
  v31 = _mm_cvtsi32_si128(v29);
  v32 = _mm_cvtsi32_si128(v16 + v21);
  v33 = 0;
  if ( v26 >= 0 )
    v33 = v26;
  v34 = (unsigned int)(*(_DWORD *)(v10 + 60) - v21);
  LODWORD(v35) = _mm_cvtepi32_ps(v31).m128_u32[0];
  v36 = _mm_cvtsi32_si128(v33);
  v37 = 0;
  if ( (int)v34 >= 0 )
    v37 = *(_DWORD *)(v10 + 60) - v21;
  *(float *)&v97 = v35;
  LODWORD(v38) = _mm_cvtepi32_ps(v32).m128_u32[0];
  v99 = __PAIR64__(LODWORD(v38), LODWORD(v35));
  *((float *)&v97 + 1) = v38;
  v39 = (float)v37;
  LODWORD(v40) = _mm_cvtepi32_ps(v36).m128_u32[0];
  v101 = (float)v37;
  v100 = v40;
  LODWORD(v41) = _mm_cvtepi32_ps(v28).m128_u32[0];
  if ( (((_DWORD)v30 - 2) & 0xFFFFFFFD) != 0 )
  {
    v42 = 0;
    v43 = 0.0;
  }
  else
  {
    v42 = 1;
    v43 = FLOAT_0_5;
  }
  *(float *)(a1 + 468) = v43;
  if ( !v42 )
    v25 = 0.0;
  *(_DWORD *)(a1 + 476) = 0;
  *(float *)(a1 + 472) = v25;
  if ( (_DWORD)v30 == 3 || (_DWORD)v30 == 5 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v10 + 40), a1 + 292);
    if ( !IsRectEmpty((const RECT *)(a1 + 292)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v41 / v27, (struct MilPointAndSizeF *)&v99);
      v38 = *((float *)&v99 + 1);
      LODWORD(v35) = v99;
      v30 = *(unsigned int *)(a1 + 368);
      v39 = v101;
      v40 = v100;
      v97 = v99;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 368) == 3 )
    {
      *(_DWORD *)(a1 + 368) = 6;
      v30 = 6LL;
      goto LABEL_24;
    }
LABEL_50:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v54 = 0LL;
      v48 = 0LL;
      goto LABEL_52;
    }
    v91 = 1302;
    goto LABEL_79;
  }
LABEL_24:
  if ( (unsigned int)(v30 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 182);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_43;
    v91 = 1078;
LABEL_79:
    v81 = TimelineForTransform;
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v81, v91);
    return v9;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v34, v30, &v94, &v93);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v91 = 1083;
    goto LABEL_79;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v94, v93, 1LL, &v96, 4, &v92);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v91 = 1090;
    goto LABEL_79;
  }
  v45 = 0;
  if ( !v96 )
  {
LABEL_43:
    v59 = *(_QWORD *)(a1 + 360);
    if ( v59 )
    {
      *(_QWORD *)(v59 + 48) = *(_QWORD *)(v59 + 32);
      *(_WORD *)(v59 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v59 + 24) = v4;
    }
    else
    {
      v60 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              80LL);
      if ( v60 )
      {
        CTimelineBase::CTimelineBase(v60, v4, 0.0, 1.0, 0);
        *v61 = &CTimeline<float>::`vftable';
      }
      else
      {
        v61 = 0LL;
      }
      *(_QWORD *)(a1 + 360) = v61;
      if ( !v61 )
      {
        v9 = -2147024882;
        v91 = 1290;
        v81 = -2147024882;
        goto LABEL_81;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 0x1000u);
    goto LABEL_50;
  }
  while ( 1 )
  {
    v46 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v46, v94, v93, v45, 0LL, 0, &v92) != -2147024662 )
      goto LABEL_40;
    v47 = v92;
    v48 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v92);
    v49 = CDesktopManager::GetTheme(3LL);
    ThemeAnimationTransform = GetThemeAnimationTransform(v49, v94, v93, v45, v48, v47, &v92);
    v9 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v48 - 1) <= 1 )
    {
      v51 = (float)*(int *)(v48 + 12) / 1000.0;
      v52 = CDesktopManager::GetTheme(4LL);
      if ( (unsigned int)GetThemeTimingFunction(v52, *(unsigned int *)(v48 + 4), 0LL, 0LL, &v92) == -2147024662 )
      {
        v53 = v92;
        v54 = (*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                v92);
        v55 = CDesktopManager::GetTheme(4LL);
        ThemeTimingFunction = GetThemeTimingFunction(v55, *(unsigned int *)(v48 + 4), v54, v53, &v92);
        v9 = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeTimingFunction, 0x46Bu);
          goto LABEL_52;
        }
        CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v57, v54);
        (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      }
      if ( *(_DWORD *)v48 != 1 )
      {
        if ( *(_DWORD *)v48 == 2 )
        {
          if ( (*(_BYTE *)(v48 + 16) & 1) != 0 )
          {
            v82 = *(_DWORD *)(a1 + 368);
            if ( v82 != 3 && v82 != 5 )
            {
              v9 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x4EBu);
              goto LABEL_106;
            }
            v83 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            v9 = v83;
            if ( v83 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v83, 0x4E6u);
              goto LABEL_106;
            }
          }
          else
          {
            v58 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
            v9 = v58;
            if ( v58 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x4F2u);
              goto LABEL_106;
            }
          }
        }
LABEL_38:
        v4 = fmaxf(v51, v4);
        goto LABEL_39;
      }
      v63 = *(_DWORD *)(v48 + 16);
      if ( (v63 & 1) != 0 )
      {
        if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x498u);
          goto LABEL_106;
        }
        v69 = v95 * *(float *)(v48 + 32);
        v70 = 1.0 - *(float *)(v48 + 28);
        v71 = v70 * v40;
        v72 = (float)(*(float *)&PerformanceCount.LowPart * *(float *)(v48 + 28)) + (float)(v70 * v35);
        v73 = (float)(1.0 - *(float *)(v48 + 32)) * v38;
        v74 = (float)(1.0 - *(float *)(v48 + 32)) * v39;
        *(float *)&v97 = v72;
        v75 = v69 + v73;
        v76 = v27 * *(float *)(v48 + 28);
        *((float *)&v97 + 1) = v75;
        v40 = v71 + v76;
        v39 = v74 + (float)(v41 * *(float *)(v48 + 32));
        v77 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        v9 = v77;
        if ( v77 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, 0x48Cu);
          goto LABEL_106;
        }
        v78 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        v9 = v78;
        if ( v78 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v78, 0x48Du);
          goto LABEL_106;
        }
        v79 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
        v9 = v79;
        if ( v79 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v79, 0x492u);
          goto LABEL_106;
        }
        v80 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
        v9 = v80;
        if ( v80 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v80, 0x493u);
          goto LABEL_106;
        }
        goto LABEL_38;
      }
      if ( v40 > 0.0 && v39 > 0.0 )
      {
        v64 = *(_DWORD *)(a1 + 368);
        if ( v64 == 2 )
        {
          v84 = *(float *)(v48 + 28);
          v87 = fmaxf(v84, v27 / v40);
          v88 = fmaxf(*(float *)(v48 + 32), v41 / v39);
          v86 = fminf(v87, v88);
          v85 = fmaxf(v87, v88);
        }
        else
        {
          if ( v64 != 4 )
            goto LABEL_62;
          v84 = *(float *)(v48 + 28);
          v85 = fminf(fminf(v84, v27 / v40), fminf(*(float *)(v48 + 32), v41 / v39));
          v86 = v85;
        }
        v89 = v86 - *(float *)(v48 + 20);
        v90 = v84 - *(float *)(v48 + 20);
        *(float *)(v48 + 28) = v85;
        *(float *)(v48 + 32) = v85;
        v51 = fmaxf(0.0, (float)(v89 * v51) / v90);
      }
LABEL_62:
      if ( (v63 & 4) != 0 )
      {
        v65 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
        v9 = v65;
        if ( v65 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, 0x4D3u);
          goto LABEL_106;
        }
        v66 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
        v9 = v66;
        if ( v66 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0x4D4u);
          goto LABEL_106;
        }
      }
      v67 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v9 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v67, 0x4D7u);
        goto LABEL_106;
      }
      v68 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v9 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v68, 0x4D8u);
        goto LABEL_106;
      }
      goto LABEL_38;
    }
LABEL_39:
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v48);
LABEL_40:
    if ( ++v45 >= v96 )
      goto LABEL_43;
    LODWORD(v35) = v97;
    v38 = *((float *)&v97 + 1);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeAnimationTransform, 0x458u);
LABEL_106:
  v54 = 0LL;
LABEL_52:
  if ( v48 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v48);
  if ( v54 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v54);
  return v9;
}
