/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002E030
 * Callers:
 *     <none>
 * Callees:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002E0B0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002EA9C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180050DB0 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  CAudioSession::NewState(this, a2);
  if ( a2 == AudioSessionStateExpired )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    if ( *((_BYTE *)this + 984) )
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, this);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32, 1LL);
  }
}
