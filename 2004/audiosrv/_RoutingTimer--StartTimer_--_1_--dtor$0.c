/*
 * XREFs of _RoutingTimer::StartTimer_::_1_::dtor$0 @ 0x180111247
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RoutingTimer::StartTimer_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
