/*
 * XREFs of ??1cancellation_token@Concurrency@@QEAA@XZ @ 0x1803035B8
 * Callers:
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$3 @ 0x1803012F0 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$3.c)
 * Callees:
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180306414 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

void __fastcall Concurrency::cancellation_token::~cancellation_token(Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter *v2; // rcx

  v2 = *this;
  if ( v2 )
    Concurrency::details::_RefCounter::_Release(v2);
  *this = 0LL;
}
