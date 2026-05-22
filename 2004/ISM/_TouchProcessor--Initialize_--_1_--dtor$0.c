/*
 * XREFs of _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x180199366
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchProcessor::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 48));
}
