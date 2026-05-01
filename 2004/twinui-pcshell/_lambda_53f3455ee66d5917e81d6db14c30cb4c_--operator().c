/*
 * XREFs of _lambda_53f3455ee66d5917e81d6db14c30cb4c_::operator() @ 0x1800B77D8
 * Callers:
 *     _lambda_2aad9bc27b98765df586e5b2fc9f859e_::_lambda_invoker_cdecl_ @ 0x1800B7200 (_lambda_2aad9bc27b98765df586e5b2fc9f859e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800B4BE4 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_53f3455ee66d5917e81d6db14c30cb4c_::operator()(__int64 a1, unsigned int a2)
{
  unsigned int ActivationFactory; // eax
  unsigned int v4; // eax
  const char *v6; // [rsp+28h] [rbp-48h]
  const char *v7; // [rsp+28h] [rbp-48h]
  _BYTE v8[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v9 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Vtc.Win32VtcView",
    0x22u,
    0x21u);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_24d7c183_14a3_5525_b34b_e90a5af9e8e7, &v9);
  wil::details::in1diag3::FailFast_IfFailedMsg(
    retaddr,
    (void *)0x333,
    (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)ActivationFactory,
    (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
    v6);
  v11 = 0LL;
  v8[0] = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v9 + 56LL))(v9, a2, v8);
  wil::details::in1diag3::FailFast_IfFailedMsg(
    retaddr,
    (void *)0x336,
    (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)v4,
    (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
    v7);
  LOBYTE(a2) = v8[0];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return a2;
}
