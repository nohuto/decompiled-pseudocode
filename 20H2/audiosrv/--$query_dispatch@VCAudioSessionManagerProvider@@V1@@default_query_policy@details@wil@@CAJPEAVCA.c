/*
 * XREFs of ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D0A20
 * Callers:
 *     GetAudioSessionManager @ 0x1800115A0 (GetAudioSessionManager.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014200 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016E00 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     VADServerUserSessionChanged @ 0x18002A948 (VADServerUserSessionChanged.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002AEC8 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ??$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManager@@PEAPEAV3@@Z @ 0x1800D0A10 (--$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManage.c)
 *     ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800D13F0 (-TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C40D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjec.c)
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
