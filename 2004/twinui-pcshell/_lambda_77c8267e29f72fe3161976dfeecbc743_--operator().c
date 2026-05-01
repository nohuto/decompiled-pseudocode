/*
 * XREFs of _lambda_77c8267e29f72fe3161976dfeecbc743_::operator() @ 0x1802947EC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_2869fa4c1cc70a471f6a555005ebc198___::Invoke @ 0x180294E60 (CAsyncCallbackWithLambda__lambda_2869fa4c1cc70a471f6a555005ebc198___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x180295584 (-TryGetWindowGroupById@WindowGroupManager@@AEAA-AV-$com_ptr_t@UIWindowGroup@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_77c8267e29f72fe3161976dfeecbc743_::operator()(unsigned int **a1)
{
  const char *v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, _QWORD, int); // rdi
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  WindowGroupManager::TryGetWindowGroupById(*a1, &v10, *a1[1]);
  v3 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      132LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
      v2);
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) )
  {
    v4 = *((_QWORD *)*a1 + 12);
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(*(_QWORD *)v4 + 40LL);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    v7 = v5(v4, *a1[1], v6, 0LL, 2);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        138LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\windowgroupmanager.cpp",
        (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return 0LL;
}
