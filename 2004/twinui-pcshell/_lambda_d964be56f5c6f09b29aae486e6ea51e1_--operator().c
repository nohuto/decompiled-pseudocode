/*
 * XREFs of _lambda_d964be56f5c6f09b29aae486e6ea51e1_::operator() @ 0x1802DE420
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d964be56f5c6f09b29aae486e6ea51e1___::Run @ 0x1802DFB40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d964be56f5c6f09b29aae486e6ea51e1___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_d964be56f5c6f09b29aae486e6ea51e1_::operator()(
        _BYTE **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // rax
  int v8; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    v5 = *((_QWORD *)*a1 + 16);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 80LL))(v5, &v11);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1233LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v6);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 36) + 144LL))(
                       *((_QWORD *)*a1 + 36),
                       &v13);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v7 + 48LL))(*v7, &v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v12 + 112LL))(v12, v11, *a1[1] != 0);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1237LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D8,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           a4);
  }
  return result;
}
