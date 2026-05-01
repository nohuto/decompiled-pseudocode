/*
 * XREFs of ??_G_Task_impl_base@details@Concurrency@@UEAAPEAXI@Z @ 0x180325D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_Task_impl_base@details@Concurrency@@UEAA@XZ @ 0x180325088 (--1_Task_impl_base@details@Concurrency@@UEAA@XZ.c)
 */

Concurrency::details::_Task_impl_base *__fastcall Concurrency::details::_Task_impl_base::`scalar deleting destructor'(
        Concurrency::details::_Task_impl_base *this,
        char a2)
{
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x170);
  return this;
}
