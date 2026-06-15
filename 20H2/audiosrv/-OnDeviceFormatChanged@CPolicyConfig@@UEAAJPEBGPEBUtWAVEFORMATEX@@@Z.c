/*
 * XREFs of ?OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z @ 0x1800476C0
 * Callers:
 *     <none>
 * Callees:
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x18006C2E8 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 */

__int64 __fastcall CPolicyConfig::OnDeviceFormatChanged(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3)
{
  if ( (unsigned __int8)IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent(this) )
    AudioPolicyManagerExtension_OnDeviceFormatChanged(a2, a3);
  return 0LL;
}
