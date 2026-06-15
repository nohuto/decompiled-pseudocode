/*
 * XREFs of ?OnNotify@_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800340F0
 * Callers:
 *     <none>
 * Callees:
 *     _o_log10_0 @ 0x18004005C (_o_log10_0.c)
 */

__int64 __fastcall CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::OnNotify(
        CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  float fMasterVolume; // xmm0_4
  double v5; // xmm0_8
  float v6; // xmm1_4

  if ( *(_OWORD *)&a2->guidEventContext != __PAIR128__(0x5936EC8617E85EAALL, PBM_INITIATED_ENDPOINT_VOLUME_CHANGE) )
  {
    fMasterVolume = a2->fMasterVolume;
    if ( fMasterVolume <= 0.0 )
      v5 = o_log10_0(0.0);
    else
      v5 = o_log10_0(fMasterVolume) * 20.0;
    v6 = v5;
    if ( v6 != 0.0 )
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 12LL), 1);
    if ( a2->bMuted )
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 16LL), 1);
  }
  return 0LL;
}
