/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800139B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D6998 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000EBF0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180020540 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180023A30 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180032860 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180032900 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047D10 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004876C (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052E20 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800686BC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _o___std_exception_destroy_0 @ 0x18006B58E (_o___std_exception_destroy_0.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800B6D64 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  unsigned __int64 v8; // r13
  int v10; // eax
  int ProposedConnectorFormatForProcessingMode; // ebx
  int v12; // r15d
  int v13; // esi
  BOOL v14; // ebx
  __int64 v15; // rcx
  char *v16; // rcx
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  GUID v24; // xmm0
  void *v25; // rcx
  struct _GUID *v26; // rcx
  __int64 v27; // rax
  BOOL v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rsi
  char *v31; // rbx
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  BOOL v36; // ebx
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // rsi
  __int64 v40; // rbx
  struct _RTL_CRITICAL_SECTION *v41; // rsi
  char *v42; // r13
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // ecx
  unsigned int v46; // esi
  int v47; // r9d
  __int64 v48; // rax
  int v49; // esi
  __int64 v50; // r8
  _QWORD *v51; // rcx
  signed int v52; // edx
  int v53; // r10d
  const char *v54; // rcx
  int v55; // eax
  _OWORD *v56; // rax
  _OWORD *v57; // rdx
  _OWORD *v58; // rax
  __int64 v59; // rax
  _OWORD *v60; // rcx
  BOOL v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rbx
  char *v64; // rbx
  int v65; // edx
  int v66; // r8d
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  int v69; // ebx
  struct _RTL_CRITICAL_SECTION *v70; // rsi
  unsigned int v71; // edx
  unsigned __int64 v72; // rax
  int v73; // ecx
  BYTE *pData; // rbx
  BYTE *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  struct tWAVEFORMATEX *v79; // rax
  struct tWAVEFORMATEX *v80; // rdi
  struct tWAVEFORMATEX *v81; // rax
  void *v82; // rcx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r9
  __int64 v88; // rdx
  SystemEffectChainDescriptor **v89; // rax
  int v90; // eax
  char *v91; // rsi
  __int64 v92; // rbx
  _QWORD *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  wil::details::in1diag3 *v97; // rcx
  __int64 v98; // rdx
  _QWORD *v99; // r11
  __int64 v100; // r10
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // r8d
  int v107; // r9d
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  int MixFormat; // eax
  int v113; // [rsp+20h] [rbp-E0h]
  int v114; // [rsp+40h] [rbp-C0h]
  int v115; // [rsp+48h] [rbp-B8h]
  _OWORD *v116; // [rsp+48h] [rbp-B8h]
  __int64 v118; // [rsp+50h] [rbp-B0h]
  unsigned int i; // [rsp+50h] [rbp-B0h]
  __int64 v120; // [rsp+58h] [rbp-A8h] BYREF
  int v121[4]; // [rsp+60h] [rbp-A0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v123; // [rsp+80h] [rbp-80h]
  struct tagPROPVARIANT v124; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v125; // [rsp+A8h] [rbp-58h] BYREF
  const char *v126; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID *v127; // [rsp+B8h] [rbp-48h]
  LPVOID pv; // [rsp+C0h] [rbp-40h] BYREF
  char *v129; // [rsp+C8h] [rbp-38h]
  PROPVARIANT v130[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v131; // [rsp+E0h] [rbp-20h]
  PROPVARIANT v132[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v133; // [rsp+F8h] [rbp-8h]
  __m256i v134; // [rsp+100h] [rbp+0h] BYREF
  const unsigned int *v135; // [rsp+120h] [rbp+20h] BYREF
  char v136[16]; // [rsp+128h] [rbp+28h] BYREF
  const unsigned int *v137; // [rsp+138h] [rbp+38h] BYREF
  char v138[16]; // [rsp+140h] [rbp+40h] BYREF
  const unsigned int *v139; // [rsp+150h] [rbp+50h] BYREF
  char v140[16]; // [rsp+158h] [rbp+58h] BYREF
  const unsigned int *v141; // [rsp+168h] [rbp+68h] BYREF
  char v142[16]; // [rsp+170h] [rbp+70h] BYREF
  __m256i v143; // [rsp+180h] [rbp+80h] BYREF
  char v144[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v145[24]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v146[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  void *Block[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v148; // [rsp+1F8h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v127 = a3;
  v8 = a2;
  v114 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &pv);
  ProposedConnectorFormatForProcessingMode = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1251,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v10,
      v113);
    goto LABEL_158;
  }
  if ( a7 || a6 )
  {
    v113 = (int)a7;
    v84 = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL))(
            g_PolicyConfig,
            pv,
            0LL,
            a6);
    ProposedConnectorFormatForProcessingMode = v84;
    if ( v84 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1256,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v84,
        (int)a7);
      goto LABEL_158;
    }
  }
  v125 = 0LL;
  v12 = 1;
  if ( !a4 )
    goto LABEL_36;
  *(_QWORD *)&v124.vt = &v125;
  v124.hVal.QuadPart = 0LL;
  *((_BYTE *)&v124.decVal + 16) = 1;
  *(struct _GUID *)pvar = *v127;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                               (struct _GUID *)pvar,
                                               (struct tWAVEFORMATEX **)&v124.hVal.QuadPart);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    v13 = v8;
    if ( (_DWORD)v8 == 2 )
    {
      v13 = 0;
    }
    else if ( (_DWORD)v8 )
    {
      goto LABEL_17;
    }
    v14 = 1;
    v15 = *((_QWORD *)this + 10);
    if ( v15 )
    {
      *(_OWORD *)pvar = 0LL;
      v123 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v14 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v14 )
      {
        v16 = (char *)this + 168;
LABEL_19:
        v17 = *((_DWORD *)v16 + 2);
        if ( v17 )
        {
          v18 = 0;
          if ( v17 <= 0 )
            goto LABEL_25;
          while ( 1 )
          {
            v19 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v18);
            v20 = *v19 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
            if ( *v19 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
              v20 = v19[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
            if ( !v20 )
              break;
            if ( ++v18 >= v17 )
              goto LABEL_25;
          }
          if ( v18 == -1 )
          {
LABEL_25:
            v21 = 0;
            if ( v17 <= 0 )
              goto LABEL_171;
            while ( 1 )
            {
              v22 = (_QWORD *)(*(_QWORD *)v16 + 16LL * v21);
              v23 = *v22 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
              if ( *v22 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
                v23 = v22[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
              if ( !v23 )
                break;
              if ( ++v21 >= v17 )
                goto LABEL_171;
            }
            if ( v21 == -1 )
LABEL_171:
              v24 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v16, 0LL);
            else
              v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          }
          else
          {
            v24 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          }
        }
        else
        {
          v24 = GUID_00000000_0000_0000_0000_000000000000;
        }
        v134.m256i_i64[0] = (__int64)this;
        v134.m256i_i32[2] = v8;
        *(GUID *)((char *)&v134.m256i_u64[1] + 4) = v24;
        v143 = v134;
        ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                     this,
                                                     0,
                                                     0,
                                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                     (unsigned __int16 **)&v143,
                                                     (LPVOID *)&v124.puuid);
        goto LABEL_32;
      }
    }
LABEL_17:
    if ( (unsigned __int64)v13 >= *((_QWORD *)this + 19) )
    {
      v85 = gsl::fail_fast::fail_fast(
              (gsl::fail_fast *)&v135,
              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      gsl::details::throw_exception<gsl::fail_fast>(v85);
    }
    v16 = (char *)(*((_QWORD *)this + 20) + 16LL * v13);
    goto LABEL_19;
  }
LABEL_32:
  if ( *((_BYTE *)&v124.decVal + 16) )
  {
    v25 = **(void ***)&v124.vt;
    **(_QWORD **)&v124.vt = v124.hVal.QuadPart;
    if ( v25 )
      CoTaskMemFree(v25);
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1260,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode,
      v113);
    goto LABEL_156;
  }
LABEL_36:
  if ( !a5 )
    goto LABEL_153;
  v26 = v127;
  v27 = *(_QWORD *)&v127->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *(_QWORD *)&v127->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v27 = *(_QWORD *)v127->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v27 )
  {
LABEL_249:
    *(struct _GUID *)pvar = *v26;
    MixFormat = CEndpointCharacteristics::GetMixFormat(
                  this,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                  (struct _GUID *)pvar,
                  a5);
    ProposedConnectorFormatForProcessingMode = MixFormat;
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1273,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)MixFormat,
        v113);
      goto LABEL_156;
    }
LABEL_153:
    if ( a4 )
    {
      v81 = (struct tWAVEFORMATEX *)v125;
      v125 = 0LL;
      *a4 = v81;
    }
    ProposedConnectorFormatForProcessingMode = 0;
    goto LABEL_156;
  }
  Block[0] = 0LL;
  Block[1] = 0LL;
  v121[0] = 0;
  *(GUID *)pvar = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (_DWORD)v8 )
    goto LABEL_46;
  v28 = 1;
  v29 = *((_QWORD *)this + 10);
  if ( !v29 )
    goto LABEL_46;
  memset(&v124, 0, sizeof(v124));
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
         v29,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v124) >= 0
    && v124.vt == 19 )
  {
    v28 = v124.lVal == 0;
  }
  PropVariantClear((PROPVARIANT *)&v124);
  if ( v28 )
  {
LABEL_46:
    if ( v8 >= *((_QWORD *)this + 207) )
    {
      v111 = gsl::fail_fast::fail_fast(
               (gsl::fail_fast *)&v134,
               "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      gsl::details::throw_exception<gsl::fail_fast>(v111);
    }
    v30 = 96 * v8;
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v8 + *((_QWORD *)this + 208)));
    if ( v8 >= *((_QWORD *)this + 209) )
    {
      v110 = gsl::fail_fast::fail_fast(
               (gsl::fail_fast *)&v143,
               "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      gsl::details::throw_exception<gsl::fail_fast>(v110);
    }
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v30 + *((_QWORD *)this + 210)));
    if ( v8 >= *((_QWORD *)this + 211) )
    {
      v109 = gsl::fail_fast::fail_fast(
               (gsl::fail_fast *)v146,
               "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      gsl::details::throw_exception<gsl::fail_fast>(v109);
    }
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v30 + *((_QWORD *)this + 212)));
    if ( v8 >= *((_QWORD *)this + 19) )
    {
      v108 = gsl::fail_fast::fail_fast(
               (gsl::fail_fast *)v145,
               "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      gsl::details::throw_exception<gsl::fail_fast>(v108);
    }
    v31 = (char *)(*((_QWORD *)this + 20) + 16 * v8);
  }
  else
  {
    v31 = (char *)this + 168;
  }
  v32 = 0;
  v33 = *((_DWORD *)v31 + 2);
  if ( v33 <= 0 )
    goto LABEL_177;
  v34 = *(_QWORD *)v31;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 16LL * v32) - (unsigned __int64)pvar[0];
    if ( !v35 )
      v35 = *(_QWORD *)(v34 + 16LL * v32 + 8) - (unsigned __int64)pvar[1];
    if ( !v35 )
      break;
    if ( ++v32 >= v33 )
      goto LABEL_177;
  }
  if ( v32 == -1 )
  {
LABEL_177:
    v69 = 0;
    goto LABEL_121;
  }
  v36 = 1;
  v37 = *((_QWORD *)this + 10);
  if ( !v37 )
    goto LABEL_62;
  *(_OWORD *)v130 = 0LL;
  v131 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v37 + 40LL))(
         v37,
         &PKEY_AudioEndpoint_Disable_SysFx,
         v130) >= 0
    && LOWORD(v130[0]) == 19 )
  {
    v36 = LODWORD(v130[1]) == 0;
  }
  PropVariantClear(v130);
  if ( v36 || (_DWORD)v8 == 3 )
LABEL_62:
    v38 = 1;
  else
    v38 = 0;
  v39 = v8;
  if ( v8 >= *((_QWORD *)this + 209) )
  {
    v105 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v144,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v105);
  }
  v40 = *((_QWORD *)this + 210) + 96 * v8;
  v126 = (const char *)v40;
  if ( v38 )
  {
    if ( !*(_BYTE *)(v40 + 52) )
    {
LABEL_72:
      v46 = 0;
      if ( *(int *)(v40 + 40) > 0 )
      {
        do
        {
          for ( i = 0;
                (signed int)i < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                         v40 + 32,
                                                         v46)
                                          + 8LL);
                ++i )
          {
            v93 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v40 + 32, v46);
            v94 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v93, i);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(Block, v94) == -1 )
            {
              v95 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v40 + 32, v46);
              v96 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v95, i);
              if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(Block, v96) )
              {
                v97 = retaddr;
                v98 = 584LL;
                goto LABEL_203;
              }
            }
          }
          ++v46;
        }
        while ( (signed int)v46 < *(_DWORD *)(v40 + 40) );
        v47 = HIDWORD(Block[1]);
      }
      else
      {
        v47 = 0;
      }
      v48 = *(_QWORD *)(v40 + 16);
      if ( v48 )
      {
        v49 = 0;
        if ( *(int *)(v48 + 8) > 0 )
        {
          v50 = 0LL;
          v120 = 0LL;
          while ( 1 )
          {
            if ( v49 < 0 || v49 >= *(_DWORD *)(v48 + 8) )
            {
              ATL::_AtlRaiseException(0xC000008C, v48);
              __debugbreak();
            }
            v51 = (_QWORD *)(*(_QWORD *)v48 + 16LL * v49);
            v52 = 0;
            v53 = (int)Block[1];
            if ( SLODWORD(Block[1]) > 0 )
            {
              while ( 1 )
              {
                v99 = (char *)Block[0] + 16 * v52;
                v100 = *v99 - *v51;
                if ( *v99 == *v51 )
                  v100 = v99[1] - v51[1];
                if ( !v100 )
                  break;
                ++v52;
                v53 = (int)Block[1];
                if ( v52 >= SLODWORD(Block[1]) )
                  goto LABEL_80;
              }
              if ( v52 != -1 )
              {
                v57 = Block[0];
                goto LABEL_90;
              }
              v53 = (int)Block[1];
            }
LABEL_80:
            if ( v49 >= *(_DWORD *)(v48 + 8) )
            {
              ATL::_AtlRaiseException(0xC000008C, v52);
              __debugbreak();
            }
            v54 = (const char *)(v50 + *(_QWORD *)v48);
            v126 = v54;
            if ( v53 == v47 )
            {
              if ( v47 )
              {
                v55 = 2 * v53;
                v115 = 2 * v53;
                if ( (v53 & 0x40000000) != 0 )
                  goto LABEL_217;
              }
              else
              {
                v55 = 1;
                v115 = 1;
              }
              if ( (unsigned __int64)v55 > 0x7FFFFFF || (v56 = (_OWORD *)_o__recalloc(Block[0], v55, 16LL)) == 0LL )
              {
LABEL_217:
                v97 = retaddr;
                v98 = 596LL;
LABEL_203:
                wil::details::in1diag3::Return_Hr(
                  v97,
                  (void *)v98,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)0x8007000ELL,
                  v113);
                break;
              }
              v47 = v115;
              HIDWORD(Block[1]) = v115;
              v57 = v56;
              Block[0] = v56;
              v50 = v120;
              v54 = v126;
              v53 = (int)Block[1];
            }
            else
            {
              v57 = Block[0];
            }
            v58 = &v57[v53];
            if ( v58 )
              *v58 = *(_OWORD *)v54;
            ++LODWORD(Block[1]);
LABEL_90:
            ++v49;
            v50 += 16LL;
            v120 = v50;
            v48 = *(_QWORD *)(v40 + 16);
            if ( v49 >= *(_DWORD *)(v48 + 8) )
            {
              v39 = (int)v8;
              goto LABEL_92;
            }
          }
        }
      }
      v39 = (int)v8;
      goto LABEL_205;
    }
    v41 = (struct _RTL_CRITICAL_SECTION *)(v40 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v40 + 56));
    v129 = (char *)(v40 + 56);
    v42 = 0LL;
    pvar[0] = 0LL;
    v43 = 0;
    pvar[1] = 0LL;
    v44 = 0;
    LODWORD(v120) = 0;
    if ( *(int *)(v40 + 40) > 0 )
    {
      while ( 1 )
      {
        v86 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v40 + 32, v44);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              pvar,
                              v86) )
          break;
        v44 = v120 + 1;
        LODWORD(v120) = v44;
        if ( (signed int)v44 >= *(_DWORD *)(v40 + 40) )
        {
          v42 = (char *)pvar[0];
          v43 = (int)pvar[1];
          goto LABEL_67;
        }
      }
      v87 = 2147942414LL;
      v88 = 502LL;
    }
    else
    {
LABEL_67:
      v45 = 0;
      LODWORD(v120) = 0;
      if ( v43 <= 0 )
      {
LABEL_68:
        if ( v42 )
        {
          if ( v43 > 0 )
          {
            v91 = v42;
            v92 = (unsigned int)v43;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v91);
              v91 += 16;
              --v92;
            }
            while ( v92 );
            v40 = (__int64)v126;
            v41 = (struct _RTL_CRITICAL_SECTION *)(v126 + 56);
          }
          free(v42);
        }
        if ( !v41 )
          goto LABEL_71;
LABEL_70:
        LeaveCriticalSection(v41);
LABEL_71:
        LODWORD(v8) = a2;
        goto LABEL_72;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                     pvar,
                                     (unsigned int)v45)
                      + 20LL) )
        {
          v89 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  pvar,
                                                  (unsigned int)v120);
          v90 = SystemEffectChainDescriptor::Resolve(*v89, (struct SystemEffectDescriptor *)v40);
          if ( v90 < 0 )
            break;
        }
        v45 = v120 + 1;
        LODWORD(v120) = v45;
        v43 = (int)pvar[1];
        if ( v45 >= SLODWORD(pvar[1]) )
          goto LABEL_68;
      }
      v87 = (unsigned int)v90;
      v88 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v88,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v87,
      v113);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(pvar);
    if ( v40 == -56 )
      goto LABEL_71;
    goto LABEL_70;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(Block, v40);
  if ( LODWORD(Block[1]) != *(_DWORD *)(v40 + 8) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23A,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v113);
LABEL_205:
  v57 = Block[0];
LABEL_92:
  LODWORD(v120) = 0;
  if ( SLODWORD(Block[1]) <= 0 )
  {
LABEL_225:
    v69 = v121[0];
  }
  else
  {
    v59 = 0LL;
    v118 = 0LL;
    v60 = v57;
    v116 = v57;
    while ( 1 )
    {
      if ( v59 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)&std::logic_error::`vftable');
        __debugbreak();
      }
      *(_OWORD *)pvar = *v60;
      if ( (_DWORD)v8 )
        goto LABEL_253;
      v61 = 1;
      v62 = *((_QWORD *)this + 10);
      if ( !v62 )
        goto LABEL_253;
      *(_OWORD *)v132 = 0LL;
      v133 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v62 + 40LL))(
             v62,
             &PKEY_AudioEndpoint_Disable_SysFx,
             v132) >= 0
        && LOWORD(v132[0]) == 19 )
      {
        v61 = LODWORD(v132[1]) == 0;
      }
      PropVariantClear(v132);
      if ( v61 )
      {
LABEL_253:
        if ( v39 >= *((_QWORD *)this + 207) )
        {
          v104 = gsl::fail_fast::fail_fast(
                   (gsl::fail_fast *)&v135,
                   "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          gsl::details::throw_exception<gsl::fail_fast>(v104);
        }
        if ( (v114 & 0x40) != 0 )
        {
          v114 &= ~0x40u;
          v135 = &std::logic_error::`vftable';
          o___std_exception_destroy_0(v136);
        }
        v63 = 96 * v39;
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v39 + *((_QWORD *)this + 208)));
        if ( v39 >= *((_QWORD *)this + 209) )
        {
          v103 = gsl::fail_fast::fail_fast(
                   (gsl::fail_fast *)&v141,
                   "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          gsl::details::throw_exception<gsl::fail_fast>(v103);
        }
        if ( (v114 & 0x80u) != 0 )
        {
          v114 &= ~0x80u;
          v141 = &std::logic_error::`vftable';
          o___std_exception_destroy_0(v142);
        }
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v63 + *((_QWORD *)this + 210)));
        if ( v39 >= *((_QWORD *)this + 211) )
        {
          v102 = gsl::fail_fast::fail_fast(
                   (gsl::fail_fast *)&v139,
                   "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          gsl::details::throw_exception<gsl::fail_fast>(v102);
        }
        if ( (v114 & 0x100) != 0 )
        {
          v114 &= ~0x100u;
          v139 = &std::logic_error::`vftable';
          o___std_exception_destroy_0(v140);
        }
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v63 + *((_QWORD *)this + 212)));
        if ( v39 >= *((_QWORD *)this + 19) )
        {
          v101 = gsl::fail_fast::fail_fast(
                   (gsl::fail_fast *)&v137,
                   "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
          gsl::details::throw_exception<gsl::fail_fast>(v101);
        }
        if ( (v114 & 0x200) != 0 )
        {
          v114 &= ~0x200u;
          v137 = &std::logic_error::`vftable';
          o___std_exception_destroy_0(v138);
        }
        v64 = (char *)(*((_QWORD *)this + 20) + 16 * v39);
      }
      else
      {
        v64 = (char *)this + 168;
      }
      v65 = 0;
      v66 = *((_DWORD *)v64 + 2);
      if ( v66 <= 0 )
        break;
      v67 = *(_QWORD *)v64;
      while ( 1 )
      {
        v68 = *(_QWORD *)(v67 + 16LL * v65) - (unsigned __int64)pvar[0];
        if ( !v68 )
          v68 = *(_QWORD *)(v67 + 16LL * v65 + 8) - (unsigned __int64)pvar[1];
        if ( !v68 )
          break;
        if ( ++v65 >= v66 )
          goto LABEL_120;
      }
      if ( v65 == -1 )
        break;
      LODWORD(v120) = v120 + 1;
      v59 = ++v118;
      v60 = ++v116;
      if ( (int)v120 >= SLODWORD(Block[1]) )
        goto LABEL_225;
    }
LABEL_120:
    v69 = 1;
  }
LABEL_121:
  if ( Block[0] )
    free(Block[0]);
  if ( !v69 )
  {
    v26 = v127;
    goto LABEL_249;
  }
  v70 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8688);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8688));
  v129 = (char *)this + 8688;
  memset(&v124, 0, sizeof(v124));
  *a5 = 0LL;
  if ( (_DWORD)v8 != 3 )
    v12 = 0;
  *(struct _GUID *)pvar = *v127;
  v71 = 0;
  while ( 1 )
  {
    v72 = qword_18019E7E0[2 * v71] - (unsigned __int64)pvar[0];
    if ( !v72 )
      v72 = qword_18019E7E0[2 * v71 + 1] - (unsigned __int64)pvar[1];
    if ( !v72 )
      break;
    if ( ++v71 >= 9 )
    {
      ProposedConnectorFormatForProcessingMode = -2147023728;
      goto LABEL_149;
    }
  }
  *(_OWORD *)Block = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
  if ( v12 )
    v73 = 602;
  else
    v73 = 2;
  v148 = v73 + v71;
  if ( (*(int (__fastcall **)(_QWORD, void **, struct tagPROPVARIANT *, PROPVARIANT))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         Block,
         &v124,
         pvar[0]) >= 0
    && v124.vt == 65
    && v124.lVal >= 0x12u )
  {
    pData = v124.bstrblobVal.pData;
    if ( v124.ulVal == *((unsigned __int16 *)v124.bstrblobVal.pData + 8) + 18LL )
    {
LABEL_136:
      v75 = pData;
      if ( pData && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pData) >= 0 )
      {
        if ( ((*(_WORD *)pData - 1) & 0xFFFD) == 0 )
          goto LABEL_146;
        if ( *(_WORD *)pData == 0xFFFE )
        {
          v76 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
            v76 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
          if ( !v76 )
            goto LABEL_146;
          v77 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
          if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
            v77 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
          if ( !v77 )
          {
LABEL_146:
            v78 = *((unsigned __int16 *)pData + 8);
            v79 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v78 + 18);
            v80 = v79;
            if ( v79 )
            {
              memcpy_0(v79, v75, v78 + 18);
              ProposedConnectorFormatForProcessingMode = 0;
            }
            else
            {
              ProposedConnectorFormatForProcessingMode = -2147024882;
            }
            *a5 = v80;
            goto LABEL_149;
          }
        }
      }
      goto LABEL_239;
    }
  }
  PropVariantClear((PROPVARIANT *)&v124);
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::RefreshDeviceFormat(
                                               this,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_149;
  if ( (*(int (__fastcall **)(_QWORD, void **, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         Block,
         &v124) >= 0
    && v124.vt == 65
    && (unsigned int)IsValidWfxBlob(&v124) )
  {
    pData = v124.bstrblobVal.pData;
    goto LABEL_136;
  }
LABEL_239:
  ProposedConnectorFormatForProcessingMode = -2004287480;
LABEL_149:
  PropVariantClear((PROPVARIANT *)&v124);
  if ( ProposedConnectorFormatForProcessingMode < 0
    && (unsigned int)dword_18019D478 > 3
    && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 20LL) )
  {
    v121[0] = ProposedConnectorFormatForProcessingMode;
    LODWORD(v120) = 7007;
    v126 = "CEndpointCharacteristics::GetDevicePipeFormat";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_18019D478,
      (unsigned int)&unk_18016B424,
      v106,
      v107,
      (__int64)&v126,
      (__int64)&v120,
      (__int64)v121);
  }
  if ( v70 )
    LeaveCriticalSection(v70);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
    goto LABEL_153;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x126C,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode,
    v113);
LABEL_156:
  v82 = v125;
  v125 = 0LL;
  if ( v82 )
    CoTaskMemFree(v82);
LABEL_158:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
