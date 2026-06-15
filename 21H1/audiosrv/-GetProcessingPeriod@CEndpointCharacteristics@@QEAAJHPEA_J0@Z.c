/*
 * XREFs of ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021CB0
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180038820 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000EBF0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180023A30 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180032860 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180032900 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B904 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x18004C4D4 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052D20 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069B20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180074B43 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800C34D8 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x180119428 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801194F8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C240 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CEndpointCharacteristics::GetProcessingPeriod(
        CEndpointCharacteristics *this,
        int a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // r12
  __int64 *v5; // r14
  int v6; // eax
  int v8; // ebx
  BOOL v9; // r14d
  BOOL v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r14
  struct _RTL_CRITICAL_SECTION *v13; // rsi
  char *v14; // r15
  __int64 v15; // r12
  unsigned int v16; // r13d
  unsigned int v17; // r13d
  __int64 v18; // r13
  volatile signed __int32 **v19; // rsi
  volatile signed __int32 *v20; // r14
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r8
  __int64 v25; // rax
  volatile signed __int32 **v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  volatile signed __int32 **v29; // r12
  struct _RTL_CRITICAL_SECTION *v30; // rcx
  char *v31; // rax
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rax
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  struct _GUID v37; // xmm6
  int ProposedConnectorFormatForProcessingMode; // esi
  __int64 v39; // rcx
  char *v40; // r9
  int v41; // edx
  int v42; // r8d
  _QWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  _QWORD *v46; // rcx
  __int64 v47; // rax
  GUID v48; // xmm0
  void *v49; // rdx
  void *v50; // r14
  unsigned __int16 *v51; // rsi
  __int64 *v52; // rax
  int v53; // r8d
  int v54; // edx
  GUID *v55; // rax
  GUID v56; // xmm0
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // r9d
  __int64 i; // r8
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // rax
  int v65; // eax
  __int64 p_LockCount; // rcx
  int *v67; // r13
  unsigned __int16 *v68; // rcx
  unsigned __int16 v69; // ax
  int v70; // r10d
  __int16 v71; // r11
  unsigned __int16 v72; // ax
  int v73; // r9d
  __int16 v74; // r12
  int v75; // ecx
  __int16 v76; // ax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rdx
  SystemEffectChainDescriptor **v83; // rax
  int v84; // eax
  char *v85; // r14
  __int64 v86; // r9
  __int64 v87; // rdx
  SystemEffectChainDescriptor **v88; // rax
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // r10
  __int64 v92; // rax
  __int64 v93; // rax
  int Key; // eax
  unsigned int v95; // edx
  __int64 v96; // r11
  GUID v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int16 v100; // r8
  unsigned __int16 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int16 v104; // r8
  unsigned __int16 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // eax
  unsigned int v112; // esi
  __int64 v113; // rcx
  __int64 v114; // r9
  __int64 v115; // rdx
  int v116; // [rsp+20h] [rbp-E0h]
  int v117; // [rsp+20h] [rbp-E0h]
  int v118; // [rsp+30h] [rbp-D0h]
  int v119; // [rsp+34h] [rbp-CCh]
  int v120; // [rsp+34h] [rbp-CCh]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C8h]
  volatile signed __int32 **v122; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v123; // [rsp+48h] [rbp-B8h]
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+58h] [rbp-A8h]
  char *v126; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v127; // [rsp+68h] [rbp-98h]
  int v128; // [rsp+6Ch] [rbp-94h]
  int v129; // [rsp+70h] [rbp-90h]
  __int64 v130; // [rsp+78h] [rbp-88h]
  __int64 *v131; // [rsp+80h] [rbp-80h]
  PROPVARIANT v132[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v133; // [rsp+98h] [rbp-68h]
  LPVOID *p_pv; // [rsp+A0h] [rbp-60h]
  struct tWAVEFORMATEX *v135; // [rsp+A8h] [rbp-58h] BYREF
  char v136; // [rsp+B0h] [rbp-50h]
  __int64 *v137; // [rsp+B8h] [rbp-48h]
  PROPVARIANT pvar[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-30h]
  PROPVARIANT v140[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v141; // [rsp+E8h] [rbp-18h]
  __m256i v142; // [rsp+F0h] [rbp-10h] BYREF
  GUID v143; // [rsp+110h] [rbp+10h]
  struct _GUID v144; // [rsp+120h] [rbp+20h]
  __int64 v145; // [rsp+130h] [rbp+30h]
  struct _GUID v146; // [rsp+140h] [rbp+40h] BYREF
  __m256i v147; // [rsp+150h] [rbp+50h] BYREF
  char v148[24]; // [rsp+170h] [rbp+70h] BYREF
  char v149[24]; // [rsp+188h] [rbp+88h] BYREF
  char v150[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v151[24]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v152[24]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v153[24]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int128 Buf2; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v155[24]; // [rsp+210h] [rbp+110h]
  __int128 Buf1; // [rsp+228h] [rbp+128h] BYREF
  _BYTE v157[24]; // [rsp+238h] [rbp+138h]
  GUID v158; // [rsp+250h] [rbp+150h]
  GUID v159; // [rsp+260h] [rbp+160h] BYREF
  GUID v160; // [rsp+270h] [rbp+170h] BYREF
  struct _GUID v161; // [rsp+280h] [rbp+180h] BYREF
  char v162[16]; // [rsp+290h] [rbp+190h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v4 = a4;
  v131 = a4;
  v5 = a3;
  v137 = a3;
  v6 = a2;
  v129 = a2;
  v8 = 0;
  if ( a3 )
  {
    if ( !a4 )
      goto LABEL_137;
  }
  else if ( !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x209F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v116);
    return 2147500035LL;
  }
  pv = 0LL;
  v143 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v9 = 1;
  v10 = 1;
  v11 = *((_QWORD *)this + 10);
  if ( v11 )
  {
    *(_OWORD *)pvar = 0LL;
    v139 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &PKEY_AudioEndpoint_Disable_SysFx,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v10 = LODWORD(pvar[1]) == 0;
    }
    PropVariantClear(pvar);
    if ( !v10 )
    {
      v31 = (char *)this + 168;
      goto LABEL_50;
    }
  }
  if ( !*((_QWORD *)this + 207) )
  {
    v110 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v153,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v110);
  }
  SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 208));
  if ( !*((_QWORD *)this + 209) )
  {
    v109 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v152,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v109);
  }
  v12 = *((_QWORD *)this + 210);
  if ( !*(_BYTE *)(v12 + 52) )
    goto LABEL_16;
  v13 = (struct _RTL_CRITICAL_SECTION *)(v12 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 56));
  v130 = v12 + 56;
  v14 = 0LL;
  v126 = 0LL;
  v15 = 0LL;
  v127 = 0;
  v128 = 0;
  v16 = 0;
  if ( *(int *)(v12 + 40) > 0 )
  {
    while ( 1 )
    {
      v80 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v12 + 32, v16);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v126,
                            v80) )
        break;
      if ( (signed int)++v16 >= *(_DWORD *)(v12 + 40) )
      {
        v15 = v127;
        v14 = v126;
        goto LABEL_12;
      }
    }
    v81 = 2147942414LL;
    v82 = 502LL;
  }
  else
  {
LABEL_12:
    v17 = 0;
    if ( (int)v15 <= 0 )
    {
LABEL_13:
      if ( v14 )
      {
        if ( (int)v15 > 0 )
        {
          v85 = v14;
          do
          {
            std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v85);
            v85 += 16;
            --v15;
          }
          while ( v15 );
        }
        free(v14);
      }
      if ( v13 )
        goto LABEL_15;
      goto LABEL_16;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v126, v17)
                    + 20LL) )
      {
        v83 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                &v126,
                                                v17);
        v84 = SystemEffectChainDescriptor::Resolve(*v83, (struct SystemEffectDescriptor *)v12);
        if ( v84 < 0 )
          break;
      }
      if ( (int)++v17 >= (int)v15 )
        goto LABEL_13;
    }
    v81 = (unsigned int)v84;
    v82 = 508LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v82,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)v81,
    v116);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v126);
  if ( v12 != -56 )
LABEL_15:
    LeaveCriticalSection(v13);
LABEL_16:
  if ( !*((_QWORD *)this + 211) )
  {
    v108 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v151,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v108);
  }
  v18 = *((_QWORD *)this + 212);
  if ( *(_BYTE *)(v18 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 56));
    v145 = v18 + 56;
    v19 = 0LL;
    v122 = 0LL;
    v20 = 0LL;
    v123 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v119 = 0;
    if ( *(int *)(v18 + 40) > 0 )
    {
      v23 = 0LL;
      do
      {
        if ( v23 < 0 || (int)v22 >= *(_DWORD *)(v18 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v22);
          __debugbreak();
        }
        v24 = *(_QWORD *)(v18 + 32);
        v125 = v24;
        if ( (_DWORD)v20 == v21 )
        {
          if ( v21 )
          {
            v21 = 2 * (_DWORD)v20;
            if ( ((unsigned int)v20 & 0x40000000) != 0 )
              goto LABEL_159;
          }
          else
          {
            v21 = 1;
          }
          if ( (unsigned __int64)v21 > 0x7FFFFFF
            || (v25 = _o__recalloc(v19, v21, 16LL), (v19 = (volatile signed __int32 **)v25) == 0LL) )
          {
LABEL_159:
            v86 = 2147942414LL;
            v87 = 502LL;
            goto LABEL_161;
          }
          HIDWORD(v123) = v21;
          v122 = (volatile signed __int32 **)v25;
          LODWORD(v22) = v119;
          v24 = v125;
        }
        v26 = &v19[2 * (int)v20];
        if ( v26 )
        {
          *v26 = 0LL;
          v26[1] = 0LL;
          v27 = *(_QWORD *)(v23 + v24 + 8);
          if ( v27 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
            v21 = HIDWORD(v123);
            LODWORD(v20) = v123;
            v19 = v122;
          }
          *v26 = *(volatile signed __int32 **)(v23 + v24);
          v26[1] = *(volatile signed __int32 **)(v23 + v24 + 8);
        }
        v20 = (volatile signed __int32 *)(unsigned int)((_DWORD)v20 + 1);
        LODWORD(v123) = (_DWORD)v20;
        v22 = (unsigned int)(v22 + 1);
        v119 = v22;
        v23 += 16LL;
      }
      while ( (int)v22 < *(_DWORD *)(v18 + 40) );
    }
    v28 = 0LL;
    if ( (int)v20 <= 0 )
    {
LABEL_38:
      if ( v19 )
      {
        if ( (int)v20 > 0 )
        {
          ++v19;
          v28 = (unsigned int)v20;
          do
          {
            v20 = *v19;
            if ( *v19 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_167:
              (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, v22);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v20);
            }
            v19 += 2;
            --v28;
          }
          while ( v28 );
          v19 = v122;
        }
        free(v19);
      }
      v30 = (struct _RTL_CRITICAL_SECTION *)(v18 + 56);
      if ( v18 == -56 )
        goto LABEL_48;
    }
    else
    {
      v29 = v19;
      while ( 1 )
      {
        if ( (int)v28 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, v22);
          goto LABEL_167;
        }
        if ( *((_BYTE *)*v29 + 20) )
        {
          v88 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v122,
                                                  (unsigned int)v28);
          v89 = SystemEffectChainDescriptor::Resolve(*v88, (struct SystemEffectDescriptor *)v18);
          if ( v89 < 0 )
            break;
        }
        v28 = (unsigned int)(v28 + 1);
        v29 += 2;
        if ( (int)v28 >= (int)v20 )
          goto LABEL_38;
      }
      v86 = (unsigned int)v89;
      v87 = 508LL;
LABEL_161:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v87,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v86,
        v116);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v122);
      v30 = (struct _RTL_CRITICAL_SECTION *)(v18 + 56);
      if ( v18 == -56 )
        goto LABEL_48;
    }
    LeaveCriticalSection(v30);
  }
LABEL_48:
  if ( !*((_QWORD *)this + 19) )
  {
    v107 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v150,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v107);
  }
  v31 = (char *)*((_QWORD *)this + 20);
  v9 = 1;
  v4 = v131;
LABEL_50:
  v32 = 0;
  v33 = *((_DWORD *)v31 + 2);
  if ( v33 <= 0 )
    goto LABEL_169;
  v34 = *(_QWORD *)v31;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 16LL * v32) - *(_QWORD *)&v143.Data1;
    if ( !v35 )
      v35 = *(_QWORD *)(v34 + 16LL * v32 + 8) - *(_QWORD *)v143.Data4;
    if ( !v35 )
      break;
    if ( ++v32 >= v33 )
      goto LABEL_169;
  }
  if ( v32 == -1 )
  {
LABEL_169:
    DefaultConnectorProcessingModeInternal = (struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                                               this,
                                                               v162,
                                                               0LL,
                                                               0LL);
  }
  else
  {
    v160 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DefaultConnectorProcessingModeInternal = &v160;
  }
  v37 = *DefaultConnectorProcessingModeInternal;
  *v4 = 0LL;
  p_pv = &pv;
  v135 = 0LL;
  v136 = 1;
  v146 = v37;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               eHostProcessConnector,
                                               &v146,
                                               &v135);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    v39 = *((_QWORD *)this + 10);
    if ( !v39 )
      goto LABEL_63;
    *(_OWORD *)v140 = 0LL;
    v141 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v39 + 40LL))(
           v39,
           &PKEY_AudioEndpoint_Disable_SysFx,
           v140) >= 0
      && LOWORD(v140[0]) == 19 )
    {
      v9 = LODWORD(v140[1]) == 0;
    }
    PropVariantClear(v140);
    if ( !v9 )
    {
      v40 = (char *)this + 168;
    }
    else
    {
LABEL_63:
      if ( !*((_QWORD *)this + 19) )
      {
        v90 = gsl::fail_fast::fail_fast(
                (gsl::fail_fast *)v148,
                "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
        gsl::details::throw_exception<gsl::fail_fast>(v90);
      }
      v40 = (char *)*((_QWORD *)this + 20);
    }
    v41 = *((_DWORD *)v40 + 2);
    if ( v41 )
    {
      v42 = 0;
      if ( v41 <= 0 )
        goto LABEL_71;
      while ( 1 )
      {
        v43 = (_QWORD *)(*(_QWORD *)v40 + 16LL * v42);
        v44 = *v43 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
        if ( *v43 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
          v44 = v43[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
        if ( !v44 )
          break;
        if ( ++v42 >= v41 )
          goto LABEL_71;
      }
      if ( v42 == -1 )
      {
LABEL_71:
        v45 = 0;
        if ( v41 <= 0 )
          goto LABEL_174;
        while ( 1 )
        {
          v46 = (_QWORD *)(*(_QWORD *)v40 + 16LL * v45);
          v47 = *v46 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
          if ( *v46 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
            v47 = v46[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
          if ( !v47 )
            break;
          if ( ++v45 >= v41 )
            goto LABEL_174;
        }
        if ( v45 == -1 )
LABEL_174:
          v48 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v40, 0LL);
        else
          v48 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        v48 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    else
    {
      v48 = GUID_00000000_0000_0000_0000_000000000000;
    }
    v142.m256i_i64[0] = (__int64)this;
    v142.m256i_i32[2] = 0;
    *(GUID *)((char *)&v142.m256i_u64[1] + 4) = v48;
    v147 = v142;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                 this,
                                                 0,
                                                 0,
                                                 eHostProcessConnector,
                                                 (unsigned __int16 **)&v147,
                                                 (LPVOID *)&v135);
  }
  if ( v136 )
  {
    v49 = *p_pv;
    *p_pv = v135;
    if ( v49 )
      CoTaskMemFree(v49);
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E8,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode,
      v116);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A4,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode,
      v117);
    return (unsigned int)ProposedConnectorFormatForProcessingMode;
  }
  v50 = pv;
  v51 = (unsigned __int16 *)pv;
  *v4 = 30000LL;
  v144 = v37;
  if ( !*((_QWORD *)this + 215) )
  {
    v106 = gsl::fail_fast::fail_fast(
             (gsl::fail_fast *)v149,
             "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v106);
  }
  v52 = (__int64 *)*((_QWORD *)this + 216);
  v53 = 0;
  v54 = *((_DWORD *)v52 + 4);
  if ( v54 <= 0 )
    goto LABEL_84;
  v91 = *v52;
  while ( 1 )
  {
    v92 = *(_QWORD *)(v91 + 16LL * v53) - *(_QWORD *)&v144.Data1;
    if ( !v92 )
      v92 = *(_QWORD *)(v91 + 16LL * v53 + 8) - *(_QWORD *)v144.Data4;
    if ( !v92 )
      break;
    if ( ++v53 >= v54 )
      goto LABEL_84;
  }
  if ( v53 == -1 )
  {
LABEL_84:
    v161 = v37;
    v55 = &v161;
  }
  else
  {
    *(struct _GUID *)v142.m256i_i8 = v37;
    v93 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((char *)this + 1720, 0LL);
    Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v93, &v142);
    if ( Key == -1 )
    {
      v97 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      if ( Key < 0 || Key >= *(_DWORD *)(v96 + 16) )
      {
        ATL::_AtlRaiseException(0xC000008C, v95);
        __debugbreak();
      }
      v97 = *(GUID *)(*(_QWORD *)(v96 + 8) + 16LL * Key);
    }
    v159 = v97;
    v55 = &v159;
    v50 = pv;
  }
  v56 = *v55;
  v158 = v56;
  v57 = *(_QWORD *)&v56.Data1;
  v130 = *(_QWORD *)&v56.Data1;
  v58 = *(_QWORD *)&v56.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  v59 = *(_QWORD *)v56.Data4;
  if ( *(_QWORD *)&v56.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v58 = *(_QWORD *)v56.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v58 )
  {
    v158 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v57 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v130 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v59 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  }
  v60 = 0;
  v118 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v125 = i;
    v62 = *((_QWORD *)this + 28);
    if ( v60 >= *(_DWORD *)(v62 + 8) )
      goto LABEL_134;
    if ( i < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, v57);
      __debugbreak();
    }
    v63 = *(_QWORD *)(i + *(_QWORD *)v62);
    v64 = *(_QWORD *)v63 - v57;
    if ( *(_QWORD *)v63 == v57 )
      v64 = *(_QWORD *)(v63 + 8) - v59;
    if ( !v64 )
    {
      v65 = 0;
      v120 = 0;
      if ( *(int *)(v63 + 24) > 0 )
        break;
    }
LABEL_223:
    v118 = ++v60;
  }
  p_LockCount = 0LL;
  lpCriticalSection = 0LL;
  while ( 1 )
  {
    if ( p_LockCount < 0 || v65 >= *(_DWORD *)(v63 + 24) )
    {
      ATL::_AtlRaiseException(0xC000008C, v57);
      __debugbreak();
    }
    v67 = *(int **)(p_LockCount + *(_QWORD *)(v63 + 16));
    v68 = *(unsigned __int16 **)v67;
    if ( !v51 )
    {
      if ( !v68 )
        goto LABEL_131;
      goto LABEL_221;
    }
    if ( !v68 )
      goto LABEL_221;
    LODWORD(v57) = *v51;
    v69 = v51[8];
    if ( (_WORD)v57 == 0xFFFE )
    {
      if ( v69 != 22 )
      {
        v98 = *((_QWORD *)v51 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v98 )
          v98 = *((_QWORD *)v51 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v98 )
        {
          v99 = *((_QWORD *)v51 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v99 )
            v99 = *((_QWORD *)v51 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v99 )
            goto LABEL_221;
        }
      }
      Buf1 = *(_OWORD *)v51;
      *(_OWORD *)v157 = *((_OWORD *)v51 + 1);
      *(_QWORD *)&v157[16] = *((_QWORD *)v51 + 4);
      *(_WORD *)v157 = 22;
      v70 = *(_DWORD *)&v157[4];
      v71 = Buf1;
    }
    else
    {
      if ( v69 && (((_WORD)v57 - 1) & 0xFFFD) != 0 )
        goto LABEL_221;
      v100 = v51[1];
      if ( (unsigned __int16)(v100 - 1) > 1u )
        goto LABEL_221;
      v101 = v51[7];
      if ( ((v101 - 8) & 0xFFE7) != 0 )
        goto LABEL_221;
      Buf1 = *(_OWORD *)v51;
      v71 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v157 = 22;
      *(_WORD *)&v157[2] = v101;
      *(GUID *)&v157[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v157[8] = v57;
      v70 = (v100 == 1) + 3;
      *(_DWORD *)&v157[4] = v70;
    }
    LODWORD(v57) = *v68;
    v72 = v68[8];
    if ( (_WORD)v57 == 0xFFFE )
      break;
    if ( !v72 || (((_WORD)v57 - 1) & 0xFFFD) == 0 )
    {
      v104 = v68[1];
      if ( (unsigned __int16)(v104 - 1) <= 1u )
      {
        v105 = v68[7];
        v74 = -2;
        if ( ((v105 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v68;
          LOWORD(Buf2) = -2;
          *(_WORD *)&v155[2] = v105;
          *(GUID *)&v155[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v155[8] = v57;
          v73 = (v104 == 1) + 3;
          *(_DWORD *)&v155[4] = v73;
          goto LABEL_107;
        }
      }
    }
LABEL_221:
    v65 = v120 + 1;
    v120 = v65;
    p_LockCount = (__int64)&lpCriticalSection->LockCount;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)lpCriticalSection + 8);
    if ( v65 >= *(_DWORD *)(v63 + 24) )
    {
      v59 = *(_QWORD *)v158.Data4;
      v57 = v130;
      i = v125;
      v60 = v118;
      goto LABEL_223;
    }
  }
  if ( v72 != 22 )
  {
    v102 = *((_QWORD *)v68 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v102 )
      v102 = *((_QWORD *)v68 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v102 )
    {
      v103 = *((_QWORD *)v68 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v103 )
        v103 = *((_QWORD *)v68 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v103 )
        goto LABEL_221;
    }
  }
  Buf2 = *(_OWORD *)v68;
  *(_OWORD *)v155 = *((_OWORD *)v68 + 1);
  *(_QWORD *)&v155[16] = *((_QWORD *)v68 + 4);
  v73 = *(_DWORD *)&v155[4];
  v74 = Buf2;
LABEL_107:
  *(_WORD *)v155 = 22;
  if ( WORD1(Buf1) )
  {
    LODWORD(v57) = WORD1(Buf2);
  }
  else
  {
    LODWORD(v57) = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v75 = DWORD1(Buf2);
  }
  else
  {
    v75 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v76 = HIWORD(Buf2);
  }
  else
  {
    v76 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v70 )
  {
    v73 = 0;
    *(_DWORD *)&v155[4] = 0;
  }
  if ( !v71 )
  {
    v74 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !(_WORD)v57 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v75 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v76 )
    HIDWORD(Buf1) = 0;
  if ( !v73 )
    *(_DWORD *)&v157[4] = 0;
  if ( !v74 )
    LOWORD(Buf1) = 0;
  v77 = *(_QWORD *)&v157[8] - *(_QWORD *)&v155[8];
  if ( *(_QWORD *)&v157[8] == *(_QWORD *)&v155[8] )
    v77 = *(_QWORD *)&v157[16] - *(_QWORD *)&v155[16];
  if ( v77 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_221;
LABEL_131:
  v78 = (unsigned int)(int)((double)v67[4] * 10000000.0 / (double)*((int *)v51 + 1) + 0.5);
  if ( v78 >= *v131 )
    v78 = *v131;
  *v131 = v78;
LABEL_134:
  pv = 0LL;
  if ( v50 )
    CoTaskMemFree(v50);
  v5 = v137;
  v6 = v129;
LABEL_137:
  if ( !v5 )
    return 0LL;
  if ( v6 )
  {
    *v5 = 100000LL;
    return 0LL;
  }
  while ( 1 )
  {
    *(_OWORD *)v132 = 0LL;
    v133 = 0LL;
    v111 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
             *((_QWORD *)this + 5),
             &PKEY_AudioEngine_Period,
             v132);
    v112 = v111;
    if ( v111 < 0 )
    {
      v115 = 8376LL;
      goto LABEL_246;
    }
    if ( LOWORD(v132[0]) != 65 )
      break;
    if ( LODWORD(v132[1]) != 8 )
      goto LABEL_244;
    v113 = *v133;
    *v5 = *v133;
    if ( v113 )
      goto LABEL_243;
    if ( (unsigned int)++v8 >= 0x7D0 )
    {
      v112 = -2147467259;
      v114 = 2147500037LL;
      v115 = 8389LL;
      goto LABEL_247;
    }
    Sleep(5u);
    PropVariantClear(v132);
  }
  if ( LOWORD(v132[0]) )
  {
LABEL_244:
    v112 = -2147024809;
    v114 = 2147942487LL;
    v115 = 8402LL;
    goto LABEL_247;
  }
  *v5 = 100000LL;
  v111 = CEndpointCharacteristics::SetProcessingPeriod(this, v5);
  v112 = v111;
  if ( v111 >= 0 )
  {
LABEL_243:
    PropVariantClear(v132);
    return 0LL;
  }
  v115 = 8398LL;
LABEL_246:
  v114 = (unsigned int)v111;
LABEL_247:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v115,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v114,
    v116);
  PropVariantClear(v132);
  return v112;
}
