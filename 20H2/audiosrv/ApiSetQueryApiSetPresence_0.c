/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x18006C9E0
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x18006C078 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x18006C1F4 (IsWTSQuerySessionInformationWPresent.c)
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x18006C2E8 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
