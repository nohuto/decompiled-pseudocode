/*
 * XREFs of ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDB4C
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C690 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18002FDD0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18004FBF0 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3F94 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-ReleaseAudioResourceHandle@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAAX_K@Z @ 0x1800E7B08 (-reset@-$unique_storage@U-$resource_policy@_KP6AX_K@Z$1-ReleaseAudioResourceHandle@@YAX0@ZU-$int.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB68C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800EE318 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180141E60 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 *     ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x180143DD0 (--_GTelephonyControllerCallInstance@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReleaseAudioResourceHandle(__int64 a1)
{
  (*(void (__fastcall **)(struct IAudioResourceManager *, __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
    g_AudioResourceManager,
    a1);
}
