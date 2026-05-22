/*
 * XREFs of _DragNDropProcessorLegacy::Create_::_1_::dtor$1 @ 0x1801749E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragNDropProcessorLegacy::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 64));
}
