/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180125920
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18011B91C (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWA.c)
 * Callees:
 *     BlockSpatialAudioRegistryGates @ 0x18001049C (BlockSpatialAudioRegistryGates.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x18001D9B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180028AA0 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18004A624 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18004BB20 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18004C220 (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 *     IsSpatialOnlyFormat @ 0x18004C264 (IsSpatialOnlyFormat.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x18004C310 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x18004C36C (GetPreferredSpatialAudioEncoderId.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005B884 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B7524 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x1800E4208 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18012388C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180123B44 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x180124A00 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180124A00.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U2@U2@U4@U5@U5@U5@U2@U2@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByRef@$0BA@@@5AEBU?$_tlgWrapperByVal@$01@@77744677744677@Z @ 0x180124E04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByR.c)
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
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  struct tWAVEFORMATEX *v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  WORD v52; // ax
  DWORD v53; // edx
  WORD v54; // cx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdi
  __int64 v60; // rcx
  LPVOID pv; // [rsp+D0h] [rbp-80h] BYREF
  char v63; // [rsp+D8h] [rbp-78h] BYREF
  char v64; // [rsp+D9h] [rbp-77h] BYREF
  char v65; // [rsp+DAh] [rbp-76h] BYREF
  char v66; // [rsp+DBh] [rbp-75h]
  _WORD v67[2]; // [rsp+DCh] [rbp-74h] BYREF
  unsigned int v68; // [rsp+E0h] [rbp-70h] BYREF
  _WORD v69[2]; // [rsp+E4h] [rbp-6Ch] BYREF
  int v70; // [rsp+E8h] [rbp-68h] BYREF
  int v71; // [rsp+ECh] [rbp-64h] BYREF
  ULONG v72; // [rsp+F0h] [rbp-60h] BYREF
  int v73; // [rsp+F4h] [rbp-5Ch] BYREF
  __int64 v74; // [rsp+F8h] [rbp-58h] BYREF
  __int16 v75; // [rsp+100h] [rbp-50h] BYREF
  __int16 v76; // [rsp+102h] [rbp-4Eh] BYREF
  __int16 v77; // [rsp+104h] [rbp-4Ch] BYREF
  unsigned int v78; // [rsp+108h] [rbp-48h] BYREF
  unsigned int v79; // [rsp+10Ch] [rbp-44h] BYREF
  __int16 v80; // [rsp+110h] [rbp-40h] BYREF
  __int16 v81; // [rsp+112h] [rbp-3Eh] BYREF
  struct tWAVEFORMATEX *v82; // [rsp+118h] [rbp-38h]
  _BYTE *v83; // [rsp+120h] [rbp-30h]
  void *v84; // [rsp+128h] [rbp-28h] BYREF
  _BYTE *v85; // [rsp+130h] [rbp-20h] BYREF
  __int64 v86; // [rsp+138h] [rbp-18h] BYREF
  __int64 v87; // [rsp+140h] [rbp-10h]
  __int128 v88; // [rsp+148h] [rbp-8h] BYREF
  __int64 v89; // [rsp+158h] [rbp+8h]
  PROPVARIANT pvar[2]; // [rsp+160h] [rbp+10h] BYREF
  __int64 v91; // [rsp+170h] [rbp+20h]
  __int16 v92[2]; // [rsp+180h] [rbp+30h] BYREF
  int v93; // [rsp+184h] [rbp+34h]
  __int16 v94; // [rsp+188h] [rbp+38h]
  __int16 v95; // [rsp+18Ah] [rbp+3Ah]
  char v96; // [rsp+18Ch] [rbp+3Ch] BYREF
  unsigned int v97; // [rsp+19Ch] [rbp+4Ch]
  __int128 v98; // [rsp+1A0h] [rbp+50h] BYREF
  _WORD v99[2]; // [rsp+1B0h] [rbp+60h] BYREF
  unsigned int v100; // [rsp+1B4h] [rbp+64h]
  __int16 v101; // [rsp+1B8h] [rbp+68h]
  __int16 v102; // [rsp+1BAh] [rbp+6Ah]
  _BYTE v103[16]; // [rsp+1BCh] [rbp+6Ch] BYREF
  int v104; // [rsp+1CCh] [rbp+7Ch]
  _BYTE v105[6672]; // [rsp+1F0h] [rbp+A0h] BYREF

  v66 = a3;
  v82 = a6;
  v87 = a9;
  v89 = a9;
  v83 = a11;
  v72 = 10;
  v14 = BlockSpatialAudioRegistryGates();
  v70 = 0;
  v86 = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  *(_QWORD *)&v98 = a1;
  *(_BYTE *)(a1 + 76) = 1;
  if ( !v83
    || (*v83 = 0, !a10)
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
  LODWORD(v91) = PKEY_AudioEndpoint_FormFactor.pid;
  AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                   &v86,
                   (__int128 *)pvar,
                   0xAu,
                   &v72);
  if ( AsUInt32With >= 0 )
  {
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 56) + 32LL))(
                     *(_QWORD *)(a1 + 56),
                     &v70);
    if ( AsUInt32With >= 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        if ( v72 == 1 )
        {
          *(_OWORD *)pvar = 0LL;
          v91 = 0LL;
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
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v99, a5);
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v92, v82);
      LODWORD(v19) = dword_18019C448;
      if ( (unsigned int)dword_18019C448 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
        {
          v21 = *(unsigned __int16 *)(a4 + 68);
          v22 = *(_BYTE *)(a4 + 8);
          LOBYTE(v20) = *(_BYTE *)(a4 + 60);
          LOBYTE(v19) = *(_BYTE *)a4;
          v80 = v95;
          v81 = v94;
          *(_QWORD *)&v88 = &v96;
          LODWORD(v84) = v93;
          v78 = v97;
          v75 = v92[0];
          v76 = v102;
          v77 = v101;
          v85 = v103;
          v79 = v100;
          v71 = v104;
          LOWORD(v73) = v99[0];
          v69[0] = v72;
          v67[0] = v70;
          LOWORD(v68) = v21;
          v63 = v22;
          v74 = a4 + 12;
          v64 = v20;
          v65 = v19;
          LODWORD(pv) = v14;
          pvar[0] = (PROPVARIANT)a2[3];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
            v21,
            byte_18016ABC1,
            v20,
            v19,
            pvar,
            (__int64)&pv,
            (__int64)&v65,
            (__int64)&v64,
            &v74,
            (__int64)&v63,
            (__int64)&v68,
            (__int64)v67,
            (__int64)v69,
            (__int64)&v73,
            (__int64)&v71,
            (__int64)&v79,
            (__int64 *)&v85,
            (__int64)&v77,
            (__int64)&v76,
            (__int64)&v75,
            (__int64)&v78,
            (__int64)&v84,
            (__int64 *)&v88,
            (__int64)&v81,
            (__int64)&v80);
          LODWORD(v19) = dword_18019C448;
          LODWORD(v18) = 0;
        }
        v15 = v82;
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
            if ( (unsigned int)dword_18019C448 <= 2 || !tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
              goto LABEL_32;
            v26 = (unsigned __int8 *)&unk_18016AA7D;
LABEL_31:
            pvar[0] = (PROPVARIANT)a2[3];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              (__int64)&dword_18019C448,
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
          LODWORD(v19) = dword_18019C448;
LABEL_48:
          if ( (unsigned int)v19 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
          {
            pvar[0] = (PROPVARIANT)a2[3];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              (__int64)&dword_18019C448,
              byte_18016AB00,
              v31,
              v32,
              pvar);
            LOBYTE(v18) = 0;
          }
          *v83 = (_BYTE)v18;
          goto LABEL_94;
        }
        if ( (unsigned int)dword_18019C448 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
        {
          pvar[0] = (PROPVARIANT)a2[3];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)&dword_18019C448,
            byte_18016AA34,
            v28,
            v29,
            pvar);
          v18 = 0LL;
        }
        pv = v18;
        pvar[0] = &pv;
        pvar[1] = v18;
        LOBYTE(v91) = 1;
        AsUInt32With = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                         (CEndpointCharacteristics *)a2,
                         eHostProcessConnector,
                         1,
                         &pvar[1],
                         (struct SpatialAudioSettings **)v18,
                         (unsigned int *)v18,
                         (struct SpatialAudioEncoderDescriptor **)v18);
        if ( (_BYTE)v91 )
        {
          v15 = *(struct tWAVEFORMATEX **)pvar[0];
          *(_QWORD *)pvar[0] = pvar[1];
          if ( v15 )
            CoTaskMemFree(v15);
        }
        if ( AsUInt32With >= 0 )
        {
          if ( (unsigned int)CopyToWaveFormatExtensible(a10, (const struct tWAVEFORMATEX *)pv) )
            *v83 = 1;
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
        if ( v66 != (_BYTE)v18 )
        {
          if ( (unsigned int)v19 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
            tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019C448, byte_18016AAC4, 0LL, 0LL, 2, (__int64)v99);
          goto LABEL_32;
        }
        *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(pvar, v70, a4);
        v84 = (void *)(a4 + 12);
        v34 = (char *)pvar[0] - *(_QWORD *)(a4 + 12);
        if ( pvar[0] == *(PROPVARIANT *)(a4 + 12) )
          v34 = (char *)pvar[1] - *(_QWORD *)(a4 + 20);
        if ( v34 )
        {
          if ( v33 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
          {
            v98 = *GetPreferredSpatialAudioEncoderId(&v88, v70, a4);
            pvar[0] = &v98;
            v74 = v35;
            v85 = (_BYTE *)a2[3];
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
              v36,
              byte_18016A92F,
              v37,
              v38,
              (void **)&v85,
              &v74,
              (__int64 *)pvar);
          }
          goto LABEL_32;
        }
        v78 = -1;
        v68 = -1;
        v79 = -1;
        v71 = -1;
        LODWORD(pv) = -1;
        v73 = 2;
        memset_0(v105, 0, sizeof(v105));
        AsUInt32With = CSpatialProperties::InitSpatialTechList((CSpatialProperties *)a1);
        if ( AsUInt32With >= 0 )
        {
          CSpatialAudioTechnologies::RegistryGates(v39, (__int64)v15, v40);
          if ( g_ListOfSpatialTech[0] <= 8u )
          {
            *(_OWORD *)pvar = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
            LODWORD(v91) = 2;
            AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                             &v86,
                             (__int128 *)pvar,
                             2u,
                             (ULONG *)&v73);
            if ( AsUInt32With >= 0 )
            {
              v41 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      (__int64)v99,
                      v87);
              v42 = v82;
              if ( a5 )
                v42 = 0LL;
              CSpatialProperties::EnumerateSpatialEncoders(
                a1,
                1,
                a4,
                0,
                0LL,
                v72,
                v70,
                (__int64)v42,
                &a5->wFormatTag,
                0,
                v41,
                a2[3],
                v73,
                (__int64)v105,
                &v78,
                &v68,
                &v79,
                (__int64)&v71,
                (__int64)&pv,
                0LL);
              if ( v68 == -1 )
              {
                if ( (unsigned int)dword_18019C448 > 2 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
                {
                  pvar[0] = v84;
                  v74 = a2[3];
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
                    v43,
                    byte_18016A8D8,
                    v44,
                    v45,
                    (void **)&v74,
                    (__int64 *)pvar);
                }
                goto LABEL_32;
              }
              v46 = 834LL * v68;
              if ( *(_DWORD *)&v105[v46 + 784] )
              {
                if ( *a8 )
                {
                  if ( (unsigned int)dword_18019C448 <= 2 || !tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
                    goto LABEL_32;
                  v26 = (unsigned __int8 *)&unk_18016A99D;
                  goto LABEL_31;
                }
                if ( *(_DWORD *)(a4 + 68) == 1 && (v14 & 4) != 0 )
                {
                  if ( (unsigned int)dword_18019C448 <= 2 || !tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
                    goto LABEL_32;
                  v26 = (unsigned __int8 *)&unk_18016A7C2;
                  goto LABEL_31;
                }
                if ( (v14 & 3) != 0 )
                {
                  if ( (unsigned int)dword_18019C448 > 2 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
                  {
                    LODWORD(pv) = v14;
                    pvar[0] = (PROPVARIANT)a2[3];
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                      (__int64)&dword_18019C448,
                      byte_18016A77F,
                      v50,
                      v51,
                      pvar,
                      (__int64)&pv);
                  }
                  goto LABEL_32;
                }
                a10->Format.wFormatTag = -2;
                v52 = *(_WORD *)&v105[v46 + 828];
                a10->Format.nChannels = v52;
                v53 = *(_DWORD *)&v105[v46 + 804];
                a10->Format.nSamplesPerSec = v53;
                v54 = *(_WORD *)&v105[v46 + 830];
                a10->Format.wBitsPerSample = v54;
                v55 = (unsigned __int16)(v52 * (v54 >> 3));
                a10->Format.nBlockAlign = v55;
                a10->Format.nAvgBytesPerSec = v53 * v55;
                a10->Format.cbSize = 22;
                a10->dwChannelMask = *(_DWORD *)&v105[v46 + 808];
                a10->SubFormat = *(GUID *)&v105[v46 + 812];
                a10->Samples.wValidBitsPerSample = *(_WORD *)&v105[v46 + 832];
                AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v99, &a10->Format);
                if ( (unsigned int)dword_18019C448 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
                {
                  LOWORD(v68) = v102;
                  v67[0] = v101;
                  pvar[0] = v103;
                  LODWORD(pv) = v100;
                  v71 = v104;
                  v69[0] = v99[0];
                  v74 = a2[3];
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                    v56,
                    byte_18016A851,
                    v57,
                    v58,
                    (void **)&v74,
                    (__int64)v69,
                    (__int64)&v71,
                    (__int64)&pv,
                    (__int64 *)pvar,
                    (__int64)v67,
                    (__int64)&v68);
                }
                *v83 = 1;
              }
              else
              {
                if ( (unsigned int)dword_18019C448 > 2 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
                {
                  pvar[0] = v84;
                  v74 = a2[3];
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
                    v47,
                    byte_18016A9DE,
                    v48,
                    v49,
                    (void **)&v74,
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
  v59 = v87;
  v60 = *(_QWORD *)(v87 + 56);
  if ( v60 )
  {
    LOBYTE(v15) = v60 != v87;
    (*(void (__fastcall **)(__int64, struct tWAVEFORMATEX *))(*(_QWORD *)v60 + 32LL))(v60, v15);
    *(_QWORD *)(v59 + 56) = 0LL;
  }
  return (unsigned int)AsUInt32With;
}
