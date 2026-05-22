/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E734
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E5D0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x180073398 (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180076A3C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?TicksToSeconds@PerfCounter@@YAM_J@Z @ 0x18007C290 (-TicksToSeconds@PerfCounter@@YAM_J@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CC88 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CCC8 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180085470 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089F78 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$QEAM1@Z @ 0x18018A680 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x18018A8D0 (--$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x18018A914 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x18018B888 (_lambda_73ee74375a7aa9a7d53c1e011ef1d674_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18018CB54 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x18018D780 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18018F558 (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(
        MPCSixDofProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int *v4; // r13
  unsigned int v5; // r15d
  unsigned int *v6; // r12
  char v8; // bl
  unsigned int v10; // eax
  __int64 v11; // r8
  MPCButtonHoldHelper *v12; // rcx
  const char *v13; // r9
  char v14; // dl
  const char *v15; // r9
  unsigned int v16; // eax
  const char *v17; // r9
  float v18; // xmm6_4
  __m128 v19; // xmm7
  __m128 v20; // xmm8
  float v21; // xmm6_4
  const char *v22; // r9
  float v23; // xmm11_4
  float v24; // xmm12_4
  float v25; // xmm9_4
  __int64 v26; // rdx
  char v27; // r8
  const char *v28; // r9
  float v29; // xmm0_4
  float v30; // xmm4_4
  float v31; // eax
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // eax
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  __int64 v39; // rax
  const char *v40; // r9
  float v41; // xmm6_4
  const char *v42; // r9
  const char *v43; // r9
  const char *v44; // r9
  bool v45; // zf
  char v46; // al
  char v47; // al
  char v48; // al
  struct BamoMPCConstantManagerClientPrincipal *v49; // rcx
  unsigned int v50; // ebx
  char v51; // al
  __int64 v52; // rax
  _BYTE *v53; // rdx
  unsigned int v54; // eax
  char v55; // bl
  MPCHolographicInputManager *Instance; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  const char *v59; // r9
  char IsExclusiveAppFocused; // al
  PerfCounter *v61; // rcx
  float v62; // xmm0_4
  unsigned int *v63; // rax
  _BYTE *v64; // rbx
  MPCHolographicInputManager *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  const char *v68; // r9
  char v69; // al
  PerfCounter *v70; // rcx
  float v71; // xmm0_4
  unsigned int *v72; // rax
  __int64 v73; // r13
  unsigned int *v74; // rdi
  unsigned __int64 v75; // rbx
  MPCHolographicInputManager *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  const char *v79; // r9
  char v80; // al
  PerfCounter *v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  ISMTracing *v84; // rcx
  int v85; // eax
  int v86; // eax
  float v87; // eax
  __int128 v88; // [rsp+B8h] [rbp-80h] BYREF
  float v89; // [rsp+C8h] [rbp-70h] BYREF
  float v90; // [rsp+CCh] [rbp-6Ch] BYREF
  float v91; // [rsp+D0h] [rbp-68h] BYREF
  float v92; // [rsp+D4h] [rbp-64h] BYREF
  float v93; // [rsp+D8h] [rbp-60h] BYREF
  float v94; // [rsp+E0h] [rbp-58h] BYREF
  float v95; // [rsp+E4h] [rbp-54h] BYREF
  float v96; // [rsp+E8h] [rbp-50h] BYREF
  __int32 v97; // [rsp+F0h] [rbp-48h] BYREF
  __int32 v98; // [rsp+F4h] [rbp-44h] BYREF
  float v99; // [rsp+F8h] [rbp-40h] BYREF
  unsigned __int64 v100; // [rsp+100h] [rbp-38h]
  float v101; // [rsp+108h] [rbp-30h]
  _QWORD v102[22]; // [rsp+110h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+C8h]
  unsigned int v104; // [rsp+208h] [rbp+D0h] BYREF
  unsigned int v105; // [rsp+210h] [rbp+D8h] BYREF
  unsigned int v106; // [rsp+218h] [rbp+E0h] BYREF
  char v107; // [rsp+220h] [rbp+E8h] BYREF

  v4 = (unsigned int *)((char *)this + 5172);
  v5 = *((_DWORD *)this + 1293);
  v6 = (unsigned int *)((char *)a2 + 728);
  v8 = *((_BYTE *)a2 + 728) & 1;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  *((_QWORD *)&v88 + 1) = 33LL;
  *(_QWORD *)&v88 = L"HomeCancelExceedThresholdMaxCount";
  v10 = MPCConstantManager::GetConstant<unsigned long>(
          (__int64)MPCConstantManager::s_instance,
          (__int64 *)this + 3,
          &v88);
  v11 = *((_QWORD *)a2 + 2);
  v12 = (MPCButtonHoldHelper *)*((_QWORD *)this + 623);
  LOBYTE(v105) = v5 >= v10;
  MPCButtonHoldHelper::UpdateState(v12, v8, v11);
  v14 = *(_BYTE *)(*((_QWORD *)this + 623) + 8LL);
  if ( !v14 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 622) + 8LL) )
    {
      if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v13)
        || (v14 = 0, *(_BYTE *)(*((_QWORD *)this + 627) + 8LL)) )
      {
        v14 = 1;
      }
    }
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 622), v14, *((_QWORD *)a2 + 2));
  v104 = *v4;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
    __debugbreak();
  }
  *((_QWORD *)&v88 + 1) = 33LL;
  *(_QWORD *)&v88 = L"HomeCancelExceedThresholdMaxCount";
  v16 = MPCConstantManager::GetConstant<unsigned long>(
          (__int64)MPCConstantManager::s_instance,
          (__int64 *)this + 3,
          &v88);
  LOBYTE(v104) = v104 >= v16;
  v100 = 0LL;
  v101 = 0.0;
  v97 = 0;
  v98 = 0;
  v99 = 0.0;
  if ( *((_BYTE *)this + 7609) )
  {
    v19 = (__m128)*((unsigned int *)a2 + 30);
    v20 = (__m128)*((unsigned int *)a2 + 31);
    v18 = *((float *)a2 + 32);
    v100 = __PAIR64__(v20.m128_u32[0], v19.m128_u32[0]);
    v101 = v18;
    v19.m128_f32[0] = v19.m128_f32[0] - *((float *)this + 1306);
    v20.m128_f32[0] = v20.m128_f32[0] - *((float *)this + 1307);
    v21 = v18 - *((float *)this + 1308);
    v97 = v19.m128_i32[0];
    v98 = v20.m128_i32[0];
    v99 = v21;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v17);
      __debugbreak();
    }
    *((_QWORD *)&v88 + 1) = 18LL;
    *(_QWORD *)&v88 = L"HomeDistanceWeight";
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v88);
    v23 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1309);
    v24 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1310);
    v25 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1311);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v22);
      __debugbreak();
    }
    *((_QWORD *)&v88 + 1) = 18LL;
    *(_QWORD *)&v88 = L"HomeDistanceWeight";
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v88);
    v19.m128_f32[0] = (float)(v19.m128_f32[0] * COERCE_FLOAT(L"HomeDistanceWeight")) + v23;
    v20.m128_f32[0] = (float)(v20.m128_f32[0] * COERCE_FLOAT(L"HomeDistanceWeight")) + v24;
    *(_QWORD *)((char *)this + 5236) = _mm_unpacklo_ps(v19, v20).m128_u64[0];
    *((float *)&v88 + 2) = (float)(v21 * COERCE_FLOAT(L"HomeDistanceWeight")) + v25;
    *((_DWORD *)this + 1311) = DWORD2(v88);
  }
  if ( v8 || *(_BYTE *)(*((_QWORD *)this + 623) + 12LL) )
  {
    v29 = PerfCounter::TicksToSeconds((PerfCounter *)(*((_QWORD *)a2 + 2) - *((_QWORD *)this + 648)));
    v91 = 0.0;
    v30 = v29;
    v92 = 0.0;
    v93 = 0.0;
    v94 = 0.0;
    v95 = 0.0;
    v96 = 0.0;
    if ( v29 > 0.0 )
    {
      if ( *((_BYTE *)a2 + 888) != v27 )
      {
        v31 = *((float *)a2 + 215);
        *(_QWORD *)&v88 = *(_QWORD *)((char *)a2 + 852);
        v32 = *(float *)&v88 - *((float *)this + 1300);
        v33 = *((float *)&v88 + 1) - *((float *)this + 1301);
        *((float *)&v88 + 2) = v31;
        v34 = (float)(v31 - *((float *)this + 1302)) * (float)(1.0 / v29);
        v91 = v32 * (float)(1.0 / v30);
        v92 = v33 * (float)(1.0 / v30);
        v93 = v34;
      }
      if ( *((_BYTE *)a2 + 889) != v27 )
      {
        v35 = *((float *)a2 + 218);
        *(_QWORD *)&v88 = *((_QWORD *)a2 + 108);
        v36 = *(float *)&v88 - *((float *)this + 1303);
        v37 = *((float *)&v88 + 1) - *((float *)this + 1304);
        *((float *)&v88 + 2) = v35;
        v38 = (float)(v35 - *((float *)this + 1305)) * (float)(1.0 / v30);
        v94 = v36 * (float)(1.0 / v30);
        v95 = v37 * (float)(1.0 / v30);
        v96 = v38;
      }
    }
    v102[0] = (char *)a2 + 788;
    v102[2] = &v94;
    v102[3] = &v91;
    v39 = *((_QWORD *)this + 623);
    v102[1] = this;
    if ( *(_BYTE *)(v39 + 10) != v27 )
    {
      v41 = PerfCounter::TicksToSeconds((PerfCounter *)(v26 - *((_QWORD *)this + 649)));
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v40);
        __debugbreak();
      }
      *((_QWORD *)&v88 + 1) = 31LL;
      *(_QWORD *)&v88 = L"HomeAllowTimeBetweenClicksInSec";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v88);
      if ( COERCE_FLOAT(L"HomeAllowTimeBetweenClicksInSec") <= v41 )
        goto LABEL_25;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v42);
        __debugbreak();
      }
      *((_QWORD *)&v88 + 1) = 32LL;
      *(_QWORD *)&v88 = L"HomeSecondClickAngularMultiplier";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v88);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v43);
        __debugbreak();
      }
      *((_QWORD *)&v88 + 1) = 31LL;
      *(_QWORD *)&v88 = L"HomeSecondClickLinearMultiplier";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v88);
      v45 = lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator()(
              v102,
              COERCE_FLOAT(L"HomeSecondClickLinearMultiplier"),
              COERCE_FLOAT(L"HomeSecondClickAngularMultiplier"),
              v44) == 0;
      v46 = 1;
      if ( !v45 )
LABEL_25:
        v46 = 0;
      *((_BYTE *)this + 5176) = v46;
      *((_QWORD *)this + 649) = *((_QWORD *)a2 + 2);
      v47 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, (MPCSixDofProcessor *)((char *)this + 2504), 1, v42);
      v27 = 0;
      if ( v47 || (v48 = 1, (*((_BYTE *)this + 3232) & 0x40) != 0) )
        v48 = 0;
      *((_BYTE *)this + 7616) = v48;
    }
    if ( *((_BYTE *)this + 5176) == v27 && lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator()(v102, 1.0, 1.0, v28) )
    {
      v49 = MPCConstantManager::s_instance;
      v50 = *v4 + 1;
      *v4 = v50;
      if ( !v49 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v28);
        JUMPOUT(0x18018F326LL);
      }
      *((_QWORD *)&v88 + 1) = 33LL;
      *(_QWORD *)&v88 = L"HomeCancelExceedThresholdMaxCount";
      LOBYTE(v104) = v50 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                            (__int64)v49,
                                            (__int64 *)this + 3,
                                            &v88);
    }
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1, v28)
      || (v51 = 0, *(_BYTE *)(*((_QWORD *)this + 627) + 8LL)) )
    {
      v51 = 1;
    }
    *((_BYTE *)this + 5177) |= v51;
    v106 = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      &v106,
      (bool *)&v104,
      v4,
      (float *)a2 + 216,
      (float *)a2 + 217,
      (float *)a2 + 218,
      (float *)a2 + 213,
      (float *)a2 + 214,
      (float *)a2 + 215,
      &v94,
      &v95,
      &v96,
      &v91,
      &v92,
      &v93,
      (float *)&v97,
      (float *)&v98,
      &v99,
      (float *)this + 1309,
      (float *)this + 1310,
      (float *)this + 1311,
      v6);
  }
  v52 = *((_QWORD *)this + 622);
  if ( *(_BYTE *)(v52 + 8) || *(_BYTE *)(v52 + 12) )
  {
    v17 = (char *)this + 7624;
    v53 = (_BYTE *)*((_QWORD *)this + 954);
    if ( ((unsigned __int64)&v53[-*((_QWORD *)this + 953)] & 0xFFFFFFFFFFFFFFFCuLL) == 0
      || *(_DWORD *)(*((_QWORD *)this + 954) - 4LL) != *v6 )
    {
      if ( !*((_BYTE *)this + 7616) )
      {
LABEL_55:
        v55 = v104;
        goto LABEL_56;
      }
      v54 = *v6;
      v106 = *v6;
      if ( *((_BYTE **)this + 955) == v53 )
      {
        std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
          (const void **)this + 953,
          v53,
          &v106);
      }
      else
      {
        *(_DWORD *)v53 = v54;
        *((_QWORD *)this + 954) += 4LL;
      }
    }
  }
  if ( !*((_BYTE *)this + 7616) )
    goto LABEL_55;
  v55 = v104;
  if ( (_BYTE)v104 )
  {
    if ( !(_BYTE)v105 && (*(_BYTE *)v6 & 0x3E) != 0 )
    {
      if ( *((_DWORD *)a2 + 17) == 3 )
      {
        *((_DWORD *)a2 + 17) = 2;
        Instance = MPCHolographicInputManager::GetInstance();
        IsExclusiveAppFocused = MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v57, v58, v59);
        v61 = (PerfCounter *)(*((_QWORD *)a2 + 2) - *((_QWORD *)this + 649));
        LOBYTE(v105) = IsExclusiveAppFocused;
        v62 = PerfCounter::TicksToSeconds(v61);
        v63 = (unsigned int *)*((_QWORD *)this + 6);
        v89 = v62;
        LOBYTE(v106) = 1;
        v107 = 1;
        v90 = *(float *)v63;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int *)&v90,
          (bool *)&v107,
          (bool *)&v106,
          (bool *)this + 5177,
          v6,
          (bool *)&v104,
          &v89,
          (bool *)&v105);
      }
      else if ( *((_DWORD *)a2 + 17) == 4 )
      {
        *((_DWORD *)a2 + 17) = 6;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 17) = 6;
    *((_DWORD *)a2 + 190) = 0;
    *v6 = 0;
    *((_DWORD *)a2 + 183) = 0;
    *((_BYTE *)a2 + 704) = 0;
  }
LABEL_56:
  if ( !*(_BYTE *)(*((_QWORD *)this + 622) + 12LL) )
    goto LABEL_70;
  if ( v55 || !*((_BYTE *)this + 7616) )
    goto LABEL_67;
  v64 = (char *)this + 5177;
  if ( *((_BYTE *)this + 5177) )
  {
    v73 = 0LL;
    v74 = (unsigned int *)*((_QWORD *)this + 953);
    v75 = (unsigned __int64)(*((_QWORD *)this + 954) - (_QWORD)v74 + 3LL) >> 2;
    if ( (unsigned __int64)v74 > *((_QWORD *)this + 954) )
      v75 = 0LL;
    if ( v75 )
    {
      do
      {
        MPCManager::OnButtonsChangedDuringHomeGesture(
          MPCManager::s_instance,
          **((_DWORD **)this + 6),
          0x2000u,
          *v74,
          *((_QWORD *)a2 + 2),
          *((_DWORD *)a2 + 179));
        v105 = **((_DWORD **)this + 6);
        ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned int const &>(&v105, v6);
        ++v73;
        ++v74;
      }
      while ( v73 != v75 );
    }
    v4 = (unsigned int *)((char *)this + 5172);
LABEL_67:
    v76 = MPCHolographicInputManager::GetInstance();
    v80 = MPCHolographicInputManager::IsExclusiveAppFocused(v76, v77, v78, v79);
    v81 = (PerfCounter *)(*((_QWORD *)a2 + 2) - *((_QWORD *)this + 649));
    LOBYTE(v105) = v80;
    v90 = PerfCounter::TicksToSeconds(v81);
    LOBYTE(v106) = 0;
    v64 = (char *)this + 5177;
    v107 = 0;
    v89 = **((float **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int *)&v89,
      (bool *)&v107,
      (bool *)&v106,
      (bool *)this + 5177,
      v6,
      (bool *)&v104,
      &v90,
      (bool *)&v105);
    if ( ISMTracing::IsEnabled(v82) )
    {
      wil::details::static_lazy<ISMTracing>::get(v83, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v84);
    }
    goto LABEL_69;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 623) + 12LL) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      440LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      v17);
    __debugbreak();
  }
  MPCSixDofProcessor::SendHomeEvent(this, a2);
  v65 = MPCHolographicInputManager::GetInstance();
  v69 = MPCHolographicInputManager::IsExclusiveAppFocused(v65, v66, v67, v68);
  v70 = (PerfCounter *)(*((_QWORD *)a2 + 2) - *((_QWORD *)this + 649));
  LOBYTE(v105) = v69;
  v71 = PerfCounter::TicksToSeconds(v70);
  v72 = (unsigned int *)*((_QWORD *)this + 6);
  v90 = v71;
  LOBYTE(v106) = 0;
  v107 = 1;
  v89 = *(float *)v72;
  ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,unsigned int const &,bool &,float,bool>(
    (unsigned int *)&v89,
    (bool *)&v107,
    (bool *)&v106,
    (bool *)this + 5177,
    v6,
    (bool *)&v104,
    &v90,
    (bool *)&v105);
  *v6 |= 1u;
LABEL_69:
  DWORD2(v88) = 0;
  *v4 = 0;
  *((_BYTE *)this + 5176) = 0;
  *v64 = 0;
  *(_QWORD *)((char *)this + 5236) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1311) = 0;
  *((_BYTE *)this + 7616) = 0;
  *((_QWORD *)this + 954) = *((_QWORD *)this + 953);
LABEL_70:
  if ( *((_BYTE *)a2 + 888) )
  {
    v85 = *((_DWORD *)a2 + 215);
    *((_QWORD *)this + 650) = *(_QWORD *)((char *)a2 + 852);
    *((_DWORD *)this + 1302) = v85;
  }
  if ( *((_BYTE *)a2 + 889) )
  {
    v86 = *((_DWORD *)a2 + 218);
    *(_QWORD *)((char *)this + 5212) = *((_QWORD *)a2 + 108);
    *((_DWORD *)this + 1305) = v86;
  }
  if ( *((_BYTE *)this + 7609) )
  {
    v87 = v101;
    *((_QWORD *)this + 653) = v100;
    *((float *)this + 1308) = v87;
  }
  *((_QWORD *)this + 648) = *((_QWORD *)a2 + 2);
}
