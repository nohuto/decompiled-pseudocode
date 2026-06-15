/*
 * XREFs of ?GetDeviceFormatForConnector@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800D6F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x1800527C0 (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormatForConnector(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        int a4,
        struct tWAVEFORMATEX **a5)
{
  int DeviceFormatHelper; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DeviceFormatHelper = CPolicyConfig::GetDeviceFormatHelper(this, a2, a3, a4, a5, 0LL, 0LL, 0LL);
  v6 = DeviceFormatHelper;
  if ( DeviceFormatHelper >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x767,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)DeviceFormatHelper);
  return v6;
}
