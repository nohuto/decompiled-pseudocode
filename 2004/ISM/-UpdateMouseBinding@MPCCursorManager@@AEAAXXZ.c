/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18007C618
 * Callers:
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x18007C734 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029890 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180067DE0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x18007C204 (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v3; // rcx
  _BYTE *v4; // rdi
  char v5; // bl
  bool v6; // dl
  bool v7; // zf
  char v8; // al
  const char *v9; // r9
  const char *v10; // r9
  __int64 v11; // rcx
  ISMTracing *v12; // rcx
  unsigned __int8 v13; // dl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v4 = (char *)this + 66;
  v5 = *((_BYTE *)this + 66);
  v6 = (*((_BYTE *)Instance + 2640) & 1) == 0;
  v7 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v6;
  if ( v7 || !v6 )
  {
    v8 = v5;
    if ( v5 )
    {
      if ( !(unsigned int)NtMITDisableMouseIntercept() )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x140,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
        __debugbreak();
      }
      *v4 = 0;
      v8 = 0;
    }
  }
  else
  {
    v8 = v5;
    if ( !v5 )
    {
      if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x13A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v9);
        __debugbreak();
      }
      *v4 = 1;
      v8 = 1;
    }
  }
  if ( v5 != v8 && ISMTracing::IsEnabled(v3) )
  {
    wil::details::static_lazy<ISMTracing>::get(v11, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
      v12,
      (const bool *)this + 66,
      (const bool *)this + 56,
      (const bool *)this + 65);
  }
  *((_DWORD *)this + 8) = 0;
  v13 = *v4 == 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  MPCCursorManager::UpdateCursorVisibility(this, v13, 1u, 1);
}
