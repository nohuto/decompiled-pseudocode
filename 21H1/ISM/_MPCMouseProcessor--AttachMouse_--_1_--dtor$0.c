/*
 * XREFs of _MPCMouseProcessor::AttachMouse_::_1_::dtor$0 @ 0x18004E2DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::AttachMouse_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(a2 + 144);
}
