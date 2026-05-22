/*
 * XREFs of _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x18004EABE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AugmentedInputDeviceCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 88));
}
