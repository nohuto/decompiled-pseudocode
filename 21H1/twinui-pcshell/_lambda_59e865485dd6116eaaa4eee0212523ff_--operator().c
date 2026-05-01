/*
 * XREFs of _lambda_59e865485dd6116eaaa4eee0212523ff_::operator() @ 0x180058458
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_59e865485dd6116eaaa4eee0212523ff___::Run @ 0x180058430 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_59e865485dd6116eaaa4eee0212523ff___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_59e865485dd6116eaaa4eee0212523ff_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _DWORD *v4; // r8
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 288LL) + 144LL))(
                   *(_QWORD *)(*a1 + 288LL),
                   &v10);
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v2 + 40LL))(*v2, &v9);
  v4 = (_DWORD *)a1[1];
  LOBYTE(v4) = *v4 == 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)*v3 + 216LL))(
         *v3,
         *(unsigned int *)(*a1 + 360LL),
         v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x470,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      v7);
    JUMPOUT(0x1801017D8LL);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return 0LL;
}
