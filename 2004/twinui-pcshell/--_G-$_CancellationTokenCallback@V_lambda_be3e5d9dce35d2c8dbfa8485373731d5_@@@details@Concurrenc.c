/*
 * XREFs of ??_G?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@UEAAPEAXI@Z @ 0x180325A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0750 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ @ 0x180324F04 (--1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ.c)
 */

Concurrency::details::_CancellationTokenRegistration *__fastcall Concurrency::details::_CancellationTokenCallback<_lambda_be3e5d9dce35d2c8dbfa8485373731d5_>::`scalar deleting destructor'(
        Concurrency::details::_CancellationTokenRegistration *this,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 25);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
  Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
