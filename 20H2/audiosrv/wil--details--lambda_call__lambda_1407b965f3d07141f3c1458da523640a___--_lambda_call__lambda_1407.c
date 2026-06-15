/*
 * XREFs of wil::details::lambda_call__lambda_1407b965f3d07141f3c1458da523640a___::_lambda_call__lambda_1407b965f3d07141f3c1458da523640a___ @ 0x180118AF4
 * Callers:
 *     _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$0 @ 0x18007BDBF (_CEndpointCharacteristics--SetDeviceFormatSwAudioEngine_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004810C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_1407b965f3d07141f3c1458da523640a___::_lambda_call__lambda_1407b965f3d07141f3c1458da523640a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(*(_QWORD *)a1, 0);
  }
  return result;
}
