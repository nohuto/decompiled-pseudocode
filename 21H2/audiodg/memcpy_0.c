/*
 * XREFs of memcpy_0 @ 0x140029E1F
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002190 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140003220 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x1400036C4 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudi.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400038C8 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1400039B8 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005970 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006040 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14000AA70 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x14000B6C0 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD10 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C680 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400156E0 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140015D2C (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14001ABC0 (-GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14001AE00 (-GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     memcpy_s @ 0x1400289E0 (memcpy_s.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400292D0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossPr.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14003CF1C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x1400411C0 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     AudioDGGetStreamVpoDescription @ 0x14004B6F0 (AudioDGGetStreamVpoDescription.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140053558 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140060CD0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140063980 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x140063D90 (-AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFF.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140064760 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006A37C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14006CFF0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
