/*
 * XREFs of _CMonitor::OnDeviceDescriptionChanged_::_1_::dtor$1 @ 0x180102DC1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::OnDeviceDescriptionChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
