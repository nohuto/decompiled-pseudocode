/*
 * XREFs of ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x180110420
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18010F74C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 */

void __fastcall PhoneCallEndTimer::TimerCallback(PhoneCallEndTimer *this, PhoneCallAudio *a2)
{
  if ( a2 )
    PhoneCallAudio::OnPhoneCallEndTimeout(a2);
}
