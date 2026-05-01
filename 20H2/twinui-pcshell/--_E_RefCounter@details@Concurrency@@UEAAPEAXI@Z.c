/*
 * XREFs of ??_E_RefCounter@details@Concurrency@@UEAAPEAXI@Z @ 0x1803253B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Concurrency::details::_RefCounter *__fastcall Concurrency::details::_RefCounter::`vector deleting destructor'(
        Concurrency::details::_RefCounter *this,
        char a2)
{
  *(_QWORD *)this = &Concurrency::details::_RefCounter::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
