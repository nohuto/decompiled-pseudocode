/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004810C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180048A40 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049280 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18005AABC (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_7a4aa03cdf3c75c0f652933ca8714d6d_::operator() @ 0x180071DF4 (_lambda_7a4aa03cdf3c75c0f652933ca8714d6d_--operator().c)
 *     wil::details::lambda_call__lambda_1407b965f3d07141f3c1458da523640a___::_lambda_call__lambda_1407b965f3d07141f3c1458da523640a___ @ 0x180118AF4 (wil--details--lambda_call__lambda_1407b965f3d07141f3c1458da523640a___--_lambda_call__lambda_1407.c)
 *     wil::details::lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___::_lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___ @ 0x180118BCC (wil--details--lambda_call__lambda_931ae1010aada9b89c18ea50a383ed88___--_lambda_call__lambda_931a.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011EB40 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180012680 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ClearMixFormatCache(*(struct IPropertyStore **)(a1 + 40), a2 <= 1, (a2 & 0xFFFFFFFD) == 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B91,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
