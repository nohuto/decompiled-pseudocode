/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x180048CB0
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048918 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_bbdff0f9e56ce04dce37b163b467892b_::operator() @ 0x1800727B4 (_lambda_bbdff0f9e56ce04dce37b163b467892b_--operator().c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002782C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004A220 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180126708 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        const unsigned __int16 **this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rdx
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
    v10 = 7135LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v11);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v10 = 7136LL;
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 47) )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 221), this[3]);
    return 0LL;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
    (CEndpointCharacteristics *)this,
    &v13,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
  v20 = 0;
  *(_QWORD *)v14 = this;
  v6 = *(_QWORD *)g_policyConfigInternal;
  *(struct _GUID *)&v14[8] = v13;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(v6 + 48))(g_policyConfigInternal, &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = off_180155CB8;
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
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BF9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7,
    v11);
  return v8;
}
