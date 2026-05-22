/*
 * XREFs of ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18007884C
 * Callers:
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x1800773DC (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProvi.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180080E00 (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 *     ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x180195D30 (-OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079A68 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079B10 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCHolographicInputManager::TransformRayToHeadFromWorld(
        MPCHolographicInputManager *this,
        struct TargetingRay *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  __int64 v7; // r8
  int v8; // xmm1_4
  _DWORD *v9; // r9
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+24h] [rbp-2Ch]
  int v16; // [rsp+28h] [rbp-28h]
  _DWORD v17[4]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( !*((_BYTE *)this + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      948LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a2);
    __debugbreak();
  }
  v2 = *((_DWORD *)a2 + 4);
  v14 = *((_DWORD *)a2 + 3);
  v3 = *((_DWORD *)a2 + 5);
  v15 = v2;
  v4 = *(_DWORD *)a2;
  v16 = v3;
  v5 = *((_DWORD *)a2 + 1);
  v17[0] = v4;
  v6 = *((_DWORD *)a2 + 2);
  v17[1] = v5;
  v17[2] = v6;
  Windows::Foundation::Numerics::transform_normal(v18, &v14, (char *)this + 64, a2);
  Windows::Foundation::Numerics::transform(&v14, v17, v7);
  v8 = v15;
  *v9 = v14;
  v10 = v16;
  v9[1] = v8;
  v11 = v18[0];
  v9[2] = v10;
  v12 = v18[1];
  v9[3] = v11;
  v13 = v18[2];
  v9[4] = v12;
  v9[5] = v13;
}
