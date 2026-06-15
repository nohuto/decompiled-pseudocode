/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011F04C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_7a4aa03cdf3c75c0f652933ca8714d6d_::operator() @ 0x180071DF4 (_lambda_7a4aa03cdf3c75c0f652933ca8714d6d_--operator().c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004BC78 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004C394 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18011C894 (-GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011F20C (-SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
        const unsigned __int16 **this,
        const struct tWAVEFORMATEX *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct tWAVEFORMATEX *v12; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+38h] [rbp-18h] BYREF
  int v15; // [rsp+40h] [rbp-10h]
  struct tWAVEFORMATEX *v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  struct tWAVEFORMATEX *pv; // [rsp+68h] [rbp+18h]

  if ( !a2 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, eHostProcessConnector, 0LL);
    if ( updated >= 0 )
      return 0LL;
    v5 = 8666LL;
    goto LABEL_4;
  }
  v7 = ValidateUncompressedWaveFormatEx(a2);
  if ( v7 < 0 )
  {
    v8 = 8675LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, eHostProcessConnector, a2);
  if ( v7 < 0 )
  {
    v8 = 8678LL;
    goto LABEL_8;
  }
  updated = CEndpointCharacteristics::SetOffloadDeviceFormat((CEndpointCharacteristics *)this, a2);
  if ( updated >= 0 )
  {
    pv = 0LL;
    v12 = 0LL;
    v13 = 1;
    updated = CEndpointCharacteristics::GetOffloadMixFormat((CEndpointCharacteristics *)this, &v12);
    if ( v13 )
      pv = v12;
    if ( updated >= 0 )
    {
      v14 = 65;
      v15 = pv->cbSize + 18;
      v16 = pv;
      v11 = (*(__int64 (__fastcall **)(const unsigned __int16 *, __int128 *, __int16 *))(*(_QWORD *)this[5] + 48LL))(
              this[5],
              &PKEY_AudioEngine_HWMixFormat,
              &v14);
      updated = v11;
      if ( v11 >= 0 )
      {
        updated = 0;
LABEL_21:
        if ( pv )
          CoTaskMemFree(pv);
        return (unsigned int)updated;
      }
      v9 = (unsigned int)v11;
      v10 = 8694LL;
    }
    else
    {
      v9 = (unsigned int)updated;
      v10 = 8685LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v9);
    goto LABEL_21;
  }
  v5 = 8681LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
