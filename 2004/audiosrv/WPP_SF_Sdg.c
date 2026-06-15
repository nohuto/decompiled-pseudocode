/*
 * XREFs of WPP_SF_Sdg @ 0x1800C2F88
 * Callers:
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800C14C8 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CB430 (-SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800CC500 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CCC30 (-SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Sdg(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
