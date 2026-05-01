/*
 * XREFs of _lambda_6bddbf0d24291becc987c4f70b09177c_::operator() @ 0x18028E2BC
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_6bddbf0d24291becc987c4f70b09177c___::Invoke @ 0x18028F040 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_6bddbf0d24291becc9_ea_18028F040.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6bddbf0d24291becc987c4f70b09177c_::operator()(_QWORD *a1, void (***a2)(void))
{
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (**a2)();
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *a1, &GUID_NULL, 0LL);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          688LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B4,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
                           v4);
  }
  return result;
}
