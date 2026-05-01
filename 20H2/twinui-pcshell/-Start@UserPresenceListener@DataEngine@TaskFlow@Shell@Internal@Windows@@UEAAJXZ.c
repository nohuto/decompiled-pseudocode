/*
 * XREFs of ?Start@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x18023B310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v8);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, char *))(*(_QWORD *)v8 + 24LL))(
           v8,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           (char *)this + 80);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        73LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 10) + 32LL))(
           *((_QWORD *)this + 10),
           (char *)this + 16,
           (char *)this + 88);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        75LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4F,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           v5);
  }
  return result;
}
