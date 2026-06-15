/*
 * XREFs of _PhoneCallAudio::OnPhoneCallEndTimeout_::_1_::dtor$0 @ 0x1801103B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::OnPhoneCallEndTimeout_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
