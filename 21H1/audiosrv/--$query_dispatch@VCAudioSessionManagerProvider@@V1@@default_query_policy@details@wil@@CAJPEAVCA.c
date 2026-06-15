/*
 * XREFs of ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D15F0
 * Callers:
 *     GetAudioSessionManager @ 0x180011AE0 (GetAudioSessionManager.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     VADServerUserSessionChanged @ 0x18002AFC8 (VADServerUserSessionChanged.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B548 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ??$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManager@@PEAPEAV3@@Z @ 0x1800D15E0 (--$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManage.c)
 *     ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800D1FC0 (-TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C4C70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjec.c)
 */

__int64 __fastcall wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        __int64 a1,
        volatile int *a2,
        __int64 *a3)
{
  *a3 = a1;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::AddRef(
    a1,
    a2);
  return 0LL;
}
