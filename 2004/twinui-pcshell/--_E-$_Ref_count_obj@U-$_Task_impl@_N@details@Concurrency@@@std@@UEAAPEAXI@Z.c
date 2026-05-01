/*
 * XREFs of ??_E?$_Ref_count_obj@U?$_Task_impl@_N@details@Concurrency@@@std@@UEAAPEAXI@Z @ 0x180325B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<Concurrency::details::_Task_impl<bool>>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1C8);
  return a1;
}
