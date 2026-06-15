/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180046EE0
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800C9EE0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_::operator() @ 0x18006D9C0 (_lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_--operator().c)
 */

__int64 __fastcall CAudioSession::RecalculateSessionVolume(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = a1 - 16;
  v6[1] = &v8;
  v6[2] = &a5;
  v6[3] = &v7;
  v6[4] = &v9;
  return lambda_4ee4a630d91b577e4d31f4c6e0d18ad2_::operator()(v6);
}
