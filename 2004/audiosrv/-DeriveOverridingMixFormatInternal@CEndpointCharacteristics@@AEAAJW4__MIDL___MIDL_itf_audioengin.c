/*
 * XREFs of ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180049ECC
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049A40 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180049F60 (-CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18004A07C (-CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::DeriveOverridingMixFormatInternal(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct IAudioMediaType *a4)
{
  struct IAudioMediaType *v7; // rbx
  const struct tWAVEFORMATEX *v8; // rax
  struct _GUID v10; // [rsp+30h] [rbp-18h] BYREF
  struct IAudioMediaType *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = *a3;
  CEndpointCharacteristics::CheckForPreferredStreamFormat(this, &v10, a2, a4, &v11);
  v7 = v11;
  if ( v11 )
    v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->GetAudioFormat)(v11);
  else
    v8 = 0LL;
  v10 = *a3;
  CEndpointCharacteristics::CacheOverridingMixFormat(this, a2, &v10, v8);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
  return 0LL;
}
