/*
 * XREFs of ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x180324768
 * Callers:
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$4 @ 0x1803225AC (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$4.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$5 @ 0x1803225D9 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$5.c)
 *     _Concurrency::create_task_Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$1 @ 0x18032370A (_Concurrency--create_task_Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$1.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$1 @ 0x180323A93 (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_CancelWithException_::_1_::dtor$0 @ 0x1803262E8 (_Concurrency--details--_Task_impl_base--_CancelWithException_--_1_--dtor$0.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$8 @ 0x180326C82 (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$8.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$47 @ 0x180326C8E (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$47.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this)
{
  std::vector<void *>::_Tidy((__int64)this + 8);
}
