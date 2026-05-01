/*
 * XREFs of ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x18032623C
 * Callers:
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::catch$16 @ 0x180324C34 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--catch$16.c)
 *     ??R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@23@@Z @ 0x180324DA8 (--R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU-$IAsyncOperation@_N@Foundation@Windows.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch$24 @ 0x180324EEF (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--catch$24.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch$8 @ 0x180327CA8 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--catch$8.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::catch$13 @ 0x180328185 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--catch$13.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::catch$19 @ 0x18032879E (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_18032879E.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CF1B4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x180322348 (--$-0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@-$_Ref_count_obj@U_Exc.c)
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x180324088 (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Concurrency::details::_Task_impl_base::_CancelWithException(
        Concurrency::details::_Task_impl_base *this,
        const struct std::exception_ptr *a2)
{
  __int64 (__fastcall *v4)(Concurrency::details::_Task_impl_base *, __int64, __int64, _QWORD, char **); // rdi
  std::_Ref_count_base *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  char v8; // bl
  char *v10; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-30h]
  _BYTE v12[8]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+48h] [rbp-20h] BYREF
  void *v14; // [rsp+70h] [rbp+8h]

  v4 = *(__int64 (__fastcall **)(Concurrency::details::_Task_impl_base *, __int64, __int64, _QWORD, char **))(*(_QWORD *)this + 8LL);
  Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
    (Concurrency::details::_TaskCreationCallstack *)v12,
    (Concurrency::details::_Task_impl_base *)((char *)this + 320));
  v14 = operator new(0x48uLL);
  v5 = (std::_Ref_count_base *)std::_Ref_count_obj<Concurrency::details::_ExceptionHolder>::_Ref_count_obj<Concurrency::details::_ExceptionHolder>(
                                 (__int64)v14,
                                 a2,
                                 (const struct Concurrency::details::_TaskCreationCallstack *)v12);
  v10 = (char *)v5 + 16;
  v11 = v5;
  LOBYTE(v6) = 1;
  LOBYTE(v7) = 1;
  v8 = v4(this, v7, v6, 0LL, &v10);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  std::vector<void *>::_Tidy((__int64)v13);
  return v8;
}
