/*
 * XREFs of ??_E?$_Task_impl@E@details@Concurrency@@UEAAPEAXI@Z @ 0x180325B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_Task_impl@E@details@Concurrency@@UEAA@XZ @ 0x180324E04 (--1-$_Task_impl@E@details@Concurrency@@UEAA@XZ.c)
 */

Concurrency::details::_Task_impl_base *__fastcall Concurrency::details::_Task_impl<unsigned char>::`vector deleting destructor'(
        Concurrency::details::_Task_impl_base *a1,
        char a2)
{
  Concurrency::details::_Task_impl<unsigned char>::~_Task_impl<unsigned char>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B8);
  return a1;
}
