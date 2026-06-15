/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004C694
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004C394 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058790 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800271AC (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004C758 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180125728 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

void __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        const unsigned __int16 **this,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  struct _GUID v6; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v7[24]; // [rsp+48h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+27h]
  __int64 *v11; // [rsp+98h] [rbp+47h]

  if ( *((_DWORD *)this + 47) || !a4 || a3 )
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 221), this[3]);
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
      (CEndpointCharacteristics *)this,
      &v6,
      eHostProcessConnector);
    v8 = (__int64)off_180154D18;
    *(struct _GUID *)&v7[8] = v6;
    *(_QWORD *)v7 = this;
    v11 = &v8;
    v9 = *(_OWORD *)v7;
    v10 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v7[8], *(__m128d *)&v7[8]);
    CSpatialProperties::SetSpatialAudioSettings((LPCRITICAL_SECTION)(this + 221), (__int64)a4, (__int64)&v8);
  }
}
