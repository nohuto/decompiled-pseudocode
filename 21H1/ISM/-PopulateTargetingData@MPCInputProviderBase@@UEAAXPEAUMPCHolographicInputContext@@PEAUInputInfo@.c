/*
 * XREFs of ?PopulateTargetingData@MPCInputProviderBase@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180084C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn MPCInputProviderBase::PopulateTargetingData(
        MPCInputProviderBase *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    156LL,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    a4);
  JUMPOUT(0x180084C1ALL);
}
