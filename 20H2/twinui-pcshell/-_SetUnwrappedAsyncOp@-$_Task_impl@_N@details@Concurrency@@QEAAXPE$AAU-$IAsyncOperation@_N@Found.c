/*
 * XREFs of ?_SetUnwrappedAsyncOp@?$_Task_impl@_N@details@Concurrency@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180327DC4
 * Callers:
 *     ??$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180323118 (--$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV-$shared_ptr@U-$_Task_impl@_N@det.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$?4V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV_lambda_0c35f08fa008bd0bd75f4471027a7740_@@@Z @ 0x18032297C (--$-4V_lambda_0c35f08fa008bd0bd75f4471027a7740_@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV_la.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Concurrency::details::_Task_impl<bool>::_SetUnwrappedAsyncOp(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rdi
  char v4; // si
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, __int64, __int64 *); // [rsp+48h] [rbp+10h]
  _Mtx_t v11; // [rsp+50h] [rbp+18h]

  v10 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a2;
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(a2);
  v10 = v3;
  v4 = 0;
  v11 = (_Mtx_t)(a1 + 32);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 32));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( *(_DWORD *)(a1 + 8) == 2 )
  {
    v4 = 1;
  }
  else if ( *(_DWORD *)(a1 + 8) != 4 && *(_DWORD *)(a1 + 8) != 3 )
  {
    *(_DWORD *)(a1 + 8) = 1;
    v9 = __abi_winrt_ptr_ctor((__int64)v3);
    std::function<void (void)>::operator=<_lambda_0c35f08fa008bd0bd75f4471027a7740_,void>(a1 + 376, &v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v6 = _Mtx_unlock(v11);
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( v4 )
  {
    v7 = __abi_winrt_cast_to(0, v3, (__int64)&_uuidof__AUIAsyncInfo_Foundation_Windows__);
    v9 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v3 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v3)[2])(v3);
}
