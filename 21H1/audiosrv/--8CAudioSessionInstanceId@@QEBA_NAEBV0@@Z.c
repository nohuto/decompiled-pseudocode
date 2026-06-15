/*
 * XREFs of ??8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z @ 0x18000581C
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004F70 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002BA80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800CFF64 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionInstanceId::operator==(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( (unsigned int)_o__wcsicmp(*(_QWORD *)a1, *(_QWORD *)a2) )
    return 0;
  v4 = *(_DWORD *)(a1 + 64);
  if ( v4 != *(_DWORD *)(a2 + 64) || !v4 && *(_DWORD *)(a1 + 56) != *(_DWORD *)(a2 + 56) )
    return 0;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 != *(_DWORD *)(a2 + 48) || !v5 && (unsigned int)_o__wcsicmp(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8)) )
    return 0;
  v6 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 32);
  return !v6;
}
