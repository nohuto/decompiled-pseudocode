/*
 * XREFs of _PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor$1 @ 0x18010F738
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::OnEndpointDeviceRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
