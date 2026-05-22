/*
 * XREFs of _lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator() @ 0x18007D878
 * Callers:
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18007F4C4 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CCC8 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

bool __fastcall lambda_3cd376e3a20bdc9f6b19457eb0f70b96_::operator()(__int64 *a1)
{
  const char *v2; // r9
  char v3; // bl
  float v4; // xmm6_4
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 590) == 512 )
  {
    v4 = *(float *)(*(_QWORD *)a1[1] + 840LL);
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v2);
      __debugbreak();
    }
    v5 = *a1;
    *(_QWORD *)&v7 = L"HandGuidanceScoreForPrimary";
    *((_QWORD *)&v7 + 1) = 27LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64 *)((v5 + 24) & -(__int64)(v5 != 0)),
      &v7);
    return v4 >= COERCE_FLOAT(L"HandGuidanceScoreForPrimary");
  }
  return v3;
}
