/*
 * XREFs of ?SetOwningContext@WorkQueue@details@Concurrency@@QEAAXPEAVContextBase@23@@Z @ 0x180066E90
 * Callers:
 *     j_?SetOwningContext@WorkQueue@details@Concurrency@@QEAAXPEAVContextBase@23@@Z @ 0x18002ADB0 (j_-SetOwningContext@WorkQueue@details@Concurrency@@QEAAXPEAVContextBase@23@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::WorkQueue::SetOwningContext(
        Concurrency::details::WorkQueue *this,
        struct Concurrency::details::ContextBase *a2)
{
  *((_QWORD *)this + 19) = a2;
}
