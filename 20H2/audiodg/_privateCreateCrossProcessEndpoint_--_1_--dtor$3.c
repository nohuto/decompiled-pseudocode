/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x14002D702
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CCrossProcessClientOutputEndpoint::operator delete(*(void **)(a2 + 32));
}
