/*
 * XREFs of MIDL_user_allocate @ 0x180045D10
 * Callers:
 *     PolicyConfigGetDeviceFormat @ 0x1800528C0 (PolicyConfigGetDeviceFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x1800BD760 (s_sndevtResolveSoundAlias.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8590 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8740 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8840 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8900 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8DB0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CF7C0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800CFD00 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800D9A20 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x1800D9E10 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetMixFormat @ 0x1800DA010 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE850 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DED60 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     asm_AudioServerGetApplicationSubmixFormat @ 0x1800F2320 (asm_AudioServerGetApplicationSubmixFormat.c)
 *     asm_GetApplicationSubmixes @ 0x1800F2B00 (asm_GetApplicationSubmixes.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size > 0x40000 )
    return 0LL;
  else
    return operator new[](size, (const struct std::nothrow_t *)&std::nothrow);
}
