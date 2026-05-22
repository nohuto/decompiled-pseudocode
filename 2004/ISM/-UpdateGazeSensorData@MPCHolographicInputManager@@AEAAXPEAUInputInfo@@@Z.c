/*
 * XREFs of ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180078D20
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800775BC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x18007940C (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079B08 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079BB0 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeSensorData(
        MPCHolographicInputManager *this,
        struct InputInfo *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    *(_OWORD *)this = *((_OWORD *)a2 + 44);
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 45);
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 46);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 47);
    if ( !Windows::Foundation::Numerics::invert(this, (MPCHolographicInputManager *)((char *)this + 64), this) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        500LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v3);
      __debugbreak();
    }
    *(_QWORD *)(v2 + 128) = 0LL;
    *(_DWORD *)(v2 + 136) = 0;
    *(_QWORD *)(v2 + 140) = 0LL;
    *(_DWORD *)(v2 + 148) = -1082130432;
    v4 = Windows::Foundation::Numerics::transform(v9, v2 + 128, v2);
    *(_QWORD *)(v5 + 152) = *(_QWORD *)v4;
    *(_DWORD *)(v5 + 160) = *(_DWORD *)(v4 + 8);
    v7 = Windows::Foundation::Numerics::transform_normal(v9, v6, v5, v6);
    *(_QWORD *)(v8 + 164) = *(_QWORD *)v7;
    *(_DWORD *)(v8 + 172) = *(_DWORD *)(v7 + 8);
  }
}
