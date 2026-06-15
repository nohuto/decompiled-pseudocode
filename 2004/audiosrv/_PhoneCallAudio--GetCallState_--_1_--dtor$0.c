/*
 * XREFs of _PhoneCallAudio::GetCallState_::_1_::dtor$0 @ 0x18010FD0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::GetCallState_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
