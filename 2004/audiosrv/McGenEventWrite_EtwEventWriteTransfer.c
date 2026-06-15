/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x18000FC40
 * Callers:
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180002D80 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     AudioServerIsFormatSupported @ 0x18000D070 (AudioServerIsFormatSupported.c)
 *     AudioServerGetMixFormat @ 0x180012120 (AudioServerGetMixFormat.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013280 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800319A0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     McTemplateU0z_EtwEventWriteTransfer @ 0x1800677E4 (McTemplateU0z_EtwEventWriteTransfer.c)
 *     McTemplateU0zd_EtwEventWriteTransfer @ 0x18006786C (McTemplateU0zd_EtwEventWriteTransfer.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800BBF8C (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___ @ 0x1800DB554 (wil--details--lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___--_lambda_call__lambda_c61a.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x1800E29E0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800E2A3C (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB74C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x180100A28 (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x180105394 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_18019D438;
  v6 = 0;
  if ( qword_18019D438 )
  {
    *(_QWORD *)a5 = qword_18019D438;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL);
}
