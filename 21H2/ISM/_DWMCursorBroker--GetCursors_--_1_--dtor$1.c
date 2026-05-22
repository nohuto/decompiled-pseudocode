/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$1 @ 0x18004E72F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(a2 + 80);
}
