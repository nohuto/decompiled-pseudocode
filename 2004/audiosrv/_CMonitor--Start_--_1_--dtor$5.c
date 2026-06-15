/*
 * XREFs of _CMonitor::Start_::_1_::dtor$5 @ 0x180104D15
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::Start_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 88));
}
