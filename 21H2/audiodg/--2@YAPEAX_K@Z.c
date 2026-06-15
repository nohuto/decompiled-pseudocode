/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x14001CC68
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001F1C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002028 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000AEE0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA30 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C680 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA10 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011E44 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011F64 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400121F0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012300 (-CreateInstance@-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012490 (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400127B4 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140018440 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001CCB4 (--_U@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B018 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003DFDC (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400426D4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAX.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140042810 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEB.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140044C2C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEB.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400454B4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140045640 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAX.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400469CC (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046E24 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140048040 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x140048540 (-Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z.c)
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400485C0 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14004C4FC (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004DEE4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004E018 (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F73C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051BC8 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CD94 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SA.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CED0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@S.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D00C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SA.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D148 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@S.c)
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140061340 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400660E4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@.c)
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140066220 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@.c)
 *     ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x1400673FC (--0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 *     ??$_Setp@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@AEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@U?$integral_constant@_N$0A@@1@@Z @ 0x140068938 (--$_Setp@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 *     ??$make_unique@VSpatialBlock@@$$V$0A@@std@@YA?AV?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@0@XZ @ 0x1400689C0 (--$make_unique@VSpatialBlock@@$$V$0A@@std@@YA-AV-$unique_ptr@VSpatialBlock@@U-$default_delete@VS.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14006BF20 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     _o__callnewh_0 @ 0x14001DE22 (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x14001DF00 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = o_malloc_0(Size);
    if ( v2 || !(unsigned int)o__callnewh_0(i) )
      break;
  }
  return v2;
}
