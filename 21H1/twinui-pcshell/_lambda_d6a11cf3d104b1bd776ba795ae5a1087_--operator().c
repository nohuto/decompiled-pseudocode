/*
 * XREFs of _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::operator() @ 0x180303D5C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d6a11cf3d104b1bd776ba795ae5a1087__void_Concurrency::task_bool___::_Do_call @ 0x180305E60 (std--_Func_impl_no_alloc__lambda_d6a11cf3d104b1bd776ba795ae5a1087__void_Concurrency_ea_180305E60.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ @ 0x180306240 (-_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ.c)
 *     ?_Wait@_Task_impl_base@details@Concurrency@@QEAA?AW4task_group_status@3@XZ @ 0x180306CF0 (-_Wait@_Task_impl_base@details@Concurrency@@QEAA-AW4task_group_status@3@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_d6a11cf3d104b1bd776ba795ae5a1087_::operator()(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  const char *v4; // r9
  std::_Ref_count_base *v5; // rcx
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v2 = a2;
    if ( !*a2 )
      Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
    if ( (unsigned int)Concurrency::details::_Task_impl_base::_Wait() == 2 )
    {
      v7 = 0LL;
      pExceptionObject = &Concurrency::task_canceled::`vftable';
      throw (Concurrency::task_canceled *)&pExceptionObject;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a1[1]);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      v4);
    v2 = a2;
  }
  v5 = (std::_Ref_count_base *)v2[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
