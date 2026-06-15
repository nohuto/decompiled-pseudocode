/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18011C5AC
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048908 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002782C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801265B0 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAudioFormatForSpatialFormat(
        CEndpointCharacteristics *this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX *a4,
        struct WAVEFORMATEXTENSIBLE *a5,
        bool *a6)
{
  int v8; // r15d
  __int64 v10; // rdx
  int AudioFormatForSpatialFormat; // ebx
  struct WAVEFORMATEXTENSIBLE *v13; // rsi
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  bool v17; // zf
  struct _GUID v18; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v19[24]; // [rsp+70h] [rbp-39h]
  __int64 v20; // [rsp+88h] [rbp-21h] BYREF
  __int128 v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+A0h] [rbp-9h]
  __int64 *v23; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]
  __int64 v25; // [rsp+108h] [rbp+5Fh] BYREF

  v8 = (int)a2;
  if ( !a2 )
  {
    v10 = 7196LL;
LABEL_3:
    AudioFormatForSpatialFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)AudioFormatForSpatialFormat);
    return (unsigned int)AudioFormatForSpatialFormat;
  }
  if ( !a3 )
  {
    v10 = 7197LL;
    goto LABEL_3;
  }
  v13 = a5;
  if ( !a5 )
  {
    v10 = 7198LL;
    goto LABEL_3;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
    this,
    &v18,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
  LOBYTE(v25) = 0;
  *(_QWORD *)v19 = this;
  v14 = *(_QWORD *)g_policyConfigInternal;
  *(struct _GUID *)&v19[8] = v18;
  AudioFormatForSpatialFormat = (*(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 48))(g_policyConfigInternal, &v25);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 7221LL;
    goto LABEL_4;
  }
  v16 = *((_QWORD *)this + 5);
  v17 = *((_DWORD *)this + 47) == 0;
  v20 = (__int64)off_180156C28;
  LOBYTE(v15) = !v17;
  v22 = *(_QWORD *)&v19[16];
  v23 = &v20;
  v21 = *(_OWORD *)v19;
  AudioFormatForSpatialFormat = CSpatialProperties::GetAudioFormatForSpatialFormat(
                                  (int)this + 1768,
                                  (int)this,
                                  v15,
                                  v8,
                                  a4,
                                  (__int64)a3,
                                  v16,
                                  (__int64)&v25,
                                  (__int64)&v20,
                                  &v13->Format,
                                  (__int64)a6);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 7228LL;
    goto LABEL_4;
  }
  return 0LL;
}
