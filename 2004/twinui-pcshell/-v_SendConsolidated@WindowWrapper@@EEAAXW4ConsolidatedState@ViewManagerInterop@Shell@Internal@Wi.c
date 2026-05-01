/*
 * XREFs of ?v_SendConsolidated@WindowWrapper@@EEAAXW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DBC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapper::v_SendConsolidated(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 144LL))(
                   *(_QWORD *)(a1 + 288),
                   &v10);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL))(*v4, &v9);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 184LL))(
         *v5,
         *(unsigned int *)(a1 + 360),
         (unsigned int)(a2 != 1) + 1);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
}
