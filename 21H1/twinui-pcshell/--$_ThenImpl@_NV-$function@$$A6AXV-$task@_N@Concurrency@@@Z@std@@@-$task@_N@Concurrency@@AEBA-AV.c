/*
 * XREFs of ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x180302130
 * Callers:
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180302604 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800CA4A3 (memmove_0.c)
 *     ??0?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEAA@AEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@AEBV?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@4@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@AEBVtask_continuation_context@2@W4_TaskInliningMode@details@2@@Z @ 0x180302A40 (--0-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$integral_co.c)
 *     ?_Clear_and_reserve_geometric@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAX_K@Z @ 0x1803050A4 (-_Clear_and_reserve_geometric@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAX_K@Z.c)
 *     ?_CreateImpl@?$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x1803054A8 (-_CreateImpl@-$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@.c)
 *     ?_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1803066D8 (-_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Concurrency::task<bool>::_ThenImpl<bool,std::function<void (Concurrency::task<bool>)>>(
        Concurrency::details::_Task_impl_base **a1,
        _QWORD *a2,
        int a3,
        __int64 *a4)
{
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  char **v10; // rbx
  const void *v11; // r13
  signed __int64 v12; // r15
  char *v13; // r14
  Concurrency::details::_Task_impl_base *v14; // rbx
  struct Concurrency::details::_ContinuationTaskHandleBase *v15; // rax
  std::_Ref_count_base *v17[2]; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]
  unsigned int v21; // [rsp+C0h] [rbp+48h]

  if ( !*a4 )
    *a4 = 2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v7 = (volatile signed __int32 *)a4[2];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)a4[2];
  }
  v17[0] = (std::_Ref_count_base *)a4[1];
  v17[1] = (std::_Ref_count_base *)v7;
  v18 = a4[3];
  v8 = *a4;
  v19 = 0LL;
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v19 = *(_OWORD *)v17;
  v20 = v18;
  Concurrency::task<unsigned char>::_CreateImpl(a2, v8, &v19);
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  *(_BYTE *)(*a2 + 12LL) = *((_BYTE *)*a1 + 12) != 0;
  *(_BYTE *)(*a2 + 13LL) = 0;
  v9 = (_QWORD *)*a2;
  v9[40] = a4[4];
  v10 = (char **)(v9 + 41);
  if ( v9 + 41 != a4 + 5 )
  {
    v11 = (const void *)a4[5];
    v12 = a4[6] - (_QWORD)v11;
    v13 = *v10;
    if ( v12 >> 3 > (unsigned __int64)((__int64)(v9[43] - v9[41]) >> 3) )
    {
      std::vector<void *>::_Clear_and_reserve_geometric(v9 + 41);
      v13 = *v10;
    }
    memmove_0(v13, v11, v12);
    v10[1] = &v13[v12];
  }
  v14 = *a1;
  v21 = (unsigned int)operator new(0x88uLL);
  v15 = (struct Concurrency::details::_ContinuationTaskHandleBase *)Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>(
                                                                      v21,
                                                                      (_DWORD)a1,
                                                                      (_DWORD)a2,
                                                                      a3,
                                                                      a4[9],
                                                                      *((_DWORD *)a4 + 16));
  Concurrency::details::_Task_impl_base::_ScheduleContinuation(v14, v15);
  return a2;
}
