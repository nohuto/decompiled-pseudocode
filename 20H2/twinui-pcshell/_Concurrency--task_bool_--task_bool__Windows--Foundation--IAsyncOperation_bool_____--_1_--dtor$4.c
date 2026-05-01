/*
 * XREFs of _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$4 @ 0x1803225AC
 * Callers:
 *     <none>
 * Callees:
 *     ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x180324768 (--1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~1u;
    Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack((Concurrency::details::_TaskCreationCallstack *)(a2 + 88));
  }
}
