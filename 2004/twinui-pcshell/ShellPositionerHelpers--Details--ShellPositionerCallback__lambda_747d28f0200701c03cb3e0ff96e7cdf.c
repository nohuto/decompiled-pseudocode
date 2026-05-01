/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_747d28f0200701c03cb3e0ff96e7cdfa___::Invoke @ 0x1802718F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_747d28f0200701c03cb3e0ff96e7cdfa___::Invoke(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  (**a2)(a2, &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12, &v7);
  if ( v7
    && (v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD))(*(_QWORD *)v7 + 32LL))(
               v7,
               **(_QWORD **)(a1 + 48),
               &GUID_NULL,
               0LL),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
  else
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    return 0;
  }
  return v4;
}
