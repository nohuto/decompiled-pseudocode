/*
 * XREFs of ??$?4V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV_lambda_0c35f08fa008bd0bd75f4471027a7740_@@@Z @ 0x1803016CC
 * Callers:
 *     ?_SetUnwrappedAsyncOp@?$_Task_impl@_N@details@Concurrency@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180306B94 (-_SetUnwrappedAsyncOp@-$_Task_impl@_N@details@Concurrency@@QEAAXPE$AAU-$IAsyncOperation@_N@Found.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@XZ @ 0x18017D8F4 (--1-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180306444 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::operator=<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD v8[7]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-1h]
  _BYTE v10[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  v3 = __abi_winrt_ptr_ctor(*a2);
  v8[0] = &std::_Func_impl_no_alloc<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void,>::`vftable';
  v8[1] = __abi_winrt_ptr_ctor(v3);
  v5 = v8;
  v9 = v8;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v5 = v9;
  }
  if ( v5 == v8 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v11 = 0LL;
    std::_Func_class<void,>::_Reset_move(v10, v8);
    std::_Func_class<void,>::_Reset_move(v8, a1);
    std::_Func_class<void,>::_Reset_move(a1, v10);
    std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>((__int64)v10, v6);
  }
  else
  {
    v9 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v5;
  }
  std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>((__int64)v8, v4);
  return a1;
}
