/*
 * XREFs of ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004C2A4
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180010B80 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18004BBC0 (std--_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800598D0 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180066070 (std--_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATE_ea_180066070.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x18011993C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A6EC (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18011A888 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18011B3C0 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011F284 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x18011FA6C (-SerializeProcessingModeCharacteristics@@YAJPEAV-$CSimpleArray@PEAVCConnectorProcessingModeChara.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180120084 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180123020 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x180123280 (-GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180123300 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1801236F0 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    JUMPOUT(0x18004C2CBLL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
