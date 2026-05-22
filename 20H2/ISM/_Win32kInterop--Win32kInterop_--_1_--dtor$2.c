/*
 * XREFs of _Win32kInterop::Win32kInterop_::_1_::dtor$2 @ 0x18004E4F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::Win32kInterop_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(*(_QWORD *)(a2 + 80) + 48LL);
}
