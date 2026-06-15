/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x180068530
 * Callers:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002F11C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180068500 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180068510 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180068520 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C9D60 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800CA4F0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x1800CB0D0 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::Release(CUnknown *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(CUnknown *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
