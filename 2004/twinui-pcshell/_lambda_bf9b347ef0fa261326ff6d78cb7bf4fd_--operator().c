/*
 * XREFs of _lambda_bf9b347ef0fa261326ff6d78cb7bf4fd_::operator() @ 0x180076740
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bf9b347ef0fa261326ff6d78cb7bf4fd___::Run @ 0x180076730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bf9b347ef0fa261326ff6d78cb7bf4fd___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_bf9b347ef0fa261326ff6d78cb7bf4fd_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  int ActivationFactory; // eax
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v9; // [rsp+20h] [rbp-68h]
  DWORD dwProcessId; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-40h] BYREF
  HSTRING string; // [rsp+50h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v12 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v12);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA8D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v9);
    goto LABEL_12;
  }
  v11 = 0LL;
  v3 = *v12;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v3 + 48))(
         v12,
         dwProcessId,
         WindowThreadProcessId,
         &v11);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xA93,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      v9);
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 48LL))(v11, v13);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xA96,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v9);
    JUMPOUT(0x1801303E8LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return 0LL;
}
