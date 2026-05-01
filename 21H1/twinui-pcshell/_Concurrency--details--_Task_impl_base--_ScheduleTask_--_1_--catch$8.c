/*
 * XREFs of _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch$8 @ 0x180306A78
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x180304FBC (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

__int64 __fastcall Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch_8(__int64 a1, __int64 a2)
{
  Concurrency::details::_Task_impl_base *v3; // rbx

  v3 = *(Concurrency::details::_Task_impl_base **)(a2 + 64);
  if ( !*((_QWORD *)v3 + 2) )
  {
    __ExceptionPtrCreate((void *)(a2 + 32));
    __ExceptionPtrCurrentException((void *)(a2 + 32));
    Concurrency::details::_Task_impl_base::_CancelWithException(v3, (const struct std::exception_ptr *)(a2 + 32));
    __ExceptionPtrDestroy((void *)(a2 + 32));
  }
  return 0LL;
}
