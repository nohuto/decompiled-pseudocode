/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18003950C
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180010D10 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800258E8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800272F4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180039F38 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18003A29C (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18003A348 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r14
  int v7; // eax
  unsigned int ThemeAnimationTransform; // ebx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  char v12; // r12
  int ThemeTimingFunction; // eax
  float v14; // xmm10_4
  __int64 v15; // rcx
  void *Theme; // rax
  unsigned int v17; // esi
  CAnimationEngine *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rax
  double v24; // xmm6_8
  double v25; // xmm7_8
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r12d
  int v30; // esi
  int v31; // r11d
  int v32; // r14d
  int v33; // r15d
  int v34; // edx
  int v35; // eax
  int v36; // esi
  int v37; // r8d
  int v38; // r10d
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // r9d
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  float v46; // xmm0_4
  float v47; // xmm1_4
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v51; // rdx
  CAnimationEngine *v52; // r12
  int v53; // xmm1_4
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  double v61; // xmm1_8
  double v62; // xmm2_8
  double v63; // xmm0_8
  double v64; // xmm3_8
  double v65; // xmm4_8
  double v66; // xmm5_8
  __m128 v67; // xmm1
  __int64 v68; // rcx
  int v69; // eax
  int v70; // xmm1_4
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // r8
  __m128i v74; // xmm0
  __int64 v75; // rdx
  int v76; // eax
  int v77; // ecx
  double v78; // xmm0_8
  double v79; // xmm0_8
  float v80; // xmm0_4
  __int64 v81; // r8
  __int64 v82; // rdx
  double v83; // xmm0_8
  double v84; // xmm1_8
  double v85; // xmm2_8
  double v86; // xmm3_8
  __int64 v87; // rax
  __m128 v88; // xmm1
  __m128 v89; // xmm0
  __int64 v90; // rcx
  float v91; // xmm1_4
  float v92; // xmm1_4
  double v93; // xmm0_8
  double v94; // xmm0_8
  __int64 j; // rax
  __int64 k; // rax
  unsigned int v97; // [rsp+28h] [rbp-E0h]
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  __int64 v99; // [rsp+58h] [rbp-B0h]
  __int64 v100; // [rsp+58h] [rbp-B0h]
  __int64 v101; // [rsp+58h] [rbp-B0h]
  __int64 v102; // [rsp+58h] [rbp-B0h]
  char v103; // [rsp+88h] [rbp-80h]
  bool v104; // [rsp+89h] [rbp-7Fh]
  bool v105; // [rsp+8Ah] [rbp-7Eh]
  char v106; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v107; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v108; // [rsp+90h] [rbp-78h]
  unsigned int v109; // [rsp+94h] [rbp-74h] BYREF
  int v110; // [rsp+98h] [rbp-70h]
  __int64 v111; // [rsp+A0h] [rbp-68h]
  int v112; // [rsp+A8h] [rbp-60h] BYREF
  int v113; // [rsp+ACh] [rbp-5Ch]
  __m128i si128; // [rsp+B0h] [rbp-58h] BYREF
  CAnimationEngine *v115; // [rsp+C0h] [rbp-48h]
  float v116; // [rsp+C8h] [rbp-40h] BYREF
  float v117; // [rsp+CCh] [rbp-3Ch] BYREF
  int v118; // [rsp+D0h] [rbp-38h]
  unsigned int i; // [rsp+D4h] [rbp-34h]
  unsigned int v120; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v121; // [rsp+E0h] [rbp-28h] BYREF
  float v122; // [rsp+F0h] [rbp-18h] BYREF
  struct IUIAnimationStoryboard2 *v123; // [rsp+F8h] [rbp-10h] BYREF
  float v124; // [rsp+100h] [rbp-8h] BYREF
  __int64 v125; // [rsp+108h] [rbp+0h]
  int v126; // [rsp+110h] [rbp+8h]
  __int64 v127; // [rsp+118h] [rbp+10h]
  int v128; // [rsp+120h] [rbp+18h]
  __int64 v129; // [rsp+128h] [rbp+20h]
  double v130; // [rsp+130h] [rbp+28h] BYREF
  double v131; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v132; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v133; // [rsp+144h] [rbp+3Ch] BYREF
  float v134; // [rsp+148h] [rbp+40h] BYREF
  double v135; // [rsp+150h] [rbp+48h] BYREF
  double v136; // [rsp+158h] [rbp+50h] BYREF
  double v137[2]; // [rsp+160h] [rbp+58h] BYREF
  int v138; // [rsp+170h] [rbp+68h]
  int v139; // [rsp+180h] [rbp+78h]
  __int128 v140; // [rsp+188h] [rbp+80h] BYREF
  __int128 v141; // [rsp+198h] [rbp+90h] BYREF
  __int128 v142; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v143; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v144; // [rsp+1C8h] [rbp+C0h] BYREF
  double v145; // [rsp+1D8h] [rbp+D0h]
  __int128 v146; // [rsp+1E0h] [rbp+D8h] BYREF
  double v147; // [rsp+1F0h] [rbp+E8h]
  _OWORD v148[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  _OWORD v149[2]; // [rsp+218h] [rbp+110h] BYREF

  v107 = *((_DWORD *)a2 + 7);
  v115 = this;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v123 = 0LL;
  v6 = 0LL;
  v111 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v123);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v97 = 626;
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v97);
    goto LABEL_57;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v123);
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v123->lpVtbl->SetTag)(
         v123,
         0LL,
         *((unsigned int *)a2 + 4));
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v97 = 630;
    goto LABEL_83;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v123->lpVtbl->SetStoryboardEventHandler)(
         v123,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v97 = 631;
    goto LABEL_83;
  }
  v9 = 0LL;
  v108 = 0;
  if ( *((_DWORD *)a2 + 5) )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)a2 + 5);
      v141 = 0LL;
      v142 = 0LL;
      v129 = (unsigned int)v9;
      v140 = 0LL;
      v143 = 0LL;
      v11 = **(_QWORD **)(v10 + 8 * v9);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
      v106 = v12;
      v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11);
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 16LL))(v11, &v141);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
        break;
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 24LL))(v11, &v140);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v98 = 652;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 32LL))(v11, &v117);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v98 = 653;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 40LL))(v11, &v116);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v98 = 654;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 48LL))(v11, &v124);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v98 = 655;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 56LL))(v11, &v134);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v98 = 656;
        goto LABEL_161;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v132);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v98 = 657;
        goto LABEL_161;
      }
      if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 112LL))(v11, &v122) < 0 )
        v122 = 0.0;
      if ( v12 )
      {
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 72LL))(v11, &v142);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v98 = 664;
          goto LABEL_161;
        }
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 80LL))(v11, &v143);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v98 = 665;
          goto LABEL_161;
        }
      }
      v131 = 0.0;
      v130 = 0.0;
      v104 = 0;
      v105 = 0;
      v14 = fmaxf(0.0099999998, 1.0 - v122);
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 88LL))(v11, &v133) >= 0 )
      {
        v104 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 96LL))(v11, &v131) >= 0;
        v105 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 104LL))(v11, &v130) >= 0;
      }
      v15 = **(_QWORD **)(*((_QWORD *)a2 + 5) + 8 * v9);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 128LL))(v15, &v112);
      v120 = 0;
      v135 = 0.0;
      Theme = (void *)CDesktopManager::GetTheme(3);
      v17 = v107;
      CAnimationEngine::_CalculateStaggerDelay(v18, Theme, v107, v112, v132, &v135);
      v19 = CDesktopManager::GetTheme(3);
      if ( (int)GetThemeAnimationProperty(v19, v107, (unsigned int)v112, 1LL, &v120, 4, &v109) >= 0 )
      {
        for ( i = 0; i < v120; ++i )
        {
          v20 = CDesktopManager::GetTheme(3);
          ThemeAnimationTransform = GetThemeAnimationTransform(v20, v17, (unsigned int)v112, v21, 0LL, 0, &v109);
          if ( ThemeAnimationTransform != -2147024662 )
            continue;
          v22 = v109;
          if ( v5 )
            (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v5);
          v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 v22);
          if ( !v5 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2C8u);
            goto LABEL_55;
          }
          v23 = CDesktopManager::GetTheme(3);
          ThemeTimingFunction = GetThemeAnimationTransform(v23, v17, (unsigned int)v112, i, v5, v22, &v109);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v98 = 715;
            goto LABEL_161;
          }
          v24 = ((float)((float)*(int *)(v5 + 8) / 1000.0) + v135) * v14;
          v25 = (float)((float)((float)*(int *)(v5 + 12) / 1000.0) * v14);
          v26 = CDesktopManager::GetTheme(4);
          if ( (unsigned int)GetThemeTimingFunction(v26, *(unsigned int *)(v5 + 4), 0LL, 0LL, &v109) == -2147024662 )
          {
            v27 = v109;
            if ( v6 )
              (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v6);
            v111 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v27);
            v6 = v111;
            if ( !v111 )
            {
              ThemeAnimationTransform = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2E2u);
              goto LABEL_53;
            }
            v28 = CDesktopManager::GetTheme(4);
            ThemeTimingFunction = GetThemeTimingFunction(v28, *(unsigned int *)(v5 + 4), v6, (unsigned int)v27, &v109);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v98 = 740;
              goto LABEL_161;
            }
          }
          v29 = DWORD2(v141);
          v30 = v141;
          si128 = 0LL;
          v147 = 0.0;
          v146 = 0LL;
          v145 = 0.0;
          memset(v149, 0, sizeof(v149));
          v121 = 0LL;
          v144 = 0LL;
          memset(v148, 0, sizeof(v148));
          v118 = RoundToNearestInt((float)(DWORD2(v141) + v141) * 0.5);
          v113 = HIDWORD(v141);
          v31 = RoundToNearestInt((float)(HIDWORD(v141) + DWORD1(v141)) * 0.5);
          v32 = HIDWORD(v140);
          v33 = DWORD2(v140);
          v110 = v31;
          if ( v106 )
            goto LABEL_35;
          v34 = 0;
          if ( DWORD2(v140) - (int)v140 >= 0 )
            v34 = DWORD2(v140) - v140;
          v35 = 0;
          if ( v29 - v30 >= 0 )
            v35 = v29 - v30;
          if ( v35 == v34 )
          {
LABEL_35:
            v36 = v140 + v118 - v141;
            if ( v106 )
            {
              v38 = DWORD1(v141);
              v37 = DWORD1(v140);
              goto LABEL_41;
            }
          }
          else
          {
            v56 = RoundToNearestInt((float)(DWORD2(v140) + v140) * 0.5);
            v31 = v110;
            v36 = v56;
          }
          v37 = DWORD1(v140);
          v38 = DWORD1(v141);
          v39 = 0;
          if ( v32 - DWORD1(v140) >= 0 )
            v39 = v32 - DWORD1(v140);
          v40 = 0;
          if ( v113 - DWORD1(v141) >= 0 )
            v40 = v113 - DWORD1(v141);
          if ( v40 != v39 )
          {
            v57 = RoundToNearestInt((float)(v32 + DWORD1(v140)) * 0.5);
            v38 = DWORD1(v141);
            v41 = v57;
            v31 = v110;
            goto LABEL_42;
          }
LABEL_41:
          v41 = v37 + v31 - v38;
LABEL_42:
          v42 = *(_DWORD *)(v5 + 16);
          v43 = *(_DWORD *)v5;
          v110 = v42 & 4;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                v58 = v45 - 254;
                if ( v58 )
                {
                  v59 = v58 - 2;
                  if ( v59 )
                  {
                    v60 = v59 - 1;
                    if ( v60 )
                    {
                      if ( v60 == 1 )
                      {
                        if ( (v42 & 2) != 0 )
                        {
                          v61 = *(float *)(v5 + 32);
                          *(double *)&v146 = v61;
                          v62 = *(float *)(v5 + 36);
                          *((double *)&v146 + 1) = v62;
                          v63 = *(float *)(v5 + 40);
                        }
                        else
                        {
                          v146 = 0LL;
                          v62 = 0.0;
                          v63 = 0.0;
                          v61 = 0.0;
                        }
                        v147 = v63;
                        v64 = *(float *)(v5 + 20);
                        *(double *)&v144 = v64;
                        v65 = *(float *)(v5 + 24);
                        *((double *)&v144 + 1) = v65;
                        v66 = *(float *)(v5 + 28);
                        v145 = v66;
                        if ( v103 )
                        {
                          *(_QWORD *)&v146 = *(_QWORD *)&v61 ^ _xmm;
                          *((_QWORD *)&v146 + 1) = *(_QWORD *)&v62 ^ _xmm;
                          *(_QWORD *)&v147 = *(_QWORD *)&v63 ^ _xmm;
                          *(_QWORD *)&v144 = *(_QWORD *)&v64 ^ _xmm;
                          *((_QWORD *)&v144 + 1) = *(_QWORD *)&v65 ^ _xmm;
                          *(_QWORD *)&v145 = *(_QWORD *)&v66 ^ _xmm;
                        }
                        v67 = (__m128)*(unsigned int *)(v5 + 48);
                        v6 = v111;
                        LODWORD(v9) = v108;
                        v100 = v111;
                        v68 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v129);
                        v138 = *(_DWORD *)(v5 + 52);
                        v69 = v138;
                        *(_QWORD *)(v68 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 44), v67).m128_u64[0];
                        *(_DWORD *)(v68 + 84) = v69;
                        ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                v115,
                                                *((_QWORD *)a2 + 4),
                                                *((unsigned int *)a2 + 4),
                                                v108,
                                                3,
                                                *(_QWORD *)&v24,
                                                *(_QWORD *)&v25,
                                                &v146,
                                                &v144,
                                                3,
                                                v100,
                                                0,
                                                0LL,
                                                0LL,
                                                0);
                        ThemeAnimationTransform = ThemeTimingFunction;
                        if ( ThemeTimingFunction < 0 )
                        {
                          v98 = 1110;
                          goto LABEL_161;
                        }
                      }
                      else
                      {
                        v6 = v111;
                        LODWORD(v9) = v108;
                      }
                    }
                    else
                    {
                      if ( (v42 & 1) != 0 )
                      {
                        v147 = v117;
                        *(double *)&v146 = (double)(v29 - (int)v141);
                        *((double *)&v146 + 1) = (double)(v113 - v38);
                        v145 = v116;
                        *(double *)&v144 = (double)(v33 - (int)v140);
                        *((double *)&v144 + 1) = (double)(v32 - DWORD1(v140));
                      }
                      else
                      {
                        if ( (v42 & 2) != 0 )
                        {
                          *(double *)&v146 = *(float *)(v5 + 32);
                          *((double *)&v146 + 1) = *(float *)(v5 + 36);
                          v147 = *(float *)(v5 + 40);
                        }
                        else
                        {
                          v146 = _xmm;
                          v147 = DOUBLE_1_0;
                        }
                        *(double *)&v144 = *(float *)(v5 + 20);
                        *((double *)&v144 + 1) = *(float *)(v5 + 24);
                        v145 = *(float *)(v5 + 28);
                      }
                      if ( v110 )
                      {
                        v70 = *(_DWORD *)(v5 + 48);
                        LODWORD(v125) = *(_DWORD *)(v5 + 44);
                        v126 = *(_DWORD *)(v5 + 52);
                        HIDWORD(v125) = v70;
                      }
                      else
                      {
                        v126 = 0;
                        v125 = 0x3F0000003F000000LL;
                      }
                      v6 = v111;
                      LODWORD(v9) = v108;
                      v101 = v111;
                      v71 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v129);
                      v72 = v126;
                      *(_QWORD *)(v71 + 64) = v125;
                      *(_DWORD *)(v71 + 72) = v72;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              v115,
                                              *((_QWORD *)a2 + 4),
                                              *((unsigned int *)a2 + 4),
                                              v108,
                                              4,
                                              *(_QWORD *)&v24,
                                              *(_QWORD *)&v25,
                                              &v146,
                                              &v144,
                                              3,
                                              v101,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v98 = 1067;
                        goto LABEL_161;
                      }
                    }
                  }
                  else
                  {
                    v147 = 0.0;
                    v146 = 0LL;
                    if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
                    {
                      v6 = v111;
                      LODWORD(v9) = v108;
                      v73 = *((unsigned int *)a2 + 4);
                      *(double *)&v144 = (double)(v36 - v118);
                      v74 = _mm_cvtsi32_si128(v41 - v31);
                      v75 = *((_QWORD *)a2 + 4);
                      *((_QWORD *)&v144 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v74);
                      v145 = (float)(v116 - v117);
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              v115,
                                              v75,
                                              v73,
                                              v108,
                                              0,
                                              *(_QWORD *)&v24,
                                              *(_QWORD *)&v25,
                                              &v146,
                                              &v144,
                                              3,
                                              v111,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v98 = 961;
                        goto LABEL_161;
                      }
                    }
                    else
                    {
                      v76 = 1;
                      v77 = 0;
                      if ( (*(_DWORD *)(v5 + 16) & 0x1000) != 0 )
                      {
                        v76 = 2;
                        v78 = (double)(((int)v140 + v33 - v29 - (int)v141) / 2);
                      }
                      else
                      {
                        v78 = *(float *)(v5 + 20);
                      }
                      *(double *)&v144 = v78;
                      if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
                      {
                        v76 = 3;
                        v79 = (double)((DWORD1(v140) + v32 - v113 - v38) / 2);
                        v77 = 1;
                      }
                      else
                      {
                        v79 = *(float *)(v5 + 24);
                      }
                      *((double *)&v144 + 1) = v79;
                      if ( (*(_DWORD *)(v5 + 16) & 0x4000) != 0 )
                      {
                        v76 = 4;
                        v80 = v116 - v117;
                        v77 = 2;
                      }
                      else
                      {
                        v80 = *(float *)(v5 + 28);
                      }
                      v6 = v111;
                      LODWORD(v9) = v108;
                      v81 = *((unsigned int *)a2 + 4);
                      v82 = *((_QWORD *)a2 + 4);
                      v145 = v80;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              v115,
                                              v82,
                                              v81,
                                              v108,
                                              v77,
                                              *(_QWORD *)&v24,
                                              *(_QWORD *)&v25,
                                              &v146,
                                              &v144,
                                              3,
                                              v111,
                                              v76,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v98 = 1013;
                        goto LABEL_161;
                      }
                    }
                  }
                }
                else
                {
                  if ( (v42 & 2) != 0 )
                  {
                    v83 = *(float *)(v5 + 28);
                    *(double *)si128.m128i_i64 = v83;
                    v84 = *(float *)(v5 + 32);
                    *(double *)&si128.m128i_i64[1] = v84;
                  }
                  else
                  {
                    si128 = 0LL;
                    v84 = 0.0;
                    v83 = 0.0;
                  }
                  v85 = *(float *)(v5 + 20);
                  *(double *)&v121 = v85;
                  v86 = *(float *)(v5 + 24);
                  *((double *)&v121 + 1) = v86;
                  if ( v103 )
                  {
                    si128.m128i_i64[0] = *(_QWORD *)&v83 ^ _xmm;
                    si128.m128i_i64[1] = *(_QWORD *)&v84 ^ _xmm;
                    *(_QWORD *)&v121 = *(_QWORD *)&v85 ^ _xmm;
                    *((_QWORD *)&v121 + 1) = *(_QWORD *)&v86 ^ _xmm;
                  }
                  v87 = *((_QWORD *)a2 + 5);
                  v88 = (__m128)*(unsigned int *)(v5 + 40);
                  v89 = (__m128)*(unsigned int *)(v5 + 36);
                  v139 = 0;
                  v6 = v111;
                  LODWORD(v9) = v108;
                  v90 = *(_QWORD *)(v87 + 8 * v129);
                  v102 = v111;
                  *(_QWORD *)(v90 + 76) = _mm_unpacklo_ps(v89, v88).m128_u64[0];
                  *(_DWORD *)(v90 + 84) = 0;
                  ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                          v115,
                                          *((_QWORD *)a2 + 4),
                                          *((unsigned int *)a2 + 4),
                                          v108,
                                          3,
                                          *(_QWORD *)&v24,
                                          *(_QWORD *)&v25,
                                          &si128,
                                          &v121,
                                          2,
                                          v102,
                                          0,
                                          0LL,
                                          0LL,
                                          0);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v98 = 931;
                    goto LABEL_161;
                  }
                }
              }
              else
              {
                if ( (v42 & 1) != 0 )
                {
                  v47 = v134;
                  v46 = v124;
                }
                else
                {
                  if ( (v42 & 2) != 0 )
                    v46 = *(float *)(v5 + 24);
                  else
                    v46 = v124;
                  v47 = *(float *)(v5 + 20);
                }
                v6 = v111;
                LODWORD(v9) = v108;
                v48 = *((unsigned int *)a2 + 4);
                v49 = *((_QWORD *)a2 + 4);
                v137[0] = v46;
                v136 = v47;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        v115,
                                        v49,
                                        v48,
                                        v108,
                                        5,
                                        *(_QWORD *)&v24,
                                        *(_QWORD *)&v25,
                                        v137,
                                        &v136,
                                        1,
                                        v111,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v98 = 1132;
                  goto LABEL_161;
                }
              }
            }
            else
            {
              if ( (v42 & 1) != 0 )
              {
                si128 = _mm_load_si128((const __m128i *)&_xmm);
                if ( v29 == (_DWORD)v141 )
                  v91 = FLOAT_1_0;
                else
                  v91 = (float)(v33 - v140) / (float)(v29 - v141);
                *(double *)&v121 = v91;
                if ( v113 == v38 )
                  v92 = FLOAT_1_0;
                else
                  v92 = (float)(v32 - DWORD1(v140)) / (float)(v113 - v38);
                *((double *)&v121 + 1) = v92;
              }
              else
              {
                if ( (v42 & 2) != 0 )
                {
                  *(double *)si128.m128i_i64 = *(float *)(v5 + 28);
                  *(double *)&si128.m128i_i64[1] = *(float *)(v5 + 32);
                }
                else
                {
                  si128 = _mm_load_si128((const __m128i *)&_xmm);
                }
                *(double *)&v121 = *(float *)(v5 + 20);
                *((double *)&v121 + 1) = *(float *)(v5 + 24);
              }
              v128 = 0;
              if ( v110 )
              {
                v53 = *(_DWORD *)(v5 + 40);
                LODWORD(v127) = *(_DWORD *)(v5 + 36);
                HIDWORD(v127) = v53;
              }
              else
              {
                v127 = 0x3F0000003F000000LL;
              }
              v6 = v111;
              LODWORD(v9) = v108;
              v99 = v111;
              v54 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v129);
              v55 = v128;
              *(_QWORD *)(v54 + 64) = v127;
              *(_DWORD *)(v54 + 72) = v55;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      v115,
                                      *((_QWORD *)a2 + 4),
                                      *((unsigned int *)a2 + 4),
                                      v108,
                                      4,
                                      *(_QWORD *)&v24,
                                      *(_QWORD *)&v25,
                                      &si128,
                                      &v121,
                                      2,
                                      v99,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v98 = 893;
                goto LABEL_161;
              }
            }
          }
          else
          {
            if ( (v42 & 1) != 0 )
            {
              si128 = 0LL;
              *(double *)&v121 = (double)(v36 - v118);
              *((double *)&v121 + 1) = (double)(v41 - v31);
            }
            v51 = v133;
            if ( v104 )
            {
              v93 = v131 + *(double *)&si128.m128i_i64[v133];
              v131 = 0.0;
              *(double *)&si128.m128i_i64[v133] = v93;
            }
            if ( v105 )
            {
              v94 = *((double *)&v121 + v51) + v130;
              v130 = *((double *)&v121 + v51);
              *((double *)&v121 + v51) = v94;
            }
            v6 = v111;
            v52 = v115;
            LODWORD(v9) = v108;
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    v115,
                                    *((_QWORD *)a2 + 4),
                                    *((unsigned int *)a2 + 4),
                                    v108,
                                    0,
                                    *(_QWORD *)&v24,
                                    *(_QWORD *)&v25,
                                    &si128,
                                    &v121,
                                    2,
                                    v111,
                                    0,
                                    (unsigned __int64)&v131 & -(__int64)v104,
                                    (unsigned __int64)&v130 & -(__int64)v105,
                                    v51);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v98 = 823;
              goto LABEL_161;
            }
            if ( v106 )
            {
              for ( j = 0LL; j < 4; ++j )
                *((double *)v149 + j) = (double)*((int *)&v142 + j);
              for ( k = 0LL; k < 4; ++k )
                *((double *)v148 + k) = (double)*((int *)&v143 + k);
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      v52,
                                      *((_QWORD *)a2 + 4),
                                      *((unsigned int *)a2 + 4),
                                      v108,
                                      6,
                                      *(_QWORD *)&v24,
                                      *(_QWORD *)&v25,
                                      v149,
                                      v148,
                                      4,
                                      v6,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v98 = 844;
                goto LABEL_161;
              }
            }
          }
          v17 = v107;
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v108 = v9;
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 5) )
        goto LABEL_53;
    }
    v98 = 651;
LABEL_161:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeTimingFunction, v98);
LABEL_53:
    if ( v5 )
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
LABEL_55:
    if ( v6 )
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
  }
LABEL_57:
  if ( v123 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v123->lpVtbl->Release)(v123);
  return ThemeAnimationTransform;
}
