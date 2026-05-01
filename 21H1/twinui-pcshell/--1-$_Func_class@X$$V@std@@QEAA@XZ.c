/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1801BEEAC
 * Callers:
 *     _CVirtualTouchpadExperienceManager::ComputeConstraints_::_1_::dtor$0 @ 0x1801BFCEE (_CVirtualTouchpadExperienceManager--ComputeConstraints_--_1_--dtor$0.c)
 *     _FindMonitor_::_1_::dtor$2 @ 0x1801C0364 (_FindMonitor_--_1_--dtor$2.c)
 *     _CVirtualTouchpadExperienceManager::Show_::_1_::dtor$2 @ 0x1801C21FD (_CVirtualTouchpadExperienceManager--Show_--_1_--dtor$2.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x180302C28 (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$8 @ 0x180303978 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--dtor$8.c)
 *     _Concurrency::details::_Task_impl_unsigned_char_::_CancelAndRunContinuations_::_1_::dtor$1 @ 0x180304DC9 (_Concurrency--details--_Task_impl_unsigned_char_--_CancelAndRunContinuations_--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_bool_::_CancelAndRunContinuations_::_1_::dtor$1 @ 0x180304FA9 (_Concurrency--details--_Task_impl_bool_--_CancelAndRunContinuations_--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleContinuationTask_::_1_::dtor$0 @ 0x18030694F (_Concurrency--details--_Task_impl_base--_ScheduleContinuationTask_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  return std::function<void (Concurrency::task<bool>)>::~function<void (Concurrency::task<bool>)>(a1, a2);
}
