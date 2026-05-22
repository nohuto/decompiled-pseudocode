/*
 * XREFs of _lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator() @ 0x1801114A4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run @ 0x180117CE0 (Windows--Internal--COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7___ea_180117CE0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x180113330 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // r14
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, PCWSTR, __int64); // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  v4 = *a1;
  v14 = 0LL;
  v5 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v6 = ***(void (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  v6(v5, &GUID_5fb52445_1407_4f25_9aa4_ac25bb3a9606, &v14);
  *(_BYTE *)(a2 + 9) = 1;
  v12 = a2;
  v13 = v14;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v13);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  MPCConstantManagerClient::CreatePVPrincipal(v4, &v14, &v12);
  v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 184LL);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7) + 8;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, PCWSTR, __int64))(*(_QWORD *)v8 + 32LL);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a1[2], 0LL);
  LODWORD(v9) = v9(v8, *((unsigned int *)a1 + 2), StringRawBuffer, v14);
  WindowsDeleteString((HSTRING)a1[2]);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v14);
  return (unsigned int)v9;
}
