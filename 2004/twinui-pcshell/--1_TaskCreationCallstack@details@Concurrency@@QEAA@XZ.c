/*
 * XREFs of ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x180325058
 * Callers:
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$4 @ 0x180322E9C (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$4.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$5 @ 0x180322EC9 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$5.c)
 *     _Concurrency::create_task_Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$1 @ 0x180323FFA (_Concurrency--create_task_Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$1.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$1 @ 0x180324383 (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_CancelWithException_::_1_::dtor$0 @ 0x180326C08 (_Concurrency--details--_Task_impl_base--_CancelWithException_--_1_--dtor$0.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$8 @ 0x1803275A2 (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$8.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$47 @ 0x1803275AE (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$47.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this)
{
  std::vector<void *>::_Tidy((__int64)this + 8);
}
