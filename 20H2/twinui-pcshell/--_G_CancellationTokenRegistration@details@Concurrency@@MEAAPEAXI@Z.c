/*
 * XREFs of ??_G_CancellationTokenRegistration@details@Concurrency@@MEAAPEAXI@Z @ 0x180325300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ @ 0x180324614 (--1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ.c)
 */

Concurrency::details::_CancellationTokenRegistration *__fastcall Concurrency::details::_CancellationTokenRegistration::`scalar deleting destructor'(
        Concurrency::details::_CancellationTokenRegistration *this,
        char a2)
{
  Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
