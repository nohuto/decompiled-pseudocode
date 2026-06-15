/*
 * XREFs of wil::details::lambda_call__lambda_bbdff0f9e56ce04dce37b163b467892b___::_lambda_call__lambda_bbdff0f9e56ce04dce37b163b467892b___ @ 0x180072744
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048918 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$5 @ 0x18007C695 (_CEndpointCharacteristics--SetDeviceFormatAndSpatialSettings_--_1_--dtor$5.c)
 * Callees:
 *     _lambda_bbdff0f9e56ce04dce37b163b467892b_::operator() @ 0x1800727B4 (_lambda_bbdff0f9e56ce04dce37b163b467892b_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_bbdff0f9e56ce04dce37b163b467892b___::_lambda_call__lambda_bbdff0f9e56ce04dce37b163b467892b___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_bbdff0f9e56ce04dce37b163b467892b_::operator()();
  }
  return result;
}
