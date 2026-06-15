/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x18001E030
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004A220 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x18004A824 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DD60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180126900 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036DF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005BF24 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     memcmp_0 @ 0x180074B43 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180125BB8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWrite.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@34@Z @ 0x180125CC8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@U2@@-$_tlgWr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        unsigned __int16 *a9,
        char a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14,
        unsigned int *a15,
        unsigned int *a16,
        unsigned int *a17,
        __int64 a18,
        __int64 a19,
        __int64 a20)
{
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // r13d
  unsigned int v24; // r14d
  int *v25; // rdx
  __int128 v26; // xmm0
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rbx
  __int64 (__fastcall ***v30)(_QWORD, __int128 *); // rcx
  int v31; // eax
  int v32; // edi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r8
  _WORD *v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r15
  __int16 v39; // ax
  __int64 v40; // r8
  int v41; // r9d
  _WORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  _QWORD *v45; // r14
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // edi
  char v51; // bl
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r14d
  __int64 v57; // rcx
  int v59; // ecx
  unsigned __int16 v60; // ax
  int v61; // r8d
  __int16 v62; // r10
  int v63; // r9d
  __int16 v64; // r11
  __int16 v65; // dx
  int v66; // ecx
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // ebx
  int *v72; // rdi
  _QWORD *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbx
  _DWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int16 v80; // r9
  unsigned __int16 v81; // dx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  char v85; // al
  __int64 v86; // rdx
  int v87; // ecx
  int v88; // r8d
  int v89; // r9d
  unsigned int v91; // [rsp+54h] [rbp-ACh]
  char v92; // [rsp+58h] [rbp-A8h] BYREF
  char v93[3]; // [rsp+59h] [rbp-A7h] BYREF
  int v94; // [rsp+5Ch] [rbp-A4h]
  unsigned int v95; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v96; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v97; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v98; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v99; // [rsp+70h] [rbp-90h]
  unsigned int v100; // [rsp+74h] [rbp-8Ch]
  __int128 *p_Buf1; // [rsp+78h] [rbp-88h] BYREF
  __int64 v102; // [rsp+80h] [rbp-80h]
  unsigned int v103; // [rsp+88h] [rbp-78h]
  __int64 v104; // [rsp+90h] [rbp-70h]
  __int64 v105; // [rsp+98h] [rbp-68h]
  __int64 v106; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v107; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v108; // [rsp+B0h] [rbp-50h]
  unsigned int *v109; // [rsp+B8h] [rbp-48h]
  __int64 v110; // [rsp+C0h] [rbp-40h]
  __int64 v111; // [rsp+C8h] [rbp-38h]
  __int64 v112; // [rsp+D0h] [rbp-30h]
  __int64 v113; // [rsp+D8h] [rbp-28h]
  __int64 v114; // [rsp+E0h] [rbp-20h]
  __int64 v115; // [rsp+E8h] [rbp-18h]
  unsigned int *v116; // [rsp+F0h] [rbp-10h]
  __int64 v117; // [rsp+F8h] [rbp-8h]
  __int64 v118; // [rsp+100h] [rbp+0h]
  __int64 v119; // [rsp+108h] [rbp+8h]
  __int128 Buf2; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v121[24]; // [rsp+120h] [rbp+20h]
  _BYTE v122[40]; // [rsp+138h] [rbp+38h] BYREF
  __int128 Buf1; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v124[24]; // [rsp+170h] [rbp+70h]
  __int64 v125; // [rsp+198h] [rbp+98h]
  __int128 v126; // [rsp+1A0h] [rbp+A0h]
  char v127[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v128[16]; // [rsp+1C0h] [rbp+C0h] BYREF

  v103 = a4;
  v112 = a3;
  v21 = a1;
  v110 = a1;
  v104 = a8;
  v22 = a11;
  v105 = a11;
  v119 = a11;
  v102 = a12;
  v115 = a14;
  v116 = a15;
  v108 = a16;
  v109 = a17;
  v117 = a18;
  v118 = a19;
  v113 = a20;
  v23 = 0;
  v24 = 0;
  v91 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetImpl'::`2'::impl,
    0LL);
  v94 = g_ListOfSpatialTech[0];
  if ( a20 )
  {
    *(_OWORD *)a20 = *(_OWORD *)a3;
    *(_OWORD *)(a20 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a20 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a20 + 48) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(a20 + 64) = *(_QWORD *)(a3 + 64);
  }
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent() || (unsigned int)IsSpatialAllowedOnPlatform() )
  {
    v99 = -1;
    v100 = -1;
    v26 = MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( !a7 )
      goto LABEL_5;
    if ( a7 == 3 && *(_DWORD *)a3 )
    {
      v77 = *(_QWORD *)(a3 + 12) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( !v77 )
        v77 = *(_QWORD *)(a3 + 20) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v77 )
LABEL_5:
        v26 = *(_OWORD *)(a3 + 12);
    }
    v126 = v26;
    if ( v94 )
    {
      v27 = 0LL;
      v111 = 0LL;
      v25 = g_ListOfSpatialTech;
      v28 = v94;
      while ( 1 )
      {
        v93[0] = 0;
        v95 = 0;
        memset(v122, 0, sizeof(v122));
        if ( v23 >= g_ListOfSpatialTech[0] )
          v29 = 0LL;
        else
          v29 = *(_QWORD *)&g_ListOfSpatialTech[2 * v27 + 2];
        if ( !v29 )
          goto LABEL_56;
        p_Buf1 = &Buf1;
        v125 = 0LL;
        v30 = *(__int64 (__fastcall ****)(_QWORD, __int128 *))(v22 + 56);
        if ( v30 )
          v125 = (**v30)(v30, &Buf1);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, __int128 *, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v29 + 40LL))(
               v29,
               a6,
               v104,
               a9,
               &Buf1,
               a13,
               &v95,
               v93,
               v122) )
        {
          break;
        }
LABEL_55:
        v25 = g_ListOfSpatialTech;
        v28 = v94;
LABEL_56:
        ++v23;
        v27 = ++v111;
        if ( v23 >= v28 )
          goto LABEL_57;
      }
      v31 = *(_DWORD *)(v21 + 6876);
      if ( v31 == 2 )
      {
        if ( *(_WORD *)&v122[2] == 2 )
        {
          if ( (unsigned int)dword_18019D478 > 4 && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 16LL) )
            tlgWriteTransfer_EtwEventWriteTransfer(
              (unsigned int)&dword_18019D478,
              (unsigned int)&unk_18016CFA6,
              0,
              0,
              2,
              (__int64)&Buf2);
          goto LABEL_55;
        }
      }
      else if ( !v31 && v104 && a6 != 9 && *(_WORD *)(v104 + 2) == 8 && *(_WORD *)&v122[2] == 2 )
      {
        *(_OWORD *)(v21 + 6880) = *(_OWORD *)v122;
        *(_OWORD *)(v21 + 6896) = *(_OWORD *)&v122[16];
        *(_QWORD *)(v21 + 6912) = *(_QWORD *)&v122[32];
        *(_DWORD *)(v21 + 6876) = 1;
      }
      v32 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v102);
      v114 = 834LL * v24;
      v33 = v114 + v115;
      *(_DWORD *)(v114 + v115 + 784) = v32 >= 0;
      *(_OWORD *)(v33 + 768) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v29 + 16LL))(
                                            v29,
                                            v127);
      *(_DWORD *)(v33 + 788) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29);
      *(_DWORD *)(v33 + 792) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 56LL))(v29);
      *(_DWORD *)(v33 + 796) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 72LL))(v29);
      *(_DWORD *)(v33 + 800) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
      *(_DWORD *)(v33 + 804) = *(_DWORD *)&v122[4];
      *(_DWORD *)(v33 + 808) = *(_DWORD *)&v122[20];
      *(_OWORD *)(v33 + 812) = *(_OWORD *)&v122[24];
      *(_WORD *)(v33 + 828) = *(_WORD *)&v122[2];
      *(_WORD *)(v33 + 830) = *(_WORD *)&v122[14];
      *(_WORD *)(v33 + 832) = *(_WORD *)&v122[18];
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      v35 = 256LL;
      v36 = (_WORD *)v33;
      v37 = v34 - v33;
      v38 = v112;
      while ( v35 != -2147483390 )
      {
        v39 = *(_WORD *)((char *)v36 + v37);
        if ( !v39 )
          break;
        *v36++ = v39;
        if ( !--v35 )
        {
          --v36;
          break;
        }
      }
      *v36 = 0;
      v40 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, v102, v35, v37);
      v42 = (_WORD *)(v33 + 512);
      v43 = 128LL;
      v44 = v40 - (v33 + 512);
      v45 = (_QWORD *)(v33 + 768);
      while ( 1 )
      {
        v46 = v43 + 2147483518;
        if ( v43 == -2147483518 )
          break;
        v46 = *(unsigned __int16 *)((char *)v42 + v44);
        if ( !(_WORD)v46 )
          break;
        *v42++ = v46;
        if ( !--v43 )
        {
          --v42;
          break;
        }
      }
      v47 = 0;
      *v42 = 0;
      v48 = *v45 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *v45 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v48 = *(_QWORD *)(v33 + 776) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( !v48 )
        goto LABEL_191;
      v49 = -1LL;
      do
        ++v49;
      while ( *(_WORD *)(v33 + 2 * v49) );
      if ( !v49 )
      {
LABEL_191:
        if ( (unsigned int)dword_18019D478 > 2 && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 16LL) )
        {
          p_Buf1 = (__int128 *)v33;
          v107 = v33 + 768;
          v24 = v91;
          v98 = v91;
          v97 = v23;
          v106 = v102;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
            v87,
            (unsigned int)&unk_18016CED1,
            v88,
            v89,
            (__int64)&v106,
            (__int64)&v97,
            (__int64)&v98,
            (__int64)&v107,
            (__int64)&p_Buf1);
        }
        else
        {
          v24 = v91;
        }
        memset_0((void *)v33, 0, 0x342uLL);
        v22 = v105;
        v21 = v110;
        goto LABEL_55;
      }
      if ( (unsigned int)dword_18019D478 > 4
        && (byte_18019D488 & 0x10) != 0
        && (qword_18019D490 & 0x10) == qword_18019D490 )
      {
        v96 = v32;
        v106 = v33;
        v107 = v33 + 768;
        v50 = v91;
        v97 = v91;
        v98 = v23;
        p_Buf1 = (__int128 *)v102;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v46,
          (unsigned int)&unk_18016CF31,
          0,
          v41,
          (__int64)&p_Buf1,
          (__int64)&v98,
          (__int64)&v97,
          (__int64)&v107,
          (__int64)&v106,
          (__int64)&v96);
        v47 = 0;
      }
      else
      {
        v50 = v91;
      }
      v51 = a2;
      if ( !a2 || a7 )
        goto LABEL_39;
      if ( a9 )
      {
        v59 = *a9;
        v60 = a9[8];
        if ( (_WORD)v59 == 0xFFFE )
        {
          if ( v60 != 22 )
          {
            v78 = *((_QWORD *)a9 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
            if ( !v78 )
              v78 = *((_QWORD *)a9 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            if ( v78 )
            {
              v79 = *((_QWORD *)a9 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
              if ( !v79 )
                v79 = *((_QWORD *)a9 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
              if ( v79 )
                goto LABEL_39;
            }
          }
          Buf1 = *(_OWORD *)a9;
          *(_OWORD *)v124 = *((_OWORD *)a9 + 1);
          *(_QWORD *)&v124[16] = *((_QWORD *)a9 + 4);
          *(_WORD *)v124 = 22;
          v61 = *(_DWORD *)&v124[4];
          v62 = Buf1;
        }
        else
        {
          if ( v60 && (((_WORD)v59 - 1) & 0xFFFD) != 0 )
            goto LABEL_39;
          v80 = a9[1];
          if ( (unsigned __int16)(v80 - 1) > 1u )
            goto LABEL_39;
          v81 = a9[7];
          if ( ((v81 - 8) & 0xFFE7) != 0 )
            goto LABEL_39;
          Buf1 = *(_OWORD *)a9;
          v62 = -2;
          LOWORD(Buf1) = -2;
          *(_WORD *)v124 = 22;
          *(_WORD *)&v124[2] = v81;
          *(GUID *)&v124[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v124[8] = v59;
          LOBYTE(v47) = v80 == 1;
          v61 = v47 + 3;
          *(_DWORD *)&v124[4] = v61;
        }
        if ( *(_WORD *)v122 == 0xFFFE )
        {
          if ( *(_WORD *)&v122[16] != 22 )
          {
            v82 = *(_QWORD *)&v122[24] - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
            if ( *(_QWORD *)&v122[24] == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
              v82 = *(_QWORD *)&v122[32] - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            if ( v82 )
            {
              v83 = *(_QWORD *)&v122[24] - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
              if ( *(_QWORD *)&v122[24] == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
                v83 = *(_QWORD *)&v122[32] - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
              if ( v83 )
                goto LABEL_39;
            }
          }
          Buf2 = *(_OWORD *)v122;
          *(_OWORD *)v121 = *(_OWORD *)&v122[16];
          *(_QWORD *)&v121[16] = *(_QWORD *)&v122[32];
          *(_WORD *)v121 = 22;
          v63 = *(_DWORD *)&v122[20];
          v64 = *(_WORD *)v122;
        }
        else
        {
          if ( *(_WORD *)&v122[16] && ((*(_WORD *)v122 - 1) & 0xFFFD) != 0 )
            goto LABEL_39;
          if ( (unsigned __int16)(*(_WORD *)&v122[2] - 1) > 1u || (v64 = -2, ((*(_WORD *)&v122[14] - 8) & 0xFFE7) != 0) )
          {
            v51 = a2;
            goto LABEL_39;
          }
          Buf2 = *(_OWORD *)v122;
          LOWORD(Buf2) = -2;
          *(_WORD *)v121 = 22;
          *(_WORD *)&v121[2] = *(_WORD *)&v122[14];
          *(GUID *)&v121[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v121[8] = *(unsigned __int16 *)v122;
          v63 = (*(_WORD *)&v122[2] == 1) + 3;
          *(_DWORD *)&v121[4] = v63;
          v51 = a2;
        }
        if ( WORD1(Buf1) )
        {
          v65 = WORD1(Buf2);
        }
        else
        {
          v65 = 0;
          WORD1(Buf2) = 0;
          DWORD2(Buf2) = 0;
          WORD6(Buf2) = 0;
        }
        if ( DWORD1(Buf1) )
        {
          v66 = DWORD1(Buf2);
        }
        else
        {
          v66 = 0;
          *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
        }
        if ( HIWORD(Buf1) )
        {
          v67 = HIWORD(Buf2);
        }
        else
        {
          v67 = 0;
          HIDWORD(Buf2) = 0;
        }
        if ( !v61 )
        {
          v63 = 0;
          *(_DWORD *)&v121[4] = 0;
        }
        if ( !v62 )
        {
          v64 = 0;
          LOWORD(Buf2) = 0;
        }
        if ( !v65 )
        {
          WORD1(Buf1) = 0;
          DWORD2(Buf1) = 0;
          WORD6(Buf1) = 0;
        }
        if ( !v66 )
          *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
        if ( !v67 )
          HIDWORD(Buf1) = 0;
        if ( !v63 )
          *(_DWORD *)&v124[4] = 0;
        if ( !v64 )
          LOWORD(Buf1) = 0;
        v68 = *(_QWORD *)&v124[8] - *(_QWORD *)&v121[8];
        if ( *(_QWORD *)&v124[8] == *(_QWORD *)&v121[8] )
          v68 = *(_QWORD *)&v124[16] - *(_QWORD *)&v121[16];
        if ( v68 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
          goto LABEL_39;
      }
      if ( *(_DWORD *)(v33 + 784) )
      {
        v69 = *v45 - *(_QWORD *)(v38 + 12);
        if ( *v45 == *(_QWORD *)(v38 + 12) )
          v69 = *(_QWORD *)(v33 + 776) - *(_QWORD *)(v38 + 20);
        if ( v69 && v103 > v50 && v113 && !*(_DWORD *)(v114 + a5 + 784) )
        {
          v70 = *(_QWORD *)(v114 + a5 + 768) - *v45;
          if ( !v70 )
            v70 = *(_QWORD *)(v114 + a5 + 776) - *(_QWORD *)(v33 + 776);
          if ( !v70 )
          {
            v92 = 0;
            v96 = 0;
            v71 = 0;
            if ( g_ListOfSpatialTech[0] )
            {
              while ( 1 )
              {
                v72 = &g_ListOfSpatialTech[2 * v71];
                v73 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v72 + 1) + 16LL))(
                                  *((_QWORD *)v72 + 1),
                                  v128);
                v74 = *v73 - *(_QWORD *)(v38 + 12);
                if ( *v73 == *(_QWORD *)(v38 + 12) )
                  v74 = v73[1] - *(_QWORD *)(v38 + 20);
                if ( !v74 )
                  break;
                if ( (unsigned int)++v71 >= g_ListOfSpatialTech[0] )
                {
                  v50 = v91;
                  goto LABEL_110;
                }
              }
              v75 = *((_QWORD *)v72 + 1);
              v50 = v91;
            }
            else
            {
LABEL_110:
              v75 = 0LL;
            }
            if ( v75 )
            {
              v84 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                      &Buf1,
                      v105);
              v85 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, __int64, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v75 + 40LL))(
                      v75,
                      a6,
                      v104,
                      a9,
                      v84,
                      a13,
                      &v96,
                      &v92,
                      v122);
              v52 = v95;
              if ( v85 && (!v92 || v95 < v96) )
              {
                v86 = v113;
                *(_OWORD *)(v113 + 28) = *(_OWORD *)(v38 + 12);
                if ( *v108 != -1 )
                  *v109 = *v108;
                *(_OWORD *)(v86 + 12) = *(_OWORD *)(v114 + a5 + 768);
              }
            }
            else
            {
              v52 = v95;
            }
            v51 = a2;
LABEL_40:
            v53 = *v45 - v126;
            if ( *v45 == (_QWORD)v126 )
              v53 = *(_QWORD *)(v33 + 776) - *((_QWORD *)&v126 + 1);
            if ( !v53 )
              *v116 = v50;
            if ( v51 )
            {
              v54 = *v45 - *(_QWORD *)(v38 + 12);
              if ( *v45 == *(_QWORD *)(v38 + 12) )
                v54 = *(_QWORD *)(v33 + 776) - *(_QWORD *)(v38 + 20);
              if ( !v54 )
                *v108 = v50;
              v55 = *v45 - *(_QWORD *)(v38 + 28);
              if ( *v45 == *(_QWORD *)(v38 + 28) )
                v55 = *(_QWORD *)(v33 + 776) - *(_QWORD *)(v38 + 36);
              v56 = v91;
              if ( !v55 )
                *v109 = v91;
            }
            else
            {
              v56 = v91;
            }
            if ( !*(_DWORD *)(v33 + 784) || !v52 )
              goto LABEL_54;
            if ( v93[0] && (a10 || !*(_DWORD *)(v33 + 788)) )
            {
              if ( v52 >= v99 )
                goto LABEL_54;
              v99 = v52;
              v76 = (_DWORD *)v117;
            }
            else
            {
              if ( v52 >= v100 )
              {
LABEL_54:
                v24 = v56 + 1;
                v91 = v24;
                v22 = v105;
                v21 = v110;
                goto LABEL_55;
              }
              v100 = v52;
              v76 = (_DWORD *)v118;
            }
            *v76 = v56;
            goto LABEL_54;
          }
        }
      }
LABEL_39:
      v52 = v95;
      goto LABEL_40;
    }
  }
LABEL_57:
  if ( !*(_DWORD *)(v21 + 6876) )
    *(_DWORD *)(v21 + 6876) = 3;
  v57 = *(_QWORD *)(v22 + 56);
  if ( v57 )
  {
    if ( v57 == v22 )
      v25 = 0LL;
    else
      LOBYTE(v25) = 1;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v57 + 32LL))(v57, v25);
    *(_QWORD *)(v22 + 56) = 0LL;
  }
  return v24;
}
