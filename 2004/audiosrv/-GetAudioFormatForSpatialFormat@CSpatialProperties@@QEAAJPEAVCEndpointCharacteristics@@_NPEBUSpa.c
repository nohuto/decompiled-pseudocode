/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801265B0
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18011C5AC (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWA.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x1800109DC (BlockSpatialAudioRegistryGates.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800127C0 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x18001E030 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180029120 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18004ADE4 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18004C9C0 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     IsSpatialOnlyFormat @ 0x18004CA04 (IsSpatialOnlyFormat.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18004CAB0 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x18004CB0C (GetPreferredSpatialAudioEncoderId.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051BC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052AB8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005C024 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     _alloca_probe @ 0x180074BB0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B8194 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x1800E4E98 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18012451C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x1801247D4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x180125690 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180125690.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U2@U2@U4@U5@U5@U5@U2@U2@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByRef@$0BA@@@5AEBU?$_tlgWrapperByVal@$01@@77744677744677@Z @ 0x180125A94 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByR.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSpatialProperties::GetAudioFormatForSpatialFormat(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 a4,
        struct tWAVEFORMATEX *a5,
        struct tWAVEFORMATEX *a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9,
        struct WAVEFORMATEXTENSIBLE *a10,
        _BYTE *a11)
{
  int v14; // r14d
  struct tWAVEFORMATEX *v15; // rdx
  int AsUInt32With; // ebx
  struct tWAVEFORMATEX *v17; // r8
  void *v18; // r11
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  char v22; // dl
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 *v26; // rdx
  char v27; // al
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r9d
  char *v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  struct tWAVEFORMATEX *v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r9
  WORD v50; // ax
  DWORD v51; // edx
  WORD v52; // cx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // rcx
  LPVOID pv; // [rsp+D0h] [rbp-80h] BYREF
  char v61; // [rsp+D8h] [rbp-78h] BYREF
  char v62; // [rsp+D9h] [rbp-77h] BYREF
  char v63; // [rsp+DAh] [rbp-76h] BYREF
  char v64; // [rsp+DBh] [rbp-75h]
  _WORD v65[2]; // [rsp+DCh] [rbp-74h] BYREF
  unsigned int v66; // [rsp+E0h] [rbp-70h] BYREF
  _WORD v67[2]; // [rsp+E4h] [rbp-6Ch] BYREF
  int v68; // [rsp+E8h] [rbp-68h] BYREF
  int v69; // [rsp+ECh] [rbp-64h] BYREF
  ULONG v70; // [rsp+F0h] [rbp-60h] BYREF
  int v71; // [rsp+F4h] [rbp-5Ch] BYREF
  __int64 v72; // [rsp+F8h] [rbp-58h] BYREF
  __int16 v73; // [rsp+100h] [rbp-50h] BYREF
  __int16 v74; // [rsp+102h] [rbp-4Eh] BYREF
  __int16 v75; // [rsp+104h] [rbp-4Ch] BYREF
  unsigned int v76; // [rsp+108h] [rbp-48h] BYREF
  unsigned int v77; // [rsp+10Ch] [rbp-44h] BYREF
  __int16 v78; // [rsp+110h] [rbp-40h] BYREF
  __int16 v79; // [rsp+112h] [rbp-3Eh] BYREF
  struct tWAVEFORMATEX *v80; // [rsp+118h] [rbp-38h]
  _BYTE *v81; // [rsp+120h] [rbp-30h]
  void *v82; // [rsp+128h] [rbp-28h] BYREF
  _BYTE *v83; // [rsp+130h] [rbp-20h] BYREF
  __int64 v84; // [rsp+138h] [rbp-18h] BYREF
  __int64 v85; // [rsp+140h] [rbp-10h]
  __int128 v86; // [rsp+148h] [rbp-8h] BYREF
  __int64 v87; // [rsp+158h] [rbp+8h]
  PROPVARIANT pvar[2]; // [rsp+160h] [rbp+10h] BYREF
  __int64 v89; // [rsp+170h] [rbp+20h]
  __int16 v90[2]; // [rsp+180h] [rbp+30h] BYREF
  int v91; // [rsp+184h] [rbp+34h]
  __int16 v92; // [rsp+188h] [rbp+38h]
  __int16 v93; // [rsp+18Ah] [rbp+3Ah]
  char v94; // [rsp+18Ch] [rbp+3Ch] BYREF
  unsigned int v95; // [rsp+19Ch] [rbp+4Ch]
  __int128 v96; // [rsp+1A0h] [rbp+50h] BYREF
  _WORD v97[2]; // [rsp+1B0h] [rbp+60h] BYREF
  unsigned int v98; // [rsp+1B4h] [rbp+64h]
  __int16 v99; // [rsp+1B8h] [rbp+68h]
  __int16 v100; // [rsp+1BAh] [rbp+6Ah]
  _BYTE v101[16]; // [rsp+1BCh] [rbp+6Ch] BYREF
  int v102; // [rsp+1CCh] [rbp+7Ch]
  _BYTE v103[6672]; // [rsp+1F0h] [rbp+A0h] BYREF

  v64 = a3;
  v80 = a6;
  v85 = a9;
  v87 = a9;
  v81 = a11;
  v70 = 10;
  v14 = BlockSpatialAudioRegistryGates();
  v68 = 0;
  v84 = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v96 = a1;
  *(_BYTE *)(a1 + 76) = 1;
  if ( !v81
    || (*v81 = 0, !a10)
    || (*(_OWORD *)&a10->Format.wFormatTag = 0LL,
        *(_OWORD *)&a10->Format.cbSize = 0LL,
        *(_QWORD *)a10->SubFormat.Data4 = 0LL,
        !a4)
    || !a6
    || !a7 )
  {
    AsUInt32With = -2147467261;
    goto LABEL_94;
  }
  *(GUID *)pvar = PKEY_AudioEndpoint_FormFactor.fmtid;
  LODWORD(v89) = PKEY_AudioEndpoint_FormFactor.pid;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   &v84,
                   (__int128 *)pvar,
                   0xAu,
                   &v70);
  if ( AsUInt32With >= 0 )
  {
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                     *(_QWORD *)(a1 + 56),
                     &v68);
    if ( AsUInt32With >= 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        if ( v70 == 1 )
        {
          *(_OWORD *)pvar = 0LL;
          v89 = 0LL;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a7 + 40LL))(
                 a7,
                 &PKEY_Endpoint_SpatialNotAllowed,
                 pvar) < 0
            || !LOWORD(pvar[0])
            || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
          {
            v14 &= ~2u;
          }
          PropVariantClear(pvar);
        }
        else
        {
          v14 &= ~2u;
        }
      }
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v97, a5);
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v90, v80);
      LODWORD(v19) = dword_18019D478;
      if ( (unsigned int)dword_18019D478 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
        {
          v21 = *(unsigned __int16 *)(a4 + 68);
          v22 = *(_BYTE *)(a4 + 8);
          LOBYTE(v20) = *(_BYTE *)(a4 + 60);
          LOBYTE(v19) = *(_BYTE *)a4;
          v78 = v93;
          v79 = v92;
          *(_QWORD *)&v86 = &v94;
          LODWORD(v82) = v91;
          v76 = v95;
          v73 = v90[0];
          v74 = v100;
          v75 = v99;
          v83 = v101;
          v77 = v98;
          v69 = v102;
          LOWORD(v71) = v97[0];
          v67[0] = v70;
          v65[0] = v68;
          LOWORD(v66) = v21;
          v61 = v22;
          v72 = a4 + 12;
          v62 = v20;
          v63 = v19;
          LODWORD(pv) = v14;
          pvar[0] = (PROPVARIANT)a2[3];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
            v21,
            byte_18016BD58,
            v20,
            v19,
            pvar,
            (__int64)&pv,
            (__int64)&v63,
            (__int64)&v62,
            &v72,
            (__int64)&v61,
            (__int64)&v66,
            (__int64)v65,
            (__int64)v67,
            (__int64)&v71,
            (__int64)&v69,
            (__int64)&v77,
            (__int64 *)&v83,
            (__int64)&v75,
            (__int64)&v74,
            (__int64)&v73,
            (__int64)&v76,
            (__int64)&v82,
            (__int64 *)&v86,
            (__int64)&v79,
            (__int64)&v78);
          LODWORD(v19) = dword_18019D478;
          LODWORD(v18) = 0;
        }
        v15 = v80;
        v17 = a5;
      }
      if ( *(_DWORD *)a4 == (_DWORD)v18 )
      {
        if ( v17 )
        {
          if ( v17->wFormatTag != 0xFFFE )
            goto LABEL_48;
          v23 = IsSpatialOnlyFormat((DWORD *)((char *)&v17[1].nSamplesPerSec + 2));
          LOBYTE(v18) = 0;
          if ( v23 )
          {
            if ( (unsigned int)dword_18019D478 <= 2 || !tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
              goto LABEL_32;
            v26 = (unsigned __int8 *)&unk_18016BD11;
LABEL_31:
            pvar[0] = (PROPVARIANT)a2[3];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              (__int64)&dword_18019D478,
              v26,
              v24,
              v25,
              pvar);
LABEL_32:
            AsUInt32With = -2147024846;
            goto LABEL_94;
          }
          goto LABEL_47;
        }
        if ( v15->wFormatTag != 0xFFFE )
          goto LABEL_48;
        v27 = IsSpatialOnlyFormat((DWORD *)((char *)&v15[1].nSamplesPerSec + 2));
        v18 = 0LL;
        if ( !v27 )
        {
LABEL_47:
          LODWORD(v19) = dword_18019D478;
LABEL_48:
          if ( (unsigned int)v19 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
          {
            pvar[0] = (PROPVARIANT)a2[3];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              (__int64)&dword_18019D478,
              byte_18016BF33,
              v31,
              v32,
              pvar);
            LOBYTE(v18) = 0;
          }
          *v81 = (_BYTE)v18;
          goto LABEL_94;
        }
        if ( (unsigned int)dword_18019D478 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
        {
          pvar[0] = (PROPVARIANT)a2[3];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)&dword_18019D478,
            byte_18016BF75,
            v28,
            v29,
            pvar);
          v18 = 0LL;
        }
        pv = v18;
        pvar[0] = &pv;
        pvar[1] = v18;
        LOBYTE(v89) = 1;
        AsUInt32With = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                         (CEndpointCharacteristics *)a2,
                         eHostProcessConnector,
                         1,
                         &pvar[1],
                         (struct SpatialAudioSettings **)v18,
                         (unsigned int *)v18,
                         (struct SpatialAudioEncoderDescriptor **)v18);
        if ( (_BYTE)v89 )
        {
          v15 = *(struct tWAVEFORMATEX **)pvar[0];
          *(_QWORD *)pvar[0] = pvar[1];
          if ( v15 )
            CoTaskMemFree(v15);
        }
        if ( AsUInt32With >= 0 )
        {
          if ( (unsigned int)CopyToWaveFormatExtensible(a10, (const struct tWAVEFORMATEX *)pv) )
            *v81 = 1;
          else
            AsUInt32With = -2147418113;
        }
        v30 = pv;
        pv = 0LL;
        if ( v30 )
          CoTaskMemFree(v30);
      }
      else
      {
        if ( v64 != (_BYTE)v18 )
        {
          if ( (unsigned int)v19 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
            tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019D478, byte_18016BC28, 0LL, 0LL, 2, (__int64)v97);
          goto LABEL_32;
        }
        *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(pvar, v68, a4);
        v82 = (void *)(a4 + 12);
        v34 = (char *)pvar[0] - *(_QWORD *)(a4 + 12);
        if ( pvar[0] == *(PROPVARIANT *)(a4 + 12) )
          v34 = (char *)pvar[1] - *(_QWORD *)(a4 + 20);
        if ( v34 )
        {
          if ( v33 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
          {
            v96 = *GetPreferredSpatialAudioEncoderId(&v86, v68, a4);
            pvar[0] = &v96;
            v72 = v35;
            v83 = (_BYTE *)a2[3];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
              v36,
              byte_18016BBBA,
              v37,
              v38,
              (void **)&v83,
              &v72,
              (__int64 *)pvar);
          }
          goto LABEL_32;
        }
        v76 = -1;
        v66 = -1;
        v77 = -1;
        v69 = -1;
        LODWORD(pv) = -1;
        v71 = 2;
        memset_0(v103, 0, sizeof(v103));
        AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
        if ( AsUInt32With >= 0 )
        {
          CSpatialAudioTechnologies::RegistryGates();
          if ( g_ListOfSpatialTech[0] <= 8u )
          {
            *(_OWORD *)pvar = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
            LODWORD(v89) = 2;
            AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                             &v84,
                             (__int128 *)pvar,
                             2u,
                             (ULONG *)&v71);
            if ( AsUInt32With >= 0 )
            {
              v39 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      (__int64)v97,
                      v85);
              v40 = v80;
              if ( a5 )
                v40 = 0LL;
              CSpatialProperties::EnumerateSpatialEncoders(
                a1,
                1,
                a4,
                0,
                0LL,
                v70,
                v68,
                (__int64)v40,
                &a5->wFormatTag,
                0,
                v39,
                a2[3],
                v71,
                (__int64)v103,
                &v76,
                &v66,
                &v77,
                (__int64)&v69,
                (__int64)&pv,
                0LL);
              if ( v66 == -1 )
              {
                if ( (unsigned int)dword_18019D478 > 2 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
                {
                  pvar[0] = v82;
                  v72 = a2[3];
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
                    v41,
                    byte_18016BCBA,
                    v42,
                    v43,
                    (void **)&v72,
                    (__int64 *)pvar);
                }
                goto LABEL_32;
              }
              v44 = 834LL * v66;
              if ( *(_DWORD *)&v103[v44 + 784] )
              {
                if ( *a8 )
                {
                  if ( (unsigned int)dword_18019D478 <= 2 || !tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
                    goto LABEL_32;
                  v26 = (unsigned __int8 *)&unk_18016BAAF;
                  goto LABEL_31;
                }
                if ( *(_DWORD *)(a4 + 68) == 1 && (v14 & 4) != 0 )
                {
                  if ( (unsigned int)dword_18019D478 <= 2 || !tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
                    goto LABEL_32;
                  v26 = (unsigned __int8 *)&unk_18016BA6A;
                  goto LABEL_31;
                }
                if ( (v14 & 3) != 0 )
                {
                  if ( (unsigned int)dword_18019D478 > 2 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
                  {
                    LODWORD(pv) = v14;
                    pvar[0] = (PROPVARIANT)a2[3];
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                      (__int64)&dword_18019D478,
                      byte_18016BB77,
                      v48,
                      v49,
                      pvar,
                      (__int64)&pv);
                  }
                  goto LABEL_32;
                }
                a10->Format.wFormatTag = -2;
                v50 = *(_WORD *)&v103[v44 + 828];
                a10->Format.nChannels = v50;
                v51 = *(_DWORD *)&v103[v44 + 804];
                a10->Format.nSamplesPerSec = v51;
                v52 = *(_WORD *)&v103[v44 + 830];
                a10->Format.wBitsPerSample = v52;
                v53 = (unsigned __int16)(v50 * (v52 >> 3));
                a10->Format.nBlockAlign = v53;
                a10->Format.nAvgBytesPerSec = v51 * v53;
                a10->Format.cbSize = 22;
                a10->dwChannelMask = *(_DWORD *)&v103[v44 + 808];
                a10->SubFormat = *(GUID *)&v103[v44 + 812];
                a10->Samples.wValidBitsPerSample = *(_WORD *)&v103[v44 + 832];
                AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v97, &a10->Format);
                if ( (unsigned int)dword_18019D478 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
                {
                  LOWORD(v66) = v100;
                  v65[0] = v99;
                  pvar[0] = v101;
                  LODWORD(pv) = v98;
                  v69 = v102;
                  v67[0] = v97[0];
                  v72 = a2[3];
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                    v54,
                    byte_18016BAF0,
                    v55,
                    v56,
                    (void **)&v72,
                    (__int64)v67,
                    (__int64)&v69,
                    (__int64)&pv,
                    (__int64 *)pvar,
                    (__int64)v65,
                    (__int64)&v66);
                }
                *v81 = 1;
              }
              else
              {
                if ( (unsigned int)dword_18019D478 > 2 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
                {
                  pvar[0] = v82;
                  v72 = a2[3];
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
                    v45,
                    byte_18016BC64,
                    v46,
                    v47,
                    (void **)&v72,
                    (__int64 *)pvar);
                }
                AsUInt32With = -2147009035;
              }
            }
          }
          else
          {
            AsUInt32With = -2147418113;
          }
        }
      }
    }
  }
LABEL_94:
  if ( a1 )
    LeaveCriticalSection((LPCRITICAL_SECTION)a1);
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
  v57 = v85;
  v58 = *(_QWORD *)(v85 + 56);
  if ( v58 )
  {
    LOBYTE(v15) = v58 != v85;
    (*(void (__fastcall **)(__int64, struct tWAVEFORMATEX *))(*(_QWORD *)v58 + 32LL))(v58, v15);
    *(_QWORD *)(v57 + 56) = 0LL;
  }
  return (unsigned int)AsUInt32With;
}
