/*
 * XREFs of ?SetExecutingCollection@ContextBase@details@Concurrency@@QEAAXPEAV_TaskCollectionBase@23@@Z @ 0x18008E818
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ContextBase::SetExecutingCollection(
        Concurrency::details::ContextBase *this,
        struct Concurrency::details::_TaskCollectionBase *a2)
{
  *((_QWORD *)this + 12) = a2;
}
