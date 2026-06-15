/*
 * XREFs of __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x18006D01C
 * Callers:
 *     __imp_load_IsVirtualSurroundAllowedForProcess @ 0x18006D010 (__imp_load_IsVirtualSurroundAllowedForProcess.c)
 *     __imp_load_IsSpatialAllowedOnPlatform @ 0x18006D09B (__imp_load_IsSpatialAllowedOnPlatform.c)
 *     __imp_load_IsVirtualSurroundAllowedOnCurrentPlatform @ 0x18006D0AD (__imp_load_IsVirtualSurroundAllowedOnCurrentPlatform.c)
 *     __imp_load_IsDolbyMatSupportedByAudioDriver @ 0x18006D0BF (__imp_load_IsDolbyMatSupportedByAudioDriver.c)
 *     __imp_load_IsSpatialSpeakerProtectionCheckRequired @ 0x18006D0D1 (__imp_load_IsSpatialSpeakerProtectionCheckRequired.c)
 *     __imp_load_GetDefaultSpatialSettingsForEndpoint @ 0x18006D0E3 (__imp_load_GetDefaultSpatialSettingsForEndpoint.c)
 *     __imp_load_GetDefaultSpatialRenderingMode @ 0x18006D0F5 (__imp_load_GetDefaultSpatialRenderingMode.c)
 *     __imp_load_TryGetHrtfProcessingLimits @ 0x18006D107 (__imp_load_TryGetHrtfProcessingLimits.c)
 *     __imp_load_IsDolbyLicenseCheckSkippedOnCurrentPlatform @ 0x18006D5C5 (__imp_load_IsDolbyLicenseCheckSkippedOnCurrentPlatform.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046E80 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_audiocore_spatial_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
