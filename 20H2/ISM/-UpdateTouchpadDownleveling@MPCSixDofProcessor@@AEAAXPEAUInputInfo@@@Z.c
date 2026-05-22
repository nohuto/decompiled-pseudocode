/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190628
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018DE40 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     sqrtf_0 @ 0x18004A60B (sqrtf_0.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006ACCC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B044 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B38C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B3CC (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B6B4 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B77C (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007A8C0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C738 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C778 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007C7B8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18007CDDC (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D244 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180084F20 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18018C8C4 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  __int64 *v4; // r13
  MPCButtonHoldHelper *v5; // r15
  __int64 v6; // r12
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v8; // rax
  char v9; // dl
  const char *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // r15
  struct MPCGestureHandlerManager *v14; // rbx
  __int64 *v15; // rax
  bool IsWorkspaceScrolling; // al
  char v17; // bl
  __int64 v18; // rax
  volatile signed __int32 *v19; // rcx
  char v20; // bl
  __int64 v21; // rcx
  struct MPCGestureHandlerManager *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // ebx
  const char *v26; // r9
  __int64 v27; // rax
  volatile signed __int32 *v28; // rcx
  char v29; // r15
  float v30; // xmm6_4
  const char *v31; // r9
  float v32; // xmm6_4
  const char *v33; // r9
  const char *v34; // r9
  float v35; // xmm2_4
  float v36; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v37; // r15
  float v38; // xmm0_4
  __int64 v39; // rcx
  struct MPCGestureHandlerManager *v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rcx
  const char *v43; // r9
  struct MPCGestureHandlerManager *v44; // rbx
  _QWORD *v45; // rax
  const char *v46; // r9
  float v47; // xmm2_4
  float v48; // xmm0_4
  struct BamoMPCConstantManagerClientPrincipal *v49; // rbx
  float v50; // xmm0_4
  const char *v51; // r9
  unsigned int v52; // ebx
  struct MPCGestureHandlerManager *v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  struct MPCGestureHandlerManager *v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rcx
  struct MPCGestureHandlerManager *v59; // rbx
  _QWORD *v60; // rax
  const char *v61; // r9
  float v62; // xmm6_4
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 *v65; // rbx
  _QWORD *v66; // rax
  const char *v67; // r9
  __int64 v68; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v69; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, __int64); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v77[3]; // [rsp+70h] [rbp-98h]
  __int128 v78; // [rsp+88h] [rbp-80h]
  __int128 v79; // [rsp+98h] [rbp-70h]
  __int128 v80; // [rsp+A8h] [rbp-60h]
  __int128 v81; // [rsp+B8h] [rbp-50h]
  __int128 v82; // [rsp+C8h] [rbp-40h]
  __int128 v83; // [rsp+D8h] [rbp-30h]
  __int128 v84; // [rsp+E8h] [rbp-20h]
  __int128 v85; // [rsp+F8h] [rbp-10h]
  __int128 v86; // [rsp+108h] [rbp+0h]
  __int128 v87; // [rsp+118h] [rbp+10h]
  __int64 v88; // [rsp+130h] [rbp+28h]
  volatile signed __int32 *v89; // [rsp+138h] [rbp+30h]
  __int128 v90; // [rsp+148h] [rbp+40h] BYREF
  __int128 v91; // [rsp+158h] [rbp+50h] BYREF
  __int128 v92; // [rsp+168h] [rbp+60h] BYREF
  __int128 v93; // [rsp+178h] [rbp+70h] BYREF
  __int128 v94; // [rsp+188h] [rbp+80h] BYREF
  __int128 v95; // [rsp+198h] [rbp+90h] BYREF
  __int128 v96; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v97; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v98; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v99; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v100; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]
  std::_Ref_count_base *v102; // [rsp+258h] [rbp+150h]
  float v103; // [rsp+268h] [rbp+160h] BYREF
  __int64 v104; // [rsp+270h] [rbp+168h] BYREF

  LOBYTE(v102) = 0;
  v4 = (__int64 *)((char *)this + 5000);
  v5 = (MPCButtonHoldHelper *)*((_QWORD *)this + 625);
  v6 = *((_QWORD *)a2 + 2);
  Instance = MPCGestureHandlerManager::GetInstance((__int64)this);
  v8 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v104,
         (__int64)this + 24);
  v9 = !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)Instance, v8) || *((_BYTE *)this + 4634);
  MPCButtonHoldHelper::UpdateState(v5, v9, v6);
  v11 = *((unsigned int *)a2 + 39);
  *((_DWORD *)a2 + 168) = v11;
  *((_DWORD *)a2 + 169) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a2 + 164) = 0;
  v12 = *((_QWORD *)this + 629);
  v13 = *(volatile signed __int32 **)(v12 + 24);
  if ( v13 )
  {
    _InterlockedIncrement(v13 + 2);
    v13 = *(volatile signed __int32 **)(v12 + 24);
  }
  v88 = *(_QWORD *)(v12 + 16);
  v89 = v13;
  if ( !*(_BYTE *)(v88 + 8)
    || (v14 = MPCGestureHandlerManager::GetInstance(v11),
        v15 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v68,
                (__int64)this + 24),
        IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v14, v15),
        v17 = 1,
        IsWorkspaceScrolling) )
  {
    v17 = 0;
  }
  if ( v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( v17 )
  {
    v18 = *((_QWORD *)this + 629);
    v19 = *(volatile signed __int32 **)(v18 + 24);
    if ( v19 )
    {
      _InterlockedIncrement(v19 + 2);
      v19 = *(volatile signed __int32 **)(v18 + 24);
    }
    v20 = *(_BYTE *)(*(_QWORD *)(v18 + 16) + 10LL);
    if ( v19 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v19);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v10);
      __debugbreak();
    }
    *(_QWORD *)&v78 = L"IsTouchpadClickingEnabled";
    *((_QWORD *)&v78 + 1) = 25LL;
    v90 = v78;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64 *)this + 3,
                            &v90)
      && (v20 || *(_BYTE *)(*((_QWORD *)this + 629) + 13LL)) )
    {
      v22 = MPCGestureHandlerManager::GetInstance(v21);
      v23 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v69,
              (__int64)this + 24);
      v24 = MPCGestureHandlerManager::IsInjecting((__int64)v22, v23) != 0 ? 7 : 1;
      *((_DWORD *)a2 + 164) = v24;
LABEL_23:
      *((_BYTE *)this + 4634) = 1;
LABEL_80:
      *(_OWORD *)((char *)a2 + 680) = *(_OWORD *)((char *)a2 + 164);
      *((_DWORD *)a2 + 174) = *((_DWORD *)a2 + 46);
      v65 = (__int64 *)MPCGestureHandlerManager::GetInstance(v24);
      v66 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v76,
              (__int64)this + 24);
      MPCGestureHandlerManager::DownLevelTo2D(v65, (__int64)a2, v66, v67);
      *((_BYTE *)this + 4645) = 1;
      return;
    }
    return;
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
    __debugbreak();
  }
  *(_QWORD *)&v79 = L"IsTouchpadTouchScrollingEnabled";
  *((_QWORD *)&v79 + 1) = 31LL;
  v91 = v79;
  v25 = 0;
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           (__int64)MPCConstantManager::s_instance,
                           (__int64 *)this + 3,
                           &v91)
    || !*((_BYTE *)this + 4644)
    || *((_DWORD *)this + 1160) == 2 )
  {
    v28 = (volatile signed __int32 *)v102;
LABEL_34:
    v29 = 0;
    goto LABEL_35;
  }
  v27 = *((_QWORD *)this + 629);
  v28 = *(volatile signed __int32 **)(v27 + 24);
  if ( v28 )
  {
    _InterlockedIncrement(v28 + 2);
    v28 = *(volatile signed __int32 **)(v27 + 24);
  }
  v25 = 2;
  if ( *(_BYTE *)(*(_QWORD *)(v27 + 16) + 12LL) )
    goto LABEL_34;
  v29 = 1;
LABEL_35:
  if ( v25 && v28 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v28);
  if ( v29 )
  {
    v30 = *((float *)this + 1291) + *((float *)this + 1276);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v26);
      __debugbreak();
    }
    *(_QWORD *)&v80 = L"TouchpadScrollTouchSpeedFactor";
    *((_QWORD *)&v80 + 1) = 30LL;
    v92 = v80;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v92);
    *((float *)a2 + 165) = COERCE_FLOAT(L"TouchpadScrollTouchSpeedFactor") * v30;
    v32 = *((float *)this + 1292) + *((float *)this + 1277);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v31);
      __debugbreak();
    }
    *(_QWORD *)&v81 = L"TouchpadScrollTouchSpeedFactor";
    *((_QWORD *)&v81 + 1) = 30LL;
    v93 = v81;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v93);
    *((float *)a2 + 166) = COERCE_FLOAT(L"TouchpadScrollTouchSpeedFactor") * v32;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v33);
      __debugbreak();
    }
    *(_QWORD *)&v82 = L"TouchpadScrollInvert";
    *((_QWORD *)&v82 + 1) = 20LL;
    v94 = v82;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64 *)this + 3,
                            &v94) )
      *((float *)a2 + 166) = *((float *)a2 + 166) * -1.0;
    v35 = *((float *)this + 1291) + *((float *)this + 1276);
    v36 = *((float *)this + 1292) + *((float *)this + 1277);
    v37 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v34);
      __debugbreak();
    }
    *(_QWORD *)&v83 = L"TouchpadScrollTouchVelocityMin";
    *((_QWORD *)&v83 + 1) = 30LL;
    v95 = v83;
    sqrtf_0((float)(v36 * v36) + (float)(v35 * v35));
    MPCConstantManager::GetConstant<float>((__int64)v37, (__int64 *)this + 3, &v95);
    v38 = *((float *)this + 1277) + *((float *)this + 1292);
    *((float *)this + 1291) = *((float *)this + 1276) + *((float *)this + 1291);
    *((float *)this + 1292) = v38;
    v40 = MPCGestureHandlerManager::GetInstance(v39);
    v41 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v70,
            (__int64)this + 24);
    if ( MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v40, v41) )
    {
      *(_QWORD *)((char *)a2 + 660) = 0LL;
      *((_BYTE *)this + 4634) = 1;
      LOBYTE(v102) = 1;
    }
    *((_DWORD *)a2 + 164) = 5;
    *((_DWORD *)this + 1159) = 0;
    goto LABEL_79;
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v26);
    __debugbreak();
  }
  *(_QWORD *)&v84 = L"IsTouchpadTouchScrollingEnabled";
  *((_QWORD *)&v84 + 1) = 31LL;
  v96 = v84;
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           (__int64)MPCConstantManager::s_instance,
                           (__int64 *)this + 3,
                           &v96) )
    goto LABEL_72;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v43);
    __debugbreak();
  }
  *(_QWORD *)&v85 = L"IsTouchpadTouchScrollingStopEnabled";
  *((_QWORD *)&v85 + 1) = 35LL;
  v97 = v85;
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           (__int64)MPCConstantManager::s_instance,
                           (__int64 *)this + 3,
                           &v97)
    || *((_BYTE *)this + 4634)
    || !*((_BYTE *)this + 4644)
    || !*(_BYTE *)(*v4 + 8)
    || *(_BYTE *)(*v4 + 9)
    || (v44 = MPCGestureHandlerManager::GetInstance(v42),
        v45 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v71,
                (__int64)this + 24),
        MPCGestureHandlerManager::IsInjecting((__int64)v44, v45)) )
  {
LABEL_72:
    v53 = MPCGestureHandlerManager::GetInstance(v42);
    v54 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v72,
            (__int64)this + 24);
    if ( !MPCGestureHandlerManager::IsInjecting((__int64)v53, v54) && !*((_BYTE *)this + 4645) )
      return;
    v56 = MPCGestureHandlerManager::GetInstance(v55);
    v57 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v73,
            (__int64)this + 24);
    LOBYTE(v56) = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v56, v57);
    MPCSixDofProcessor::EndGesture(this);
    if ( !(_BYTE)v56 )
      return;
    v59 = MPCGestureHandlerManager::GetInstance(v58);
    v60 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v74,
            (__int64)this + 24);
    LODWORD(v62) = MPCGestureHandlerManager::GetLastScrollVelocityAvg((__int64)v59, v60).m128_u32[0] & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v61);
      __debugbreak();
    }
    v77[1] = L"TouchpadNotScrollingMultiplier";
    v77[2] = 30LL;
    v100 = *(_OWORD *)&v77[1];
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64 *)this + 3, &v100);
    v103 = COERCE_FLOAT(L"TouchpadNotScrollingMultiplier") * v62;
    v63 = std::make_unique<MPCButtonHoldHelper,float,0>(&v75, &v103);
    std::unique_ptr<MPCButtonHoldHelper>::operator=(v4, v63);
    if ( !v75 )
      return;
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v64, v75);
LABEL_79:
    if ( !(_BYTE)v102 )
      return;
    goto LABEL_80;
  }
  ++*((_DWORD *)this + 1159);
  v47 = *((float *)this + 1268) - *((float *)this + 1274);
  v48 = *((float *)this + 1269) - *((float *)this + 1275);
  v49 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v46);
    __debugbreak();
  }
  *(_QWORD *)&v86 = L"TouchpadStopMaxDelta";
  *((_QWORD *)&v86 + 1) = 20LL;
  v98 = v86;
  v50 = sqrtf_0((float)(v48 * v48) + (float)(v47 * v47));
  MPCConstantManager::GetConstant<float>((__int64)v49, (__int64 *)this + 3, &v98);
  if ( (float)(int)v50 <= v50 )
  {
    v52 = *((_DWORD *)this + 1159);
  }
  else
  {
    *((_DWORD *)this + 1159) = 0;
    v52 = 0;
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v51);
    __debugbreak();
  }
  *(_QWORD *)&v87 = L"TouchpadNumFramesStopScroll";
  *((_QWORD *)&v87 + 1) = 27LL;
  v99 = v87;
  if ( v52 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                              (__int64)MPCConstantManager::s_instance,
                              (__int64 *)this + 3,
                              &v99) )
  {
    *((_DWORD *)a2 + 164) = 1;
    goto LABEL_23;
  }
}
