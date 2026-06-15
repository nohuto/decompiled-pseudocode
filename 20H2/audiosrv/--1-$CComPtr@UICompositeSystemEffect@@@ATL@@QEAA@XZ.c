/*
 * XREFs of ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x180020B48
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E2D0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023510 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$115 @ 0x180077C00 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$115.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$0 @ 0x180077D80 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$0.c)
 *     _CreateSaDevice_::_1_::dtor$242 @ 0x180078FF0 (_CreateSaDevice_--_1_--dtor$242.c)
 *     __lambda_6391a63ce46c606b78be3aee92140f1a_::operator()_::_1_::dtor$2 @ 0x1801199FB (__lambda_6391a63ce46c606b78be3aee92140f1a_--operator()_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$2 @ 0x1801233E4 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
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
