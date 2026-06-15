/*
 * XREFs of ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800C6D84
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x1800C70C4 (--_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(CPerEndpointVolumeAudioSession *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CPerEndpointVolumeAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerEndpointVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 123) = &CPerEndpointVolumeAudioSession::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
      this);
  }
  v2 = *((_QWORD *)this + 129);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
  CAudioSession::~CAudioSession(this);
}
