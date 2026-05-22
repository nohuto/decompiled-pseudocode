/*
 * XREFs of ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z @ 0x180084A70
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCInputProviderBase::StabilizeTargetRay(
        MPCInputProviderBase *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)a2 + 48) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      180LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      a4);
    __debugbreak();
  }
  RayStabilizer::StabilizeInput((MPCInputProviderBase *)((char *)this + 360), a2);
}
