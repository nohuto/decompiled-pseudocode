/*
 * XREFs of ??R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ @ 0x180303810
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@X$$V@std@@EEAAXXZ @ 0x180305E40 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@X$$V@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18017D8F4 (--1-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@XZ.c)
 *     ??$?0V_lambda_f25c37099038263181b5186a3fa41b37_@@X@?$function@$$A6AXXZ@std@@QEAA@V_lambda_f25c37099038263181b5186a3fa41b37_@@@Z @ 0x18030159C (--$-0V_lambda_f25c37099038263181b5186a3fa41b37_@@X@-$function@$$A6AXXZ@std@@QEAA@V_lambda_f25c37.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180302BF0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1803069D4 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()(__int64 *a1)
{
  bool v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  std::_Ref_count_base *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  Concurrency::details::_Task_impl_base *v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-C8h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-C0h]
  _BYTE v13[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14[3]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v15[8]; // [rsp+58h] [rbp-90h] BYREF
  char v16[80]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+10h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 16LL))(*a1, &v11);
  v17 = 0LL;
  Concurrency::details::_ContextCallback::_Capture((Concurrency::details::_ContextCallback *)&v17);
  v2 = v17 == *(_QWORD *)(*a1 + 16);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)&v17);
  if ( v2 )
  {
    Concurrency::details::_Task_impl_base::_ScheduleTask(v11, *a1, 0xFFFFFFFFLL);
  }
  else
  {
    v3 = *a1;
    v4 = *a1 + 16;
    v14[0] = v3;
    v5 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      v5 = v12;
    }
    v14[1] = v11;
    v14[2] = (__int64)v5;
    v6 = std::function<void (void)>::function<void (void)>(v15, v14);
    try
    {
      v7 = (__int64)v6;
      v8 = std::function<void (void)>::function<void (void)>((__int64)v16, (__int64)v6);
      Concurrency::details::_ContextCallback::_CallInContext(v4, v8, 0LL);
      std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>(v7, v9);
    }
    catch ( ... )
    {
      v10 = (Concurrency::details::_Task_impl_base *)v11;
      __ExceptionPtrCreate(v13);
      __ExceptionPtrCurrentException(v13);
      Concurrency::details::_Task_impl_base::_CancelWithException(v10, (const struct std::exception_ptr *)v13);
      __ExceptionPtrDestroy(v13);
    }
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
