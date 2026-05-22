/*
 * XREFs of ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180020014
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FD04 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180079620 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x1800775A4 (-MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079770 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCHolographicInputManager::UpdateDoubleClickValues(MPCHolographicInputManager *this)
{
  _QWORD *v2; // rcx
  char v3; // di
  UINT v4; // ebp
  UINT v5; // r14d
  const char *v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // cl
  const char *v9; // r9
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( IsEdition(0xAuLL) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 322);
    if ( v2 == *((_QWORD **)this + 323)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 48LL))(*v2) == 2
      || (v3 = 1, *((_DWORD *)this + 656) != 1) )
    {
      v3 = 0;
    }
    if ( v3 != *((_BYTE *)this + 2648) )
    {
      if ( v3 )
        v4 = *((_DWORD *)this + 665);
      else
        v4 = *((_DWORD *)this + 663);
      v14 = v4;
      if ( v3 )
        v5 = *((_DWORD *)this + 666);
      else
        v5 = *((_DWORD *)this + 664);
      v13 = v5;
      if ( v3 )
      {
        *((_DWORD *)this + 663) = GetSystemMetrics(36);
        *((_DWORD *)this + 664) = GetSystemMetrics(37);
      }
      if ( !SystemParametersInfoW(0x1Du, v4, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x5AD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v6);
      if ( !SystemParametersInfoW(0x1Eu, v5, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x5AE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
      *((_BYTE *)this + 2648) = v3;
      if ( ISMTracing::IsEnabled(v8, v7) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v10,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(v11, (const bool *)this + 2648, &v14, &v13);
      }
    }
  }
}
