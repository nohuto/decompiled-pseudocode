/*
 * XREFs of _Win32kInterop::ProcessCursorPosMessage_::_1_::dtor$0 @ 0x1800B1320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessCursorPosMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>((__int64 *)(a2 + 80));
}
