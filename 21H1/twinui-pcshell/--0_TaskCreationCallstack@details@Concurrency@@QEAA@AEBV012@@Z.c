/*
 * XREFs of ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x180302DD8
 * Callers:
 *     ??$?0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@?$_Ref_count_obj@U_ExceptionHolder@details@Concurrency@@@std@@QEAA@AEBVexception_ptr@1@$$QEAV_TaskCreationCallstack@details@Concurrency@@@Z @ 0x180301098 (--$-0AEBVexception_ptr@std@@V_TaskCreationCallstack@details@Concurrency@@@-$_Ref_count_obj@U_Exc.c)
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180301128 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x180304FBC (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 *     ?_CreateOptions@_ThenImplOptions@details@Concurrency@@SA?AU123@AEBVtask_options@3@AEBVtask_continuation_context@3@AEBUscheduler_ptr@3@@Z @ 0x1803056E8 (-_CreateOptions@_ThenImplOptions@details@Concurrency@@SA-AU123@AEBVtask_options@3@AEBVtask_conti.c)
 * Callees:
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800BA2BC (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_K.c)
 *     memmove_0 @ 0x1800CA4A3 (memmove_0.c)
 */

Concurrency::details::_TaskCreationCallstack *__fastcall Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this,
        const struct Concurrency::details::_TaskCreationCallstack *a2)
{
  char *v2; // r14
  __int64 v5; // rdx
  const void *v6; // rdx
  char *v7; // rdi
  size_t v8; // rbx

  v2 = (char *)this + 8;
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v5 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 1) != v5 )
  {
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>::_Buy_raw(
      (_QWORD *)this + 1,
      (v5 - *((_QWORD *)a2 + 1)) >> 3);
    v6 = (const void *)*((_QWORD *)a2 + 1);
    v7 = *(char **)v2;
    v8 = *((_QWORD *)a2 + 2) - (_QWORD)v6;
    memmove_0(*(void **)v2, v6, v8);
    *((_QWORD *)v2 + 1) = &v7[v8];
  }
  return this;
}
