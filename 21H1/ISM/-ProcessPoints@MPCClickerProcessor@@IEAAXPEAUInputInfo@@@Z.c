/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x180198DB8
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180198C40 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079FB8 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CCC8 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(
        MPCClickerProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  const char *v11; // r9
  float v12; // xmm6_4
  const char *v13; // r9
  float v14; // xmm8_4
  float v15; // xmm11_4
  struct MPCHolographicInputManager *Instance; // rax
  const char *v17; // r9
  struct BamoMPCConstantManagerClientPrincipal *v18; // rcx
  BOOL v19; // eax
  const char *v20; // r9
  struct BamoMPCConstantManagerClientPrincipal *v21; // rcx
  const char *v22; // r9
  struct BamoMPCConstantManagerClientPrincipal *v23; // rcx
  const char *v24; // r9
  struct MPCHolographicInputManager *v25; // rax
  float *v26; // rax
  const char *v27; // r9
  float *v28; // rdi
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  const char *v32; // r9
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float *v41; // rax
  struct MPCHolographicInputManager *v42; // rax
  __int64 v43; // xmm0_8
  float *v44; // rax
  __int128 v45; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+30h] [rbp-D8h]
  __int64 v47; // [rsp+38h] [rbp-D0h] BYREF
  int v48; // [rsp+40h] [rbp-C8h]
  _OWORD v49[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v50[952]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v51; // [rsp+440h] [rbp+338h]
  __int128 v52; // [rsp+450h] [rbp+348h]
  __int128 v53; // [rsp+460h] [rbp+358h]
  __int128 v54; // [rsp+470h] [rbp+368h]
  wil::details::in1diag3 *retaddr; // [rsp+9F0h] [rbp+8E8h]

  v4 = *((_BYTE *)this + 4668) == 0;
  v7 = (float)(*((float *)a2 + 178) + *((float *)this + 1163)) * 0.5;
  v8 = (float)(*((float *)a2 + 177) + *((float *)this + 1162)) * 0.5;
  v9 = 0.0;
  v10 = 0.0;
  *((float *)this + 1162) = v8;
  *((float *)this + 1163) = v7;
  if ( !v4 )
  {
    v10 = v8 - *((float *)this + 1164);
    v9 = v7 - *((float *)this + 1165);
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v46 = 13LL;
  *((_QWORD *)&v45 + 1) = L"DeadZoneAngle";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)this + 3,
    (__int128 *)((char *)&v45 + 8));
  if ( COERCE_FLOAT(L"DeadZoneAngle") > COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) )
    v10 = 0.0;
  LODWORD(v12) = COERCE_UNSIGNED_INT(*((float *)this + 1163) - 0.0) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
    __debugbreak();
  }
  *((_QWORD *)&v45 + 1) = L"DeadZoneAngle";
  v46 = 13LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)this + 3,
    (__int128 *)((char *)&v45 + 8));
  if ( COERCE_FLOAT(L"DeadZoneAngle") > v12 )
    v9 = 0.0;
  v14 = 0.0;
  if ( *((_BYTE *)a2 + 770) && (*((_BYTE *)a2 + 728) & 0x40) != 0 )
  {
    v15 = *((float *)a2 + 187);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v13);
      __debugbreak();
    }
    v46 = 18LL;
    *((_QWORD *)&v45 + 1) = L"ThumbStickDeadZone";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)this + 3,
      (__int128 *)((char *)&v45 + 8));
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 0.0) & _xmm) > COERCE_FLOAT(L"ThumbStickDeadZone") )
    {
      v14 = (float)(v15 + *((float *)this + 1166)) * 0.5;
      *((float *)this + 1166) = v14;
    }
  }
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v50, Instance, 0x8F0uLL);
  v18 = MPCConstantManager::s_instance;
  v19 = *((_BYTE *)a2 + 704) == 1;
  v49[0] = v51;
  v49[1] = v52;
  *((_DWORD *)this + 1160) = v19;
  v49[2] = v53;
  v49[3] = v54;
  if ( !v18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v17);
    __debugbreak();
  }
  v46 = 18LL;
  *((_QWORD *)&v45 + 1) = L"PointScaleFactorXY";
  MPCConstantManager::GetConstant<float>((__int64)v18, (__int64 *)this + 3, (__int128 *)((char *)&v45 + 8));
  v21 = MPCConstantManager::s_instance;
  *((float *)this + 1174) = (float)(COERCE_FLOAT(L"PointScaleFactorXY") * v10) + *((float *)this + 1174);
  if ( !v21 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v20);
    __debugbreak();
  }
  *((_QWORD *)&v45 + 1) = L"PointScaleFactorXY";
  v46 = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)v21, (__int64 *)this + 3, (__int128 *)((char *)&v45 + 8));
  v23 = MPCConstantManager::s_instance;
  *((float *)this + 1175) = (float)(COERCE_FLOAT(L"PointScaleFactorXY") * v9) + *((float *)this + 1175);
  if ( !v23 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v22);
    __debugbreak();
  }
  v46 = 21LL;
  *((_QWORD *)&v45 + 1) = L"PointScaleFactorStick";
  MPCConstantManager::GetConstant<float>((__int64)v23, (__int64 *)this + 3, (__int128 *)((char *)&v45 + 8));
  v4 = *((_DWORD *)this + 1160) == 0;
  *((_DWORD *)this + 1164) = *((_DWORD *)this + 1162);
  *((_DWORD *)this + 1165) = *((_DWORD *)this + 1163);
  *((_BYTE *)this + 4668) = 1;
  *((float *)this + 1176) = COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(L"PointScaleFactorStick") * v14) ^ _xmm)
                          + *((float *)this + 1176);
  if ( v4 )
  {
    v42 = MPCHolographicInputManager::GetInstance();
    v43 = *((_QWORD *)v42 + 28);
    LODWORD(v42) = *((_DWORD *)v42 + 58);
    v47 = v43;
    v48 = (int)v42;
    v44 = Windows::Foundation::Numerics::transform((float *)&v45 + 2, (float *)&v47, (float *)v49);
    *(_QWORD *)((char *)this + 4684) = *(_QWORD *)v44;
    *((float *)this + 1173) = v44[2];
  }
  else if ( *((_DWORD *)this + 1161) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v24);
      __debugbreak();
    }
    *((_QWORD *)&v45 + 1) = L"PointScaleFactorXY";
    v46 = 18LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)this + 3,
      (__int128 *)((char *)&v45 + 8));
    v28 = (float *)((char *)this + 4684);
    v29 = COERCE_FLOAT(L"PointScaleFactorXY") * v10;
    v30 = (float)(v29 * 0.0) + *((float *)this + 1172);
    v31 = (float)(v29 * 0.0) + *((float *)this + 1173);
    *((float *)this + 1171) = v29 + *((float *)this + 1171);
    *((float *)this + 1172) = v30;
    *((float *)this + 1173) = v31;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v27);
      __debugbreak();
    }
    *((_QWORD *)&v45 + 1) = L"PointScaleFactorXY";
    v46 = 18LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)this + 3,
      (__int128 *)((char *)&v45 + 8));
    v33 = COERCE_FLOAT(L"PointScaleFactorXY") * v9;
    v34 = v33 + *((float *)this + 1172);
    v35 = v33 * 0.0;
    v36 = v35 + *((float *)this + 1173);
    *v28 = v35 + *v28;
    *((float *)this + 1172) = v34;
    *((float *)this + 1173) = v36;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v32);
      __debugbreak();
    }
    *((_QWORD *)&v45 + 1) = L"PointScaleFactorStick";
    v46 = 21LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)this + 3,
      (__int128 *)((char *)&v45 + 8));
    LODWORD(v37) = COERCE_UNSIGNED_INT(COERCE_FLOAT(L"PointScaleFactorStick") * v14) ^ _xmm;
    v38 = v37 + *((float *)this + 1173);
    v39 = v37 * 0.0;
    v40 = v39 + *((float *)this + 1172);
    *v28 = v39 + *v28;
    *((float *)this + 1172) = v40;
    *((float *)this + 1173) = v38;
    v41 = Windows::Foundation::Numerics::transform((float *)&v47, (float *)this + 1171, (float *)v49);
    *((_QWORD *)this + 584) = *(_QWORD *)v41;
    *((float *)this + 1170) = v41[2];
  }
  else
  {
    v25 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 4684) = *((_QWORD *)v25 + 28);
    *((_DWORD *)this + 1173) = *((_DWORD *)v25 + 58);
    v26 = Windows::Foundation::Numerics::transform((float *)&v47, (float *)this + 1171, (float *)v49);
    *((_QWORD *)this + 584) = *(_QWORD *)v26;
    *(float *)&v26 = v26[2];
    v48 = 0;
    *((_DWORD *)this + 1170) = (_DWORD)v26;
    LODWORD(v26) = v48;
    *((_QWORD *)this + 587) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1176) = (_DWORD)v26;
    *((_BYTE *)this + 4668) = 0;
  }
  *((_DWORD *)this + 1161) = *((_DWORD *)this + 1160);
}
