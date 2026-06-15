/*
 * XREFs of ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x1800211C8
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$115 @ 0x1800786C0 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$115.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$0 @ 0x180078840 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$0.c)
 *     _CreateSaDevice_::_1_::dtor$242 @ 0x180079AB0 (_CreateSaDevice_--_1_--dtor$242.c)
 *     __lambda_6391a63ce46c606b78be3aee92140f1a_::operator()_::_1_::dtor$2 @ 0x18011A68B (__lambda_6391a63ce46c606b78be3aee92140f1a_--operator()_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$2 @ 0x180124074 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
