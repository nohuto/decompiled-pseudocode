/*
 * XREFs of _CMonitor::OnDeviceIconChanged_::_1_::dtor$1 @ 0x18010238E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::OnDeviceIconChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
