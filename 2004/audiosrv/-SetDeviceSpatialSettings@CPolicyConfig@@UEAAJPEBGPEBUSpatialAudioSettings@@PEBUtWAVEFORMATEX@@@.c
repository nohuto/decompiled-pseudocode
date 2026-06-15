/*
 * XREFs of ?SetDeviceSpatialSettings@CPolicyConfig@@UEAAJPEBGPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D8C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D8BC0 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDeviceSpatialSettings(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct SpatialAudioSettings *a3,
        WAVEFORMATEXTENSIBLE *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CPolicyConfig::SetDeviceFormatCommon(this, a2, a4, a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7CC,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
