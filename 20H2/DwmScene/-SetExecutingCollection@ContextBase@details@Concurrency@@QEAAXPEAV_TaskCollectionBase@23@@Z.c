/*
 * XREFs of ?SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z @ 0x180088F48
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ContextBase::SetExecutingCollection(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *a2)
{
  *((_QWORD *)this + 12) = a2;
}
