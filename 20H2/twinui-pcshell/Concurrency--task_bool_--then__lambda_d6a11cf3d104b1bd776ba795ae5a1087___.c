/*
 * XREFs of Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x1803238B4
 * Callers:
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x180324904 (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CF1B4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x1803233E0 (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 *     _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x180323BEC (_lambda_d6a11cf3d104b1bd776ba795ae5a1087_--_lambda_d6a11cf3d104b1bd776ba795ae5a1087_.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x180324334 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x1803248B0 (--1task_options@Concurrency@@QEAA@XZ.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x180326968 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 *     ?_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ @ 0x1803274C0 (-_NoCallOnDefaultTask_ErrorImpl@_DefaultTaskHelper@details@Concurrency@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___(
        Concurrency::details::_Task_impl_base **a1,
        _QWORD *a2,
        __int64 a3)
{
  Concurrency::details::_Task_impl_base *v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _BYTE v14[16]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  _BYTE v18[16]; // [rsp+50h] [rbp-B0h] BYREF
  void *v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE v22[32]; // [rsp+80h] [rbp-80h] BYREF
  void *v23; // [rsp+A0h] [rbp-60h]
  char v24; // [rsp+A8h] [rbp-58h]
  char v25; // [rsp+B0h] [rbp-50h]
  void *v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int64 v29[2]; // [rsp+E0h] [rbp-20h] BYREF
  std::_Ref_count_base *v30; // [rsp+F0h] [rbp-10h]
  _BYTE v31[40]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v32[7]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v33; // [rsp+168h] [rbp+68h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  Concurrency::task_options::task_options((Concurrency::task_options *)v22);
  v20 = 0LL;
  v21 = 0LL;
  v19 = retaddr;
  v25 = 1;
  v26 = retaddr;
  v28 = v27;
  std::vector<void *>::_Tidy((__int64)&v20);
  Concurrency::details::_ContextCallback::_Assign((Concurrency::details::_ContextCallback *)v14, v23);
  v14[8] = v24;
  v6 = *a1;
  if ( !*a1 )
    Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
  v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 37);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)*((_QWORD *)v6 + 37);
  }
  v15 = *((_QWORD *)v6 + 36);
  v16 = (std::_Ref_count_base *)v7;
  v17 = *((_QWORD *)v6 + 38);
  Concurrency::details::_ThenImplOptions::_CreateOptions(v29, v22, v14, &v15, a2);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v8 = (__int64 *)lambda_d6a11cf3d104b1bd776ba795ae5a1087_::_lambda_d6a11cf3d104b1bd776ba795ae5a1087_(v18, a3);
  v33 = 0LL;
  v32[0] = off_1805C3638;
  v9 = *v8;
  *v8 = 0LL;
  v32[1] = v9;
  v10 = v8[1];
  v8[1] = 0LL;
  v32[2] = v10;
  v33 = v32;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8 + 1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
  Concurrency::task<bool>::_ThenImpl<bool,std::function<void (Concurrency::task<bool>)>>(a1, a2, (int)v32, v29);
  if ( v33 )
  {
    v11 = v32;
    LOBYTE(v11) = v33 != v32;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v33 + 32LL))(v33, v11);
    v33 = 0LL;
  }
  std::vector<void *>::_Tidy((__int64)v31);
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)v14);
  Concurrency::task_options::~task_options((Concurrency::task_options *)v22);
  return a2;
}
