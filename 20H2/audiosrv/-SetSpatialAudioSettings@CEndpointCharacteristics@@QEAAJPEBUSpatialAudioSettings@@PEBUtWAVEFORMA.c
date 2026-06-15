/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x1800484E0
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_7a4aa03cdf3c75c0f652933ca8714d6d_::operator() @ 0x180071DF4 (_lambda_7a4aa03cdf3c75c0f652933ca8714d6d_--operator().c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800271AC (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180049AAC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18004D730 (-MarkSystemEffectsForResolution@CEndpointCharacteristics@@AEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180125728 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        const unsigned __int16 **this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v6; // rdx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // [rsp+20h] [rbp-49h]
  __int64 v12; // [rsp+20h] [rbp-49h]
  struct _GUID v13; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v14[24]; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall **v15)(); // [rsp+68h] [rbp-1h] BYREF
  __int128 v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+80h] [rbp+17h]
  __int64 (__fastcall ***v18)(); // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v3 = (int)a3;
  v4 = (int)a2;
  if ( !a2 )
  {
    v6 = 7135LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v11);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v6 = 7136LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 47) )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 221), this[3]);
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
      (CEndpointCharacteristics *)this,
      &v13,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
    v20 = 0;
    *(_QWORD *)v14 = this;
    v8 = *(_QWORD *)g_policyConfigInternal;
    *(struct _GUID *)&v14[8] = v13;
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(v8 + 48))(g_policyConfigInternal, &v20);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BF9,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9,
        v11);
      return v10;
    }
    v15 = off_180154CB8;
    v17 = *(_QWORD *)&v14[16];
    v18 = &v15;
    v12 = (__int64)this[5];
    v16 = *(_OWORD *)v14;
    CSpatialProperties::SetSpatialAudioSettings(
      (_DWORD)this + 1768,
      (_DWORD)this,
      v4,
      v3,
      v12,
      (__int64)&v20,
      (__int64)&v15);
    CEndpointCharacteristics::MarkSystemEffectsForResolution(this, 14LL);
  }
  return 0LL;
}
