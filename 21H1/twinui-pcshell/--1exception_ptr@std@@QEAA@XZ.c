/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1802CB610
 * Callers:
 *     _std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____::_1_::dtor$0 @ 0x1802CB02D (_std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____--_1_--dtor$0.c)
 *     _std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor$0 @ 0x1802CB0E9 (_std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1802CD67E (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::_Ref_count_obj_Concurrency::details::_ExceptionHolder_::_Ref_count_obj_Concurrency::details::_ExceptionHolder__std::exception_ptr_const_&_Concurrency::details::_TaskCreationCallstack__::_1_::dtor$1 @ 0x180301110 (_std--_Ref_count_obj_Concurrency--details--_ExceptionHolder_--_Ref_count_obj_Concur_ea_180301110.c)
 *     _std::call_once__lambda_0e64988457575224279dcb6d61e61bdd____::_1_::dtor$0 @ 0x1803023B5 (_std--call_once__lambda_0e64988457575224279dcb6d61e61bdd____--_1_--dtor$0.c)
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$4 @ 0x1803039E8 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--dtor$4.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$2 @ 0x180303C33 (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$2.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$3 @ 0x180303CA6 (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$3.c)
 *     _std::exception_ptr::_Copy_exception_::_1_::dtor$0 @ 0x180305493 (_std--exception_ptr--_Copy_exception_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::dtor$0 @ 0x180306AE3 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$0 @ 0x180306FBB (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$0.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::dtor$0 @ 0x1803075D6 (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_1803075D6.c)
 *     _std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor$0 @ 0x180352AB1 (_std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
