/*
 * XREFs of ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180021780
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006EDF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180023A30 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180032860 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180032900 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052E20 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069C20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE10C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___ @ 0x1800DB398 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800DB398.c)
 *     ?AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800DB984 (-AreResourcesAvailableForStream@@YAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18011C704 (-GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsConnectorModeSupportedForSWAPOFallback@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18011E554 (-IsConnectorModeSupportedForSWAPOFallback@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_au.c)
 *     ?IsSWAPOFallbackSupported@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011ED0C (-IsSWAPOFallbackSupported@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall UseSupportedConnectorMode(
        struct CEndpointCharacteristics *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        int a5,
        bool *a6)
{
  struct _GUID *v6; // r14
  unsigned __int64 v7; // rdi
  CEndpointCharacteristics *v8; // r13
  bool *v9; // rsi
  BOOL v10; // ebx
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  volatile signed __int32 **v14; // rdx
  volatile signed __int32 **v15; // rdi
  volatile signed __int32 *v16; // rbx
  int v17; // esi
  int v18; // r12d
  __int64 v19; // r15
  __int64 v20; // rax
  volatile signed __int32 **v21; // rcx
  volatile signed __int32 *v22; // rax
  __int64 v23; // rsi
  volatile signed __int32 **v24; // r15
  struct _RTL_CRITICAL_SECTION *v25; // rcx
  CEndpointCharacteristics *v26; // r13
  __int64 v27; // rdi
  struct _RTL_CRITICAL_SECTION *v28; // rbx
  char *v29; // rsi
  __int64 v30; // r15
  unsigned int v31; // r12d
  unsigned int v32; // r12d
  __int64 v33; // r13
  volatile signed __int32 **v34; // rbx
  volatile signed __int32 *v35; // rdi
  int v36; // esi
  signed int v37; // edx
  __int64 v38; // r15
  volatile signed __int32 **v39; // r8
  __int64 v40; // rax
  volatile signed __int32 **v41; // rcx
  volatile signed __int32 *v42; // rax
  __int64 v43; // rsi
  volatile signed __int32 **v44; // r15
  __int64 v45; // rax
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  SystemEffectChainDescriptor **v53; // rax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rdx
  SystemEffectChainDescriptor **v58; // rax
  int v59; // eax
  char *v60; // rdi
  __int64 v61; // r9
  __int64 v62; // rdx
  SystemEffectChainDescriptor **v63; // rax
  int v64; // eax
  int v65; // eax
  unsigned int v66; // ebx
  int v67; // eax
  __int64 v68; // r9
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v72; // edx
  __int64 v73; // rbx
  int AvailableConnectorCount; // eax
  unsigned int v75; // eax
  LPVOID v76; // rbx
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // [rsp+20h] [rbp-E0h]
  char v83; // [rsp+30h] [rbp-D0h] BYREF
  char v84; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v85; // [rsp+34h] [rbp-CCh] BYREF
  int v86; // [rsp+38h] [rbp-C8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 **v89; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 **v91; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h] BYREF
  char *v94; // [rsp+78h] [rbp-88h] BYREF
  __int64 v95; // [rsp+80h] [rbp-80h]
  __int128 v96; // [rsp+88h] [rbp-78h] BYREF
  __int64 v97; // [rsp+98h] [rbp-68h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v98; // [rsp+A0h] [rbp-60h]
  int v99; // [rsp+A4h] [rbp-5Ch]
  unsigned int v100[2]; // [rsp+A8h] [rbp-58h]
  CEndpointCharacteristics *v101; // [rsp+B0h] [rbp-50h]
  LPCRITICAL_SECTION v102; // [rsp+B8h] [rbp-48h] BYREF
  bool *v103; // [rsp+C0h] [rbp-40h]
  struct _GUID *v104; // [rsp+C8h] [rbp-38h]
  PROPVARIANT pvar[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-20h]
  struct _GUID v107; // [rsp+F0h] [rbp-10h]
  _QWORD v108[8]; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v109; // [rsp+140h] [rbp+40h] BYREF
  struct _GUID v110; // [rsp+150h] [rbp+50h] BYREF
  char v111[24]; // [rsp+160h] [rbp+60h] BYREF
  char v112[24]; // [rsp+178h] [rbp+78h] BYREF
  char v113[24]; // [rsp+190h] [rbp+90h] BYREF
  char v114[24]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v115[80]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v6 = a4;
  v104 = a4;
  v7 = a3;
  v98 = a3;
  v99 = a2;
  v8 = a1;
  v101 = a1;
  v9 = a6;
  v103 = a6;
  v86 = 0;
  v107 = *a4;
  if ( a3 )
    goto LABEL_7;
  v10 = 1;
  v11 = *((_QWORD *)a1 + 10);
  if ( !v11 )
    goto LABEL_7;
  *(_OWORD *)pvar = 0LL;
  v106 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
         v11,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v10 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v10 )
  {
LABEL_7:
    v12 = v7;
    if ( v7 >= *((_QWORD *)v8 + 207) )
    {
      v81 = gsl::fail_fast::fail_fast(
              (gsl::fail_fast *)v115,
              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 1;
      gsl::details::throw_exception<gsl::fail_fast>(v81);
    }
    v13 = *((_QWORD *)v8 + 208) + 96 * v7;
    if ( *(_BYTE *)(v13 + 52) )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v13 + 56);
      EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 56));
      v108[4] = v13 + 56;
      v15 = 0LL;
      v89 = 0LL;
      v16 = 0LL;
      v90 = 0LL;
      v17 = 0;
      v18 = 0;
      if ( *(int *)(v13 + 40) > 0 )
      {
        v19 = 0LL;
        do
        {
          if ( v19 < 0 || v18 >= *(_DWORD *)(v13 + 40) )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v14);
            __debugbreak();
          }
          v14 = (volatile signed __int32 **)(v19 + *(_QWORD *)(v13 + 32));
          *(_QWORD *)v100 = v14;
          if ( (_DWORD)v16 == v17 )
          {
            if ( v17 )
            {
              v17 = 2 * (_DWORD)v16;
              if ( ((unsigned int)v16 & 0x40000000) != 0 )
                goto LABEL_90;
            }
            else
            {
              v17 = 1;
            }
            if ( (unsigned __int64)v17 > 0x7FFFFFF
              || (v20 = _o__recalloc(v15, v17, 16LL), (v15 = (volatile signed __int32 **)v20) == 0LL) )
            {
LABEL_90:
              v51 = 2147942414LL;
              v52 = 502LL;
              goto LABEL_92;
            }
            HIDWORD(v90) = v17;
            v89 = (volatile signed __int32 **)v20;
            v14 = *(volatile signed __int32 ***)v100;
          }
          v21 = &v15[2 * (int)v16];
          if ( v21 )
          {
            *v21 = 0LL;
            v21[1] = 0LL;
            v22 = v14[1];
            if ( v22 )
            {
              _InterlockedIncrement(v22 + 2);
              v17 = HIDWORD(v90);
              LODWORD(v16) = v90;
              v15 = v89;
            }
            *v21 = *v14;
            v21[1] = v14[1];
          }
          v16 = (volatile signed __int32 *)(unsigned int)((_DWORD)v16 + 1);
          LODWORD(v90) = (_DWORD)v16;
          ++v18;
          v19 += 16LL;
        }
        while ( v18 < *(_DWORD *)(v13 + 40) );
      }
      v23 = 0LL;
      if ( (int)v16 <= 0 )
      {
LABEL_29:
        if ( v15 )
        {
          if ( (int)v16 > 0 )
          {
            ++v15;
            v23 = (unsigned int)v16;
            do
            {
              v16 = *v15;
              if ( *v15 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_98:
                (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v16);
              }
              v15 += 2;
              --v23;
            }
            while ( v23 );
            v15 = v89;
          }
          free(v15);
        }
        v25 = lpCriticalSection;
        if ( lpCriticalSection )
LABEL_38:
          LeaveCriticalSection(v25);
      }
      else
      {
        v24 = v15;
        while ( 1 )
        {
          if ( (int)v23 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v14);
            goto LABEL_98;
          }
          if ( *((_BYTE *)*v24 + 20) )
          {
            v53 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v89,
                                                    (unsigned int)v23);
            v54 = SystemEffectChainDescriptor::Resolve(*v53, (struct SystemEffectDescriptor *)v13);
            if ( v54 < 0 )
              break;
          }
          v23 = (unsigned int)(v23 + 1);
          v24 += 2;
          if ( (int)v23 >= (int)v16 )
            goto LABEL_29;
        }
        v51 = (unsigned int)v54;
        v52 = 508LL;
LABEL_92:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v52,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v51,
          v82);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v89);
        v25 = lpCriticalSection;
        if ( lpCriticalSection )
          goto LABEL_38;
      }
    }
    v26 = v101;
    if ( v12 >= *((_QWORD *)v101 + 209) )
    {
      v80 = gsl::fail_fast::fail_fast(
              (gsl::fail_fast *)v114,
              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 2;
      gsl::details::throw_exception<gsl::fail_fast>(v80);
    }
    v27 = *((_QWORD *)v101 + 210) + 96 * v12;
    if ( !*(_BYTE *)(v27 + 52) )
      goto LABEL_46;
    v28 = (struct _RTL_CRITICAL_SECTION *)(v27 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v27 + 56));
    v108[5] = v27 + 56;
    v29 = 0LL;
    v94 = 0LL;
    v30 = 0LL;
    v95 = 0LL;
    v31 = 0;
    if ( *(int *)(v27 + 40) > 0 )
    {
      while ( 1 )
      {
        v55 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v27 + 32, v31);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v94,
                              v55) )
          break;
        if ( (signed int)++v31 >= *(_DWORD *)(v27 + 40) )
        {
          v30 = (unsigned int)v95;
          v29 = v94;
          goto LABEL_42;
        }
      }
      v56 = 2147942414LL;
      v57 = 502LL;
    }
    else
    {
LABEL_42:
      v32 = 0;
      if ( (int)v30 <= 0 )
      {
LABEL_43:
        if ( v29 )
        {
          if ( (int)v30 > 0 )
          {
            v60 = v29;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v60);
              v60 += 16;
              --v30;
            }
            while ( v30 );
          }
          free(v29);
        }
        if ( v28 )
          goto LABEL_45;
        goto LABEL_46;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v94, v32)
                      + 20LL) )
        {
          v58 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                  &v94,
                                                  v32);
          v59 = SystemEffectChainDescriptor::Resolve(*v58, (struct SystemEffectDescriptor *)v27);
          if ( v59 < 0 )
            break;
        }
        if ( (int)++v32 >= (int)v30 )
          goto LABEL_43;
      }
      v56 = (unsigned int)v59;
      v57 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v57,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v56,
      v82);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v94);
    if ( v27 != -56 )
LABEL_45:
      LeaveCriticalSection(v28);
LABEL_46:
    if ( v12 >= *((_QWORD *)v26 + 211) )
    {
      v79 = gsl::fail_fast::fail_fast(
              (gsl::fail_fast *)v113,
              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 4;
      gsl::details::throw_exception<gsl::fail_fast>(v79);
    }
    v33 = *((_QWORD *)v26 + 212) + 96 * v12;
    if ( *(_BYTE *)(v33 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
      v108[6] = v33 + 56;
      v34 = 0LL;
      v91 = 0LL;
      v35 = 0LL;
      v92 = 0LL;
      v36 = 0;
      v37 = 0;
      LODWORD(lpCriticalSection) = 0;
      if ( *(int *)(v33 + 40) > 0 )
      {
        v38 = 0LL;
        do
        {
          if ( v38 < 0 || v37 >= *(_DWORD *)(v33 + 40) )
          {
            ATL::_AtlRaiseException(0xC000008C, v37);
            __debugbreak();
          }
          v39 = (volatile signed __int32 **)(v38 + *(_QWORD *)(v33 + 32));
          *(_QWORD *)v100 = v39;
          if ( (_DWORD)v35 == v36 )
          {
            if ( v36 )
            {
              v36 = 2 * (_DWORD)v35;
              if ( ((unsigned int)v35 & 0x40000000) != 0 )
                goto LABEL_115;
            }
            else
            {
              v36 = 1;
            }
            if ( (unsigned __int64)v36 > 0x7FFFFFF
              || (v40 = _o__recalloc(v34, v36, 16LL), (v34 = (volatile signed __int32 **)v40) == 0LL) )
            {
LABEL_115:
              v61 = 2147942414LL;
              v62 = 502LL;
              goto LABEL_117;
            }
            HIDWORD(v92) = v36;
            v91 = (volatile signed __int32 **)v40;
            v37 = (int)lpCriticalSection;
            v39 = *(volatile signed __int32 ***)v100;
          }
          v41 = &v34[2 * (int)v35];
          if ( v41 )
          {
            *v41 = 0LL;
            v41[1] = 0LL;
            v42 = v39[1];
            if ( v42 )
            {
              _InterlockedIncrement(v42 + 2);
              v36 = HIDWORD(v92);
              LODWORD(v35) = v92;
              v34 = v91;
            }
            *v41 = *v39;
            v41[1] = v39[1];
          }
          v35 = (volatile signed __int32 *)(unsigned int)((_DWORD)v35 + 1);
          LODWORD(v92) = (_DWORD)v35;
          LODWORD(lpCriticalSection) = ++v37;
          v38 += 16LL;
        }
        while ( v37 < *(_DWORD *)(v33 + 40) );
      }
      v43 = 0LL;
      if ( (int)v35 <= 0 )
      {
LABEL_68:
        if ( v34 )
        {
          if ( (int)v35 > 0 )
          {
            ++v34;
            v43 = (unsigned int)v35;
            do
            {
              v35 = *v34;
              if ( *v34 && _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
              {
LABEL_123:
                (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v35);
              }
              v34 += 2;
              --v43;
            }
            while ( v43 );
            v34 = v91;
          }
          free(v34);
        }
        if ( v33 == -56 )
          goto LABEL_78;
      }
      else
      {
        v44 = v34;
        while ( 1 )
        {
          if ( (int)v43 < 0 )
          {
            ATL::_AtlRaiseException(0xC000008C, v37);
            goto LABEL_123;
          }
          if ( *((_BYTE *)*v44 + 20) )
          {
            v63 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                    &v91,
                                                    (unsigned int)v43);
            v64 = SystemEffectChainDescriptor::Resolve(*v63, (struct SystemEffectDescriptor *)v33);
            if ( v64 < 0 )
              break;
          }
          v43 = (unsigned int)(v43 + 1);
          v44 += 2;
          if ( (int)v43 >= (int)v35 )
            goto LABEL_68;
        }
        v61 = (unsigned int)v64;
        v62 = 508LL;
LABEL_117:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v62,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v61,
          v82);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&v91);
        if ( v33 == -56 )
          goto LABEL_78;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
    }
LABEL_78:
    v8 = v101;
    if ( v12 >= *((_QWORD *)v101 + 19) )
    {
      v78 = gsl::fail_fast::fail_fast(
              (gsl::fail_fast *)v112,
              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
      v86 = 8;
      gsl::details::throw_exception<gsl::fail_fast>(v78);
    }
    v45 = 16 * v12 + *((_QWORD *)v101 + 20);
    LODWORD(v7) = v98;
    v9 = v103;
    v6 = v104;
    goto LABEL_80;
  }
  v45 = (__int64)v8 + 168;
LABEL_80:
  v46 = 0;
  v47 = *(_DWORD *)(v45 + 8);
  if ( v47 <= 0 )
    goto LABEL_86;
  v48 = *(_QWORD *)v45;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v48 + 16LL * v46) - *(_QWORD *)&v107.Data1;
    if ( !v49 )
      v49 = *(_QWORD *)(v48 + 16LL * v46 + 8) - *(_QWORD *)v107.Data4;
    if ( !v49 )
      break;
    if ( ++v46 >= v47 )
      goto LABEL_86;
  }
  if ( v46 == -1 )
  {
LABEL_86:
    *v9 = 0;
    return 0LL;
  }
  *v9 = 1;
  if ( !a5
    || !CEndpointCharacteristics::IsSWAPOFallbackSupported(
          v8,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v7) )
  {
    return 0LL;
  }
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v65 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v8 + 2) + 40LL))(*((_QWORD *)v8 + 2), &pv);
  v66 = v65;
  if ( v65 >= 0 )
  {
    v93 = 0LL;
    v67 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
            g_DeviceGraphStore,
            pv,
            &v93);
    v66 = v67;
    if ( v67 < 0 )
    {
      v68 = (unsigned int)v67;
      v69 = 707LL;
LABEL_156:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v69,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v68,
        v82);
LABEL_157:
      if ( v93 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
      goto LABEL_159;
    }
    v83 = 0;
    v84 = 0;
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v93 + 112LL))(v93, &v102);
    v96 = 0LL;
    v97 = 0LL;
    v70 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v93 + 80LL))(v93, &v96);
    v66 = v70;
    if ( v70 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CA,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v70,
        v82);
      v71 = v96;
      if ( (_QWORD)v96 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v96);
        std::_Deallocate<16,0>(v71, 8 * ((v97 - v71) >> 3));
        v96 = 0LL;
        v97 = 0LL;
      }
      if ( v102 )
        LeaveCriticalSection(v102);
      goto LABEL_157;
    }
    v108[0] = &v83;
    v108[1] = v6;
    v108[2] = &v84;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___(
      v111,
      v96,
      *((_QWORD *)&v96 + 1),
      v108);
    v73 = v96;
    if ( (_QWORD)v96 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v96);
      std::_Deallocate<16,0>(v73, 8 * ((v97 - v73) >> 3));
      v96 = 0LL;
      v97 = 0LL;
    }
    if ( v102 )
      LeaveCriticalSection(v102);
    if ( !v84 )
    {
      AvailableConnectorCount = CEndpointCharacteristics::GetAvailableConnectorCount(v8, v72, &v85);
      v66 = AvailableConnectorCount;
      if ( AvailableConnectorCount < 0 )
      {
        v68 = (unsigned int)AvailableConnectorCount;
        v69 = 727LL;
        goto LABEL_156;
      }
      v109 = *v6;
      if ( CEndpointCharacteristics::IsConnectorModeSupportedForSWAPOFallback(
             v8,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v7,
             &v109) )
      {
        v75 = v85;
        if ( v83 )
          v75 = ++v85;
        if ( v75 <= 1
          || (v110 = *v6,
              v76 = pv,
              v77 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v8 + 56LL))(v8),
              !(unsigned int)AreResourcesAvailableForStream(v76, v77, &v110, (unsigned int)v7)) )
        {
          *v9 = 0;
        }
      }
      else if ( !v83 && v85 <= 1 )
      {
        v66 = -2004287478;
        v68 = 2290679818LL;
        v69 = 754LL;
        goto LABEL_156;
      }
    }
    if ( v93 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BF,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v65,
    v82);
LABEL_159:
  if ( pv )
    CoTaskMemFree(pv);
  return v66;
}
