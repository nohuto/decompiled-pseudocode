/*
 * XREFs of _MouseProcessor::MouseProcessor_::_1_::dtor$1 @ 0x18004E72C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::MouseProcessor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(*(_QWORD *)(a2 + 48) + 112LL);
}
