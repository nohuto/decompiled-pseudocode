/*
 * XREFs of wil::details::lambda_call__lambda_c945414f02df0a9eff317fd834a02709___::_lambda_call__lambda_c945414f02df0a9eff317fd834a02709___ @ 0x180072764
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800491B4 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$3 @ 0x18007C791 (_CEndpointCharacteristics--SetDeviceFormatSwAudioEngine_--_1_--dtor$3.c)
 * Callees:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CAE4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_c945414f02df0a9eff317fd834a02709___::_lambda_call__lambda_c945414f02df0a9eff317fd834a02709___(
        __int64 a1)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                *(const unsigned __int16 ***)a1,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)**(_DWORD **)(a1 + 8),
                **(const struct tWAVEFORMATEX ***)(a1 + 16));
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        8512LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
  }
}
