/*
 * XREFs of ?_GetTaskImplBase@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBA?AV?$shared_ptr@U_Task_impl_base@details@Concurrency@@@std@@XZ @ 0x180327BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Concurrency::details::_PPLTaskHandle<unsigned char,Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_ContinuationTaskHandleBase>::_GetTaskImplBase(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 48);
  }
  *a2 = *(_QWORD *)(a1 + 40);
  result = a2;
  a2[1] = v2;
  return result;
}
