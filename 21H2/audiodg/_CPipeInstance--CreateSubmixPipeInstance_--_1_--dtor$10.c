/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x14002D340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(a2 + 128);
}
