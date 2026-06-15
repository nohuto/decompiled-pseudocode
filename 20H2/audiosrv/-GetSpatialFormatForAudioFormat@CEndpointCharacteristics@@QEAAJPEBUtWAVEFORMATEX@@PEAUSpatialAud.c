/*
 * XREFs of ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180048630
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800271AC (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x18004A0B0 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSpatialFormatForAudioFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct SpatialAudioSettings *a3)
{
  int v4; // edi
  bool v6; // zf
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rax
  int SpatialFormatForAudioFormat; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+28h] [rbp-39h]
  struct _GUID v14; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-9h]
  __int64 v16; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+27h]
  __int64 *v19; // [rsp+A8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v4 = (int)a2;
  if ( !a2 )
  {
    v12 = 7244LL;
LABEL_7:
    SpatialFormatForAudioFormat = -2147467261;
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v12 = 7245LL;
    goto LABEL_7;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
    this,
    &v14,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3);
  v6 = *((_DWORD *)this + 47) == 0;
  v16 = (__int64)off_180154CE8;
  *(struct _GUID *)&v15[8] = v14;
  v7 = *((_QWORD *)this + 3);
  LOBYTE(v8) = !v6;
  v19 = &v16;
  v9 = *((_QWORD *)this + 5);
  *(_QWORD *)v15 = this;
  v18 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v15[8], *(__m128d *)&v15[8]);
  v17 = *(_OWORD *)v15;
  SpatialFormatForAudioFormat = CSpatialProperties::GetSpatialFormatForAudioFormat(
                                  (int)this + 1768,
                                  v7,
                                  v8,
                                  v4,
                                  v9,
                                  (__int64)&v16,
                                  a3);
  if ( SpatialFormatForAudioFormat >= 0 )
    return 0LL;
  v12 = 7271LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)SpatialFormatForAudioFormat,
    v13);
  return (unsigned int)SpatialFormatForAudioFormat;
}
