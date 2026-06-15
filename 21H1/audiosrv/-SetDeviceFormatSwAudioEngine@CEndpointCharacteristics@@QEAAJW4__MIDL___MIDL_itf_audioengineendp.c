/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800491B4
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048918 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180029120 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1800488DC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800499F4 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004B490 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C3C8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x18004C4D4 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CAE4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_c945414f02df0a9eff317fd834a02709___::_lambda_call__lambda_c945414f02df0a9eff317fd834a02709___ @ 0x180072764 (wil--details--lambda_call__lambda_c945414f02df0a9eff317fd834a02709___--_lambda_call__lambda_c945.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011FFC4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatSwAudioEngine(
        CEndpointCharacteristics *this,
        __int32 a2,
        const struct tWAVEFORMATEX *a3)
{
  char v6; // si
  int updated; // eax
  int DeviceFormatAndSpatialSettings; // ebx
  GUID v9; // xmm6
  void *v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void *v14; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+28h] [rbp-69h]
  int v21; // [rsp+28h] [rbp-69h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // [rsp+48h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-41h] BYREF
  struct _GUID v24; // [rsp+58h] [rbp-39h] BYREF
  char v25; // [rsp+68h] [rbp-29h]
  __int64 v26; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v27[3]; // [rsp+80h] [rbp-11h] BYREF
  char v28; // [rsp+98h] [rbp+7h]
  CEndpointCharacteristics *v29; // [rsp+A0h] [rbp+Fh]
  char v30; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v22 = a2;
  v29 = this;
  v6 = 1;
  v30 = 1;
  if ( !a3 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                this,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                0LL);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated >= 0 )
    {
      v6 = 0;
      DeviceFormatAndSpatialSettings = 0;
      goto LABEL_19;
    }
    v16 = 8473LL;
    goto LABEL_31;
  }
  updated = ValidateUncompressedWaveFormatEx(a3);
  DeviceFormatAndSpatialSettings = updated;
  if ( updated < 0 )
  {
    v16 = 8479LL;
    goto LABEL_31;
  }
  v9 = *CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, &v24, a2, 0);
  v24 = v9;
  updated = CEndpointCharacteristics::ConfirmDeviceFormat(this, a3, &v24, v22, 0);
  DeviceFormatAndSpatialSettings = updated;
  if ( updated == -2004287480 )
  {
    updated = CEndpointCharacteristics::TryAddFormat(this, a3);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated >= 0 )
    {
      v24 = v9;
      updated = CEndpointCharacteristics::ConfirmDeviceFormat(this, a3, &v24, v22, 0);
      DeviceFormatAndSpatialSettings = updated;
      if ( updated >= 0 )
        goto LABEL_5;
      v16 = 8495LL;
    }
    else
    {
      v16 = 8492LL;
    }
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated,
      v20);
    goto LABEL_19;
  }
  if ( updated < 0 )
  {
    v16 = 8499LL;
    goto LABEL_31;
  }
LABEL_5:
  pv = 0LL;
  *(_QWORD *)&v24.Data1 = &pv;
  *(_QWORD *)v24.Data4 = 0LL;
  v25 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     eHostProcessConnector,
                                     0,
                                     (LPVOID *)v24.Data4,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v25 )
  {
    v10 = **(void ***)&v24.Data1;
    **(_QWORD **)&v24.Data1 = *(_QWORD *)v24.Data4;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v17 = (unsigned int)DeviceFormatAndSpatialSettings;
    v18 = 8504LL;
  }
  else
  {
    v11 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 0, v22, a3);
    DeviceFormatAndSpatialSettings = v11;
    if ( v11 >= 0 )
    {
      v27[0] = this;
      v27[1] = &v22;
      v27[2] = &pv;
      v28 = 1;
      v12 = CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(this, eHostProcessConnector);
      DeviceFormatAndSpatialSettings = v12;
      if ( v12 < 0 )
      {
        v19 = 8516LL;
      }
      else
      {
        v13 = CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(this, eKeywordDetectorConnector);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2148,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v13,
            v21);
        v26 = 0LL;
        v12 = CEndpointCharacteristics::SetProcessingPeriod(this, &v26);
        DeviceFormatAndSpatialSettings = v12;
        if ( v12 < 0 )
        {
          v19 = 8529LL;
        }
        else
        {
          v24 = *CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, &v24, v22, 0);
          v12 = CEndpointCharacteristics::ConfirmDeviceFormat(this, a3, &v24, v22, 1);
          DeviceFormatAndSpatialSettings = v12;
          if ( v12 >= 0 )
          {
            v28 = 0;
            v6 = 0;
            DeviceFormatAndSpatialSettings = 0;
LABEL_16:
            wil::details::lambda_call__lambda_c945414f02df0a9eff317fd834a02709___::_lambda_call__lambda_c945414f02df0a9eff317fd834a02709___(v27);
            goto LABEL_17;
          }
          v19 = 8541LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12,
        v21);
      goto LABEL_16;
    }
    v17 = (unsigned int)v11;
    v18 = 8507LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v17,
    v21);
LABEL_17:
  v14 = pv;
  pv = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_19:
  if ( v6 )
    CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
