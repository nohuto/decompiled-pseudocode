/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180196460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800734DC (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079F20 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x180086618 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ?XMQuaternionMultiply@DirectX@@YQ?AT__m128@@T2@0@Z @ 0x1800869FC (-XMQuaternionMultiply@DirectX@@YQ-AT__m128@@T2@0@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180086BD4 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7238 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801935E8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAJ1AEAH11AEAM3@Z @ 0x180194BA8 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTrac.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x180195A7C (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x180195C7C (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180197294 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x180197420 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  float v9; // xmm2_4
  unsigned int v10; // xmm1_4
  float v11; // xmm0_4
  __m128 v12; // xmm6
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm6
  unsigned __int32 v16; // xmm8_4
  unsigned __int32 v17; // xmm9_4
  float YawAngleBetweenTwoVectors; // xmm0_4
  float v19; // xmm7_4
  const char *v20; // r9
  float v21; // xmm6_4
  const char *v22; // r9
  __int64 v23; // rdx
  const char *v24; // r9
  float v25; // xmm6_4
  const char *v26; // r9
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm7_4
  union __m128 *v30; // rdx
  DirectX *v31; // rcx
  union __m128 *v32; // r8
  float *v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, _QWORD, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int128 v41; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int32 v44; // [rsp+60h] [rbp-A8h]
  float v45; // [rsp+68h] [rbp-A0h] BYREF
  float v46; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h] BYREF
  union __m128 v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  int v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-58h]
  __int128 v54; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v43 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)a2 + 164);
  v44 = *((_DWORD *)a2 + 43);
  v48 = 0LL;
  v6 = *(_QWORD *)(this + 4616);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 40LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v48);
  v8 = v7(v6, &v48);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      567LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v8);
  v9 = *((float *)a2 + 59);
  if ( v9 != *((float *)a2 + 38)
    || *((float *)a2 + 60) != *((float *)a2 + 39)
    || *((float *)a2 + 61) != *((float *)a2 + 40) )
  {
    *((_QWORD *)&v41 + 1) = *((_QWORD *)a2 + 19);
    LODWORD(v42) = *((_DWORD *)a2 + 40);
    *(float *)&v10 = *((float *)a2 + 61) - *(float *)&v42;
    v11 = *((float *)a2 + 60) - *((float *)&v41 + 3);
    *((float *)&v41 + 2) = v9 - *((float *)&v41 + 2);
    *((float *)&v41 + 3) = v11;
    LODWORD(v42) = v10;
    v12 = _mm_movelh_ps((__m128)*((unsigned __int64 *)&v41 + 1), (__m128)v10);
    v13 = _mm_mul_ps(v12, v12);
    v14 = _mm_shuffle_ps(v13, v13, 102);
    v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    v15 = _mm_div_ps(v12, _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)));
    v16 = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
    v17 = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
    if ( !*(_DWORD *)(this + 6300) )
    {
      v43 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))__PAIR64__(v16, v15.m128_u32[0]);
      v44 = v17;
    }
    if ( *(_DWORD *)(this + 6324) || *(_DWORD *)(this + 6328) )
    {
      *((_QWORD *)&v41 + 1) = __PAIR64__(v16, v15.m128_u32[0]);
      LODWORD(v42) = v17;
      *(_QWORD *)&v54 = *(_QWORD *)((char *)a2 + 164);
      DWORD2(v54) = *((_DWORD *)a2 + 43);
      YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors((float *)&v54, (float *)&v41 + 2);
      *((_QWORD *)&v41 + 1) = __PAIR64__(v16, v15.m128_u32[0]);
      LODWORD(v42) = v17;
      *(_QWORD *)&v54 = *(_QWORD *)((char *)a2 + 164);
      DWORD2(v54) = *((_DWORD *)a2 + 43);
      LODWORD(v19) = LODWORD(YawAngleBetweenTwoVectors) & _xmm;
      LODWORD(v21) = MPCMouseProcessor::GetPitchAngleBetweenTwoVectors((unsigned __int64 *)&v54, (_DWORD *)&v41 + 2).m128_u32[0] & _xmm;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v20);
        __debugbreak();
      }
      *(_QWORD *)&v54 = L"MouseParams_ResetHorizontalAngleRadians";
      *((_QWORD *)&v54 + 1) = 39LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        (__int64 *)(this & -(__int64)(this != 40)),
        &v54);
      if ( v19 > COERCE_FLOAT(L"MouseParams_ResetHorizontalAngleRadians") )
        goto LABEL_25;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v22);
        __debugbreak();
      }
      *(_QWORD *)&v54 = L"MouseParams_ResetVerticalAngleRadians";
      *((_QWORD *)&v54 + 1) = 37LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        (__int64 *)(this & -(__int64)(this != 40)),
        &v54);
      if ( v21 > COERCE_FLOAT(L"MouseParams_ResetVerticalAngleRadians") )
      {
LABEL_25:
        MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance);
        v43 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)a2 + 164);
        v44 = *((_DWORD *)a2 + 43);
        RayStabilizer::Reset((RayStabilizer *)(this + 360));
      }
      else if ( !*(_BYTE *)(this + 6280)
             || !v48
             || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v48 + 80LL))(v48) )
      {
        LOBYTE(v23) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
          v23);
        if ( !*((_BYTE *)a2 + 2280) )
        {
          v25 = (float)*(int *)(this + 6324);
          if ( !MPCConstantManager::s_instance )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v24);
            __debugbreak();
          }
          *(_QWORD *)&v54 = L"MouseParams_DeltaToRadiansRatio";
          *((_QWORD *)&v54 + 1) = 31LL;
          MPCConstantManager::GetConstant<float>(
            (__int64)MPCConstantManager::s_instance,
            (__int64 *)(this & -(__int64)(this != 40)),
            &v54);
          v27 = (float)(v25 / COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio")) * -1.0;
          v45 = v27;
          v28 = (float)*(int *)(this + 6328);
          if ( !MPCConstantManager::s_instance )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v26);
            __debugbreak();
          }
          *(_QWORD *)&v54 = L"MouseParams_DeltaToRadiansRatio";
          *((_QWORD *)&v54 + 1) = 31LL;
          MPCConstantManager::GetConstant<float>(
            (__int64)MPCConstantManager::s_instance,
            (__int64 *)(this & -(__int64)(this != 40)),
            &v54);
          v29 = (float)(v28 / COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio")) * -1.0;
          v46 = v29;
          MPCMath::OrientToGravity((__int64)&v50, (__int64)a2, 0.89999998);
          *((_QWORD *)&v41 + 1) = v50;
          LODWORD(v42) = v51;
          *(_QWORD *)&v54 = v52;
          DWORD2(v54) = v53;
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle(v49.m128_f32, (float *)&v41 + 2, v29);
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)&v41 + 2, (float *)&v54, v27);
          v49 = DirectX::XMQuaternionMultiply(v31, v30, v32);
          Windows::Foundation::Numerics::make_float4x4_from_quaternion(&v50, &v49);
          v33 = Windows::Foundation::Numerics::transform_normal((float *)&v54, (float *)&v43, (float *)&v50);
          v43 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v33;
          v44 = *((_DWORD *)v33 + 2);
          ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,long &,long &,int &,long &,long &,float &,float &>(
            (unsigned int *)a3 + 1,
            (int *)(this + 6208),
            (int *)(this + 6212),
            (int *)(this + 6332),
            (int *)(this + 6324),
            (int *)(this + 6328),
            &v45,
            &v46);
        }
      }
    }
  }
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 30) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 40);
  *(_QWORD *)((char *)a3 + 132) = v43;
  *((_DWORD *)a3 + 35) = v44;
  *((_BYTE *)a3 + 89) = 0;
  if ( v48 )
  {
    v34 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v48 + 96LL))(v48, &v54);
    if ( v34 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        646LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v34);
      __debugbreak();
    }
    if ( (((_DWORD)v54 == DWORD2(v54)) == DWORD1(v54)) == HIDWORD(v54) )
    {
      LODWORD(v47) = 0;
      v45 = 0.0;
      v46 = 0.0;
      v43 = 0LL;
      v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 64LL))(*(_QWORD *)(this + 16));
      v36 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 64LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
      v37 = v36(v35, 0LL, 0LL, 0LL, &v43);
      if ( v37 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          661LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v37);
        __debugbreak();
      }
      *((_QWORD *)&v41 + 1) = 0LL;
      if ( v43 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v43, (__int64 *)&v41 + 1) >= 0 )
      {
        v38 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)&v41 + 1) + 32LL))(
                *((_QWORD *)&v41 + 1),
                &v47);
        if ( v38 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            666LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v38);
          __debugbreak();
        }
        v39 = (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)&v41 + 1) + 40LL))(*((_QWORD *)&v41 + 1), &v45);
        if ( v39 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            667LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v39);
          __debugbreak();
        }
        v40 = (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)&v41 + 1) + 48LL))(*((_QWORD *)&v41 + 1), &v46);
        if ( v40 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            668LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
            (const char *)(unsigned int)v40);
          __debugbreak();
        }
      }
      *((_BYTE *)a3 + 89) = 1;
      *((_DWORD *)a3 + 23) = v47;
      *((float *)a3 + 24) = v45;
      *((float *)a3 + 25) = v46;
      *(_OWORD *)((char *)a3 + 104) = v54;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v41 + 1);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
    }
  }
  *((_DWORD *)a3 + 20) = **(_DWORD **)(this + 24);
  *((_DWORD *)a3 + 21) = 2;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v48);
}
