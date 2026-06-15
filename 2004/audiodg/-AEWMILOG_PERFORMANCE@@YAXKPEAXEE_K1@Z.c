/*
 * XREFs of ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x140065008
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003B3E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 */

void __fastcall AEWMILOG_PERFORMANCE(__int64 a1, void *a2, __int64 a3, char a4)
{
  _WORD v5[2]; // [rsp+20h] [rbp-58h] BYREF
  char v6; // [rsp+24h] [rbp-54h]
  char v7; // [rsp+25h] [rbp-53h]
  __int128 v8; // [rsp+38h] [rbp-40h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]
  __int64 v13; // [rsp+68h] [rbp-10h]

  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v5, 0, 0x40uLL);
    v9 = 0x20000;
    v5[0] = 80;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v8 = AEWMIGUID_PERFORMANCE;
    v7 = 4;
    v6 = a4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v5);
  }
}
