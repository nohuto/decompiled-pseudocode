/*
 * XREFs of _InputConfigContextProvider::Create_::_1_::dtor$1 @ 0x1800501FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputConfigContextProvider::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 136));
}
