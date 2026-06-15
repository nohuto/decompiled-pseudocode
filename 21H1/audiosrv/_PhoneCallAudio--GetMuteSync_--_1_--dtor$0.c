/*
 * XREFs of _PhoneCallAudio::GetMuteSync_::_1_::dtor$0 @ 0x18010FF3F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::GetMuteSync_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
