/*
 * XREFs of ??1_CancellationTokenRegistration@details@Concurrency@@MEAA@XZ @ 0x180324614
 * Callers:
 *     ??_G?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@UEAAPEAXI@Z @ 0x180325130 (--_G-$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrenc.c)
 *     ??_G_CancellationTokenRegistration@details@Concurrency@@MEAAPEAXI@Z @ 0x180325300 (--_G_CancellationTokenRegistration@details@Concurrency@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_CancellationTokenRegistration::~_CancellationTokenRegistration(
        Concurrency::details::_CancellationTokenRegistration *this)
{
  *(_QWORD *)this = &Concurrency::details::_CancellationTokenRegistration::`vftable';
  _Mtx_destroy_in_situ((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 96));
  _Cnd_destroy_in_situ((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 24));
  *(_QWORD *)this = &Concurrency::details::_RefCounter::`vftable';
}
