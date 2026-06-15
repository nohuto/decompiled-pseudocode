/*
 * XREFs of wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x1800E1F84
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     _DeriveDeviceGraphFormatsForStream_::_1_::dtor$12 @ 0x180077450 (_DeriveDeviceGraphFormatsForStream_--_1_--dtor$12.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::dtor$5 @ 0x18007ADF9 (_EndpointDevice--InitAdapterInformation_--_1_--dtor$5.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$5 @ 0x1800E25CE (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetAvailableConnectorCount_::_1_::dtor$1 @ 0x18011C842 (_CEndpointCharacteristics--GetAvailableConnectorCount_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UpdateAPOEnableStatus_::_1_::dtor$0 @ 0x180120762 (_CEndpointCharacteristics--UpdateAPOEnableStatus_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x180132A6A (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x180132A82 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
