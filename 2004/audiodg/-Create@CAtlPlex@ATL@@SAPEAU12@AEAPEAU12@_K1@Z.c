/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004160
 * Callers:
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x140004078 (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004C60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005700 (-OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005940 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400067D0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AB0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA20 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E150 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140035618 (-NewNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x14003573C (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?NewNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDisplayNode@@PEAV312@1@Z @ 0x140036DCC (-NewNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x14003E00C (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 *     ?NewNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140042248 (-NewNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 *     ?NewNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x1400457D8 (-NewNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 * Callees:
 *     <none>
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  struct ATL::CAtlPlex *result; // rax

  if ( a2 )
  {
    if ( a2 == 10 )
      v4 = 0x1999999999999999LL;
    else
      v4 = 0xFFFFFFFFFFFFFFFFuLL / a2;
    if ( v4 < a3 )
      return 0LL;
    v5 = a3 * a2;
  }
  else
  {
    v5 = 0LL;
  }
  if ( ~v5 >= 8 )
  {
    result = (struct ATL::CAtlPlex *)malloc(v5 + 8);
    if ( result )
    {
      *(_QWORD *)result = *a1;
      *a1 = result;
      return result;
    }
  }
  return 0LL;
}
