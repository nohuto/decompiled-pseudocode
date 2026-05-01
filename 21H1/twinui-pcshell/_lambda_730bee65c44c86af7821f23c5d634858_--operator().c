/*
 * XREFs of _lambda_730bee65c44c86af7821f23c5d634858_::operator() @ 0x180092824
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_730bee65c44c86af7821f23c5d634858___::Invoke @ 0x180092EC0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_730bee65c44c86af7821f23c5d63485.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_730bee65c44c86af7821f23c5d634858_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v10 = 0LL;
  v5 = (*v3)(a2, &GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac, &v10);
  v6 = v5;
  if ( v5 != -2147467262 )
  {
    if ( v5 < 0 )
    {
      v7 = 7075LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6);
      v4 = v6;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
           v10,
           **(_QWORD **)(a1 + 8),
           *(_QWORD *)a1);
    if ( v6 < 0 )
    {
      v7 = 7076LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return v4;
}
