/*
 * XREFs of Create_MetadataDictionaryData @ 0x18012C208
 * Callers:
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012912C (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012941C (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012968C (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1801298FC (-ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180129AF0 (-ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x18012BBC4 (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 */

__int64 __fastcall Create_MetadataDictionaryData(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  SpatialAudioMetadataDictionaryData *v16; // [rsp+98h] [rbp+38h] BYREF

  LOWORD(v15) = a3;
  LODWORD(v14) = a1;
  v11 = 0;
  v12 = 0;
  v16 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionaryData,SpatialAudioMetadataDictionaryData,enum DictionaryLoadKind &,_GUID const &,unsigned short &>(
           &v16,
           &v12,
           a2,
           &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(SpatialAudioMetadataDictionaryData *, GUID *, _QWORD *))v16)(
             v16,
             &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf,
             a4);
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v15) = v7;
      LODWORD(v14) = 92;
      v13[0] = (__int64)"Create_MetadataDictionaryData";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C02A,
        v8,
        v9,
        (const CHAR **)v13,
        (__int64)&v14,
        (__int64)&v15);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v15) = -2147024809;
      v13[0] = (__int64)"Create_MetadataDictionaryData";
      LODWORD(v14) = 87;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C05C,
        a3,
        0LL,
        (const CHAR **)v13,
        (__int64)&v14,
        (__int64)&v15);
    }
    v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
  return v6;
}
