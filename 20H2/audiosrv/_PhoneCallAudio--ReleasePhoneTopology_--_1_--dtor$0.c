/*
 * XREFs of _PhoneCallAudio::ReleasePhoneTopology_::_1_::dtor$0 @ 0x18010FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::ReleasePhoneTopology_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
