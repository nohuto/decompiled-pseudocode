/*
 * XREFs of MIDL_user_allocate @ 0x180045D00
 * Callers:
 *     PolicyConfigGetDeviceFormat @ 0x1800529C0 (PolicyConfigGetDeviceFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x1800BD850 (s_sndevtResolveSoundAlias.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8680 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8830 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8930 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C89F0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8EA0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CF880 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800CFDC0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800D9AE0 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x1800D9ED0 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetMixFormat @ 0x1800DA0D0 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE910 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DEE20 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     asm_AudioServerGetApplicationSubmixFormat @ 0x1800F23E0 (asm_AudioServerGetApplicationSubmixFormat.c)
 *     asm_GetApplicationSubmixes @ 0x1800F2BC0 (asm_GetApplicationSubmixes.c)
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
