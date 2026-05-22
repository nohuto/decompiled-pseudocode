/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F924
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018E390 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     sqrtf_0 @ 0x18004AC4B (sqrtf_0.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CCC8 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800852A4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180085470 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18018D65C (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18018F3F8 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // bl
  int v5; // xmm0_4
  bool v6; // r15
  const char *v7; // r9
  float v8; // xmm6_4
  char v9; // dl
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  char v12; // r14
  int v13; // ebx
  char v14; // r14
  const char *v15; // r9
  float *v16; // rbx
  int v17; // xmm0_4
  int v18; // xmm1_4
  float v19; // xmm6_4
  const char *v20; // r9
  __m128 v21; // xmm6
  float v22; // xmm1_4
  __m128 v23; // xmm7
  __m128 v24; // xmm6
  const char *v25; // r9
  float v26; // xmm8_4
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  float v30; // xmm10_4
  const char *v31; // r9
  const char *v32; // r9
  float v33; // xmm10_4
  const char *v34; // r9
  unsigned int v35; // xmm0_4
  __int64 v36; // rdx
  BOOL v37; // ecx
  float *v38; // rax
  float v39; // xmm2_4
  const char *v40; // r9
  __m128 v41; // xmm2
  __m128 v42; // xmm1
  __m128 v43; // xmm2
  __m128 v44; // xmm6
  __m128 v45; // xmm1
  __m128 v46; // xmm6
  float v47; // xmm7_4
  float v48; // xmm6_4
  float v49; // xmm6_4
  __m128 v50; // xmm2
  __m128 v51; // xmm1
  __m128 v52; // xmm2
  __m128 v53; // xmm2
  __m128 v54; // xmm1
  volatile signed __int32 *v55; // [rsp+40h] [rbp-C8h]
  float v56; // [rsp+40h] [rbp-C8h]
  std::_Ref_count_base *v57[2]; // [rsp+48h] [rbp-C0h]
  __int128 v58; // [rsp+58h] [rbp-B0h]
  __int128 v59; // [rsp+68h] [rbp-A0h]
  __int128 v60; // [rsp+78h] [rbp-90h]
  __int128 v61; // [rsp+88h] [rbp-80h]
  __int128 v62; // [rsp+98h] [rbp-70h]
  __int128 v63; // [rsp+A8h] [rbp-60h]
  __int128 v64; // [rsp+B8h] [rbp-50h]
  __int128 v65; // [rsp+C8h] [rbp-40h]
  __int128 v66; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v67; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v68; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v69; // [rsp+108h] [rbp+0h] BYREF
  __int128 v70; // [rsp+118h] [rbp+10h] BYREF
  __int128 v71; // [rsp+128h] [rbp+20h] BYREF
  __int128 v72; // [rsp+138h] [rbp+30h] BYREF
  __int128 v73; // [rsp+148h] [rbp+40h] BYREF
  __int128 v74[6]; // [rsp+158h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]
  __int64 v76; // [rsp+1F8h] [rbp+F0h]
  int v77; // [rsp+200h] [rbp+F8h] BYREF
  float v78; // [rsp+204h] [rbp+FCh]
  float v79; // [rsp+208h] [rbp+100h] BYREF
  int v80; // [rsp+20Ch] [rbp+104h]

  v4 = 0;
  *((_DWORD *)this + 1262) = *((_DWORD *)a2 + 179);
  v5 = *((_DWORD *)a2 + 187);
  *((_DWORD *)this + 1272) = *((_DWORD *)a2 + 186);
  *((_DWORD *)this + 1273) = v5;
  *((_DWORD *)this + 1263) = *((_DWORD *)a2 + 182) & *((_DWORD *)a2 + 181);
  if ( (*((_BYTE *)a2 + 728) & 4) == 0 || (v6 = 1, *((_BYTE *)this + 7616)) )
    v6 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 629),
    v6,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 39),
    *((float *)a2 + 40),
    *((float *)a2 + 54));
  if ( *((_BYTE *)a2 + 771) )
  {
    v8 = *((float *)a2 + 190) - *((float *)this + 1264);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v7);
      __debugbreak();
    }
    v57[0] = (std::_Ref_count_base *)L"TriggerSmoothingFactor";
    v57[1] = (std::_Ref_count_base *)22;
    v66 = *(_OWORD *)v57;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v66);
    *((float *)this + 1264) = (float)(COERCE_FLOAT(L"TriggerSmoothingFactor") * v8) + *((float *)this + 1264);
  }
  else
  {
    *((_DWORD *)this + 1264) = 0;
  }
  if ( (*((_BYTE *)this + 5052) & 8) == 0 || (v9 = 1, *((_BYTE *)this + 7616)) )
    v9 = 0;
  *((_BYTE *)this + 7610) = v9;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 624), v9, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 624) + 10LL) )
  {
    v11 = v55;
LABEL_18:
    v12 = 1;
    goto LABEL_19;
  }
  v10 = *((_QWORD *)this + 629);
  v11 = *(volatile signed __int32 **)(v10 + 24);
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = *(volatile signed __int32 **)(v10 + 24);
  }
  v4 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 16) + 10LL) )
    goto LABEL_18;
  v12 = 0;
LABEL_19:
  if ( (v4 & 1) != 0 && v11 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
  if ( v12 )
    MPCSixDofProcessor::ResetRayLength(this);
  v13 = *((_DWORD *)a2 + 182) & 0x40;
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 627), v13 != 0, *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 626), v13 == 0, *((_QWORD *)a2 + 2));
  v14 = 0;
  if ( *((_BYTE *)this + 4644) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 626) + 9LL) )
      *((_BYTE *)this + 4644) = 0;
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 627) + 9LL) )
  {
    *((_BYTE *)this + 4644) = 1;
    v14 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 628), *((_BYTE *)this + 4644), *((_QWORD *)a2 + 2));
  v16 = (float *)((char *)this + 5104);
  if ( v14 )
  {
    v17 = *((_DWORD *)a2 + 186);
    v18 = *((_DWORD *)a2 + 187);
    *((_DWORD *)this + 1268) = v17;
    *((_DWORD *)this + 1269) = v18;
    *((_DWORD *)this + 1274) = v17;
    *((_DWORD *)this + 1275) = v18;
    *((_DWORD *)this + 1160) = 2;
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)this + 639) = 0LL;
    *(_QWORD *)((char *)this + 5164) = 0LL;
  }
  if ( *((_BYTE *)this + 4644) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v15);
      __debugbreak();
    }
    *(_QWORD *)&v58 = L"TouchpadAxesSmoothingFactor";
    *((_QWORD *)&v58 + 1) = 27LL;
    v67 = v58;
    v19 = *((float *)this + 1268);
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v67);
    *((float *)this + 1268) = v19
                            + (float)(COERCE_FLOAT(L"TouchpadAxesSmoothingFactor")
                                    * (float)(*((float *)this + 1272) - v19));
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v20);
      __debugbreak();
    }
    *(_QWORD *)&v59 = L"TouchpadAxesSmoothingFactor";
    *((_QWORD *)&v59 + 1) = 27LL;
    v68 = v59;
    v21 = (__m128)*((unsigned int *)this + 1269);
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v68);
    v21.m128_f32[0] = v21.m128_f32[0]
                    + (float)(COERCE_FLOAT(L"TouchpadAxesSmoothingFactor")
                            * (float)(*((float *)this + 1273) - v21.m128_f32[0]));
    *((_DWORD *)this + 1269) = v21.m128_i32[0];
    v22 = v21.m128_f32[0] - *((float *)this + 1271);
    *v16 = *((float *)this + 1268) - *((float *)this + 1270);
    *((float *)this + 1277) = v22;
    v23 = v21;
    v23.m128_f32[0] = v21.m128_f32[0] - *((float *)this + 1275);
    v24 = (__m128)*((unsigned int *)this + 1268);
    v24.m128_f32[0] = v24.m128_f32[0] - *((float *)this + 1274);
    v26 = sqrtf_0((float)(v23.m128_f32[0] * v23.m128_f32[0]) + (float)(v24.m128_f32[0] * v24.m128_f32[0]));
    if ( v6 )
    {
      v27 = 3;
      *((_DWORD *)this + 1160) = 3;
    }
    else
    {
      v27 = *((_DWORD *)this + 1160);
    }
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 && !*((_BYTE *)this + 4644) )
            *((_DWORD *)this + 1160) = 2;
        }
        else
        {
          v30 = (double)(*(_DWORD *)(*((_QWORD *)this + 627) + 32LL) - *(_DWORD *)(*((_QWORD *)this + 627) + 16LL))
              / (double)(int)qword_1802092F0;
          if ( !MPCConstantManager::s_instance )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v25);
            __debugbreak();
          }
          *(_QWORD *)&v60 = L"TouchpadRailsTimeoutSeconds";
          *((_QWORD *)&v60 + 1) = 27LL;
          v69 = v60;
          MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v69);
          if ( v30 > COERCE_FLOAT(L"TouchpadRailsTimeoutSeconds") )
          {
            if ( !MPCConstantManager::s_instance )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                41LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                v31);
              __debugbreak();
            }
            *(_QWORD *)&v61 = L"TouchpadRailsMinDistanceTraveled";
            *((_QWORD *)&v61 + 1) = 32LL;
            v70 = v61;
            MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v70);
            if ( v26 > COERCE_FLOAT(L"TouchpadRailsMinDistanceTraveled") )
            {
              v33 = sqrtf_0(
                      (float)(*((float *)this + 1274) * *((float *)this + 1274))
                    + (float)(*((float *)this + 1275) * *((float *)this + 1275)));
              if ( !MPCConstantManager::s_instance )
              {
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  41LL,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                  v32);
                __debugbreak();
              }
              *(_QWORD *)&v62 = L"TouchpadRailsMinDistance";
              *((_QWORD *)&v62 + 1) = 24LL;
              v71 = v62;
              MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v71);
              if ( v33 <= COERCE_FLOAT(L"TouchpadRailsMinDistance") )
              {
                if ( !MPCConstantManager::s_instance )
                {
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    41LL,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                    v34);
                  __debugbreak();
                }
                *(_QWORD *)&v64 = L"TouchpadRailsDirectionDegrees";
                *((_QWORD *)&v64 + 1) = 29LL;
                v35 = (unsigned int)L"TouchpadRailsDirectionDegrees";
                v73 = v64;
                MPCConstantManager::GetConstant<float>(
                  (__int64)MPCConstantManager::s_instance,
                  (__int64 *)this + 3,
                  &v73);
                v36 = _mm_unpacklo_ps(v24, v23).m128_u64[0];
              }
              else
              {
                v76 = *((_QWORD *)this + 637);
                if ( !MPCConstantManager::s_instance )
                {
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    41LL,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                    v34);
                  __debugbreak();
                }
                *(_QWORD *)&v63 = L"TouchpadRailsPressDegrees";
                *((_QWORD *)&v63 + 1) = 25LL;
                v35 = (unsigned int)L"TouchpadRailsPressDegrees";
                v72 = v63;
                MPCConstantManager::GetConstant<float>(
                  (__int64)MPCConstantManager::s_instance,
                  (__int64 *)this + 3,
                  &v72);
                v36 = v76;
              }
              v37 = !IsPointInHorizontalQuadrant(*(float *)&v35 * 0.0174532925199433, v36);
              *((_DWORD *)this + 1160) = v37;
              if ( v37 )
              {
                v77 = 0;
                v78 = v26;
              }
              else
              {
                v79 = v26;
                v80 = 0;
              }
              v38 = (float *)&v77;
              if ( !v37 )
                v38 = &v79;
              *(_QWORD *)v16 = *(_QWORD *)v38;
              if ( *((_DWORD *)this + 1160) )
                v24.m128_i32[0] = v23.m128_i32[0];
              if ( v24.m128_f32[0] < 0.0 )
              {
                v39 = *((float *)this + 1277) * -1.0;
                *v16 = *v16 * -1.0;
                *((float *)this + 1277) = v39;
              }
            }
          }
        }
      }
      else
      {
        *v16 = 0.0;
      }
    }
    else
    {
      *((_DWORD *)this + 1277) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 638) = 0LL;
  }
  if ( sqrtf_0((float)(*v16 * *v16) + (float)(*((float *)this + 1277) * *((float *)this + 1277))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 628) + 9LL) )
    {
      v41 = (__m128)*((unsigned __int64 *)this + 639);
      v42 = _mm_mul_ps(v41, v41);
      v42.m128_f32[0] = v42.m128_f32[0] + _mm_shuffle_ps(v42, v42, 85).m128_f32[0];
      v43 = _mm_div_ps(v41, _mm_sqrt_ps(_mm_shuffle_ps(v42, v42, 0)));
      v44 = (__m128)*(unsigned __int64 *)v16;
      v45 = _mm_mul_ps(v44, v44);
      v45.m128_f32[0] = v45.m128_f32[0] + _mm_shuffle_ps(v45, v45, 85).m128_f32[0];
      v46 = _mm_div_ps(v44, _mm_sqrt_ps(_mm_shuffle_ps(v45, v45, 0)));
      v47 = v46.m128_f32[0] - v43.m128_f32[0];
      v48 = _mm_shuffle_ps(v46, v46, 85).m128_f32[0] - _mm_shuffle_ps(v43, v43, 85).m128_f32[0];
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v40);
        __debugbreak();
      }
      *(_QWORD *)&v65 = L"TouchpadDeltaSmoothingFactor";
      *((_QWORD *)&v65 + 1) = 28LL;
      v74[0] = v65;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, v74);
      v49 = (float)(v48 * COERCE_FLOAT(L"TouchpadDeltaSmoothingFactor")) + *((float *)this + 1279);
      *((float *)this + 1278) = (float)(v47 * COERCE_FLOAT(L"TouchpadDeltaSmoothingFactor")) + *((float *)this + 1278);
      *((float *)this + 1279) = v49;
    }
    else
    {
      v50 = (__m128)*(unsigned __int64 *)v16;
      v51 = _mm_mul_ps(v50, v50);
      v51.m128_f32[0] = v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
      v52 = _mm_div_ps(v50, _mm_sqrt_ps(_mm_shuffle_ps(v51, v51, 0)));
      *((_DWORD *)this + 1278) = v52.m128_i32[0];
      *((_DWORD *)this + 1279) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
    }
  }
  v53 = (__m128)*((unsigned int *)this + 1265);
  v53.m128_f32[0] = (float)(v53.m128_f32[0] * *((float *)this + 1285)) + *((float *)this + 1282);
  v54 = (__m128)*((unsigned int *)this + 1265);
  v54.m128_f32[0] = (float)(v54.m128_f32[0] * *((float *)this + 1286)) + *((float *)this + 1283);
  v56 = (float)(*((float *)this + 1265) * *((float *)this + 1287)) + *((float *)this + 1284);
  *((_QWORD *)this + 644) = _mm_unpacklo_ps(v53, v54).m128_u64[0];
  *((float *)this + 1290) = v56;
  *((_QWORD *)this + 635) = *((_QWORD *)this + 634);
}
