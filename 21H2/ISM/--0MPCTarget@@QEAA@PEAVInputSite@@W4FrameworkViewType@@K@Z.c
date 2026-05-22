/*
 * XREFs of ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800BA830
 * Callers:
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800B7EC0 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x1800B9FCC (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x1800BAE90 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCTarget::MPCTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  const char *v8; // r9
  __int64 v9; // rcx
  ISMTracing *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &MPCTarget::`vftable'{for `IMPCTarget'};
  *(_QWORD *)(a1 + 8) = &MPCTarget::`vftable'{for `RefCountedObject'};
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
    (_QWORD *)(a1 + 24),
    a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 40) = a3 == 1;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v8);
    __debugbreak();
  }
  if ( *(_DWORD *)(a2 + 16) != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      28LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v8);
    __debugbreak();
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 24);
  if ( ISMTracing::IsEnabled((__int64)retaddr) )
  {
    wil::details::static_lazy<ISMTracing>::get(v9, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_Create_(v10, (struct IMPCTarget *)a1);
  }
  return a1;
}
