/*
 * XREFs of ??1_TaskWorkItemRAIILogger@details@Concurrency@@QEAA@XZ @ 0x180325068
 * Callers:
 *     _Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync_::_LogWorkItemAndInvokeUserLambda_std::function_unsigned_char___cdecl(Concurrency::task_bool_)__Concurrency::task_bool____::_1_::dtor$0 @ 0x180323CB0 (_Concurrency--task_bool_--_ContinuationTaskHandle_bool_void_std--function_void___cdecl(Concurren.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskWorkItemRAIILogger::~_TaskWorkItemRAIILogger(
        Concurrency::details::_TaskEventLogger **this)
{
  Concurrency::details::_TaskEventLogger::_LogWorkItemCompleted(*this);
}
