/*
 * XREFs of ?GetExecutingCollection@ContextBase@details@Concurrency@@QEAAPEAV_TaskCollectionBase@23@XZ @ 0x18004D0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::details::_TaskCollectionBase *__fastcall Concurrency::details::ContextBase::GetExecutingCollection(
        Concurrency::details::ContextBase *this)
{
  return (struct Concurrency::details::_TaskCollectionBase *)*((_QWORD *)this + 12);
}
