/*
 * XREFs of ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C7A90
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002F11C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C76E0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CAudioSession::Disconnect(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::Disconnect", 2183, v4);
  }
  else if ( *(_BYTE *)(a1 + 968) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)(a1 - 16));
  }
  return v5;
}
