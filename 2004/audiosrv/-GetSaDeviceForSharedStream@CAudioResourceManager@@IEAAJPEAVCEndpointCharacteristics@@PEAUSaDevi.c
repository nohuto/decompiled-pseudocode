/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180013C08
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB74C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D48 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006921C (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_413ceff6df6ff7d9a560b32e6a719ff0___ @ 0x18006FF18 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006FF18.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a2fefe741e044b1f018eee6408496d06___ @ 0x18006FFEC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006FFEC.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b78fc1840c3dd433f506de497cc33a0a___ @ 0x180070168 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180070168.c)
 *     _lambda_413ceff6df6ff7d9a560b32e6a719ff0_::_lambda_413ceff6df6ff7d9a560b32e6a719ff0_ @ 0x18007033C (_lambda_413ceff6df6ff7d9a560b32e6a719ff0_--_lambda_413ceff6df6ff7d9a560b32e6a719ff0_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180070418 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_413ceff6df6ff7d9a560b32e6a719ff0_::__lambda_413ceff6df6ff7d9a560b32e6a719ff0_ @ 0x180070424 (_lambda_413ceff6df6ff7d9a560b32e6a719ff0_--__lambda_413ceff6df6ff7d9a560b32e6a719ff0_.c)
 *     memcmp_0 @ 0x180074C43 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE10C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E485C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___ @ 0x1800EAEF0 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800EE104 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800EED80 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_i @ 0x1800EEE74 (WPP_SF_i.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        bool a7,
        bool a8,
        struct CAudioSessionManager *a9,
        bool a10,
        bool a11,
        struct ISaDeviceProxy **a12)
{
  struct ISaDeviceProxy **v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned int SaDeviceForPackagedApp; // ebx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  bool v25; // si
  __int64 v26; // rdi
  CAudioResourceManager *v27; // rcx
  bool v28; // zf
  enum _AUDCLNT_SHAREMODE v29; // edi
  __int64 v30; // rdx
  int v31; // eax
  int v32; // edi
  int v33; // eax
  char v34; // r15
  _QWORD *i; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned __int16 *v38; // rsi
  __int64 v39; // rdi
  const void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  struct ISaDeviceProxy *v44; // rcx
  char v45; // si
  char v46; // di
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // eax
  unsigned int v53; // edx
  int v54; // eax
  unsigned __int64 v55; // r9
  __int64 v56; // rdx
  struct ISaDeviceProxy **v57; // rbx
  struct CEndpointCharacteristics *v58; // rsi
  unsigned int v59; // eax
  unsigned int v60; // edx
  int v61; // ebx
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // rbx
  __int64 v69; // rax
  enum _AUDCLNT_SHAREMODE v70; // [rsp+20h] [rbp-C9h]
  LPVOID pv; // [rsp+50h] [rbp-99h] BYREF
  __int128 v72; // [rsp+58h] [rbp-91h] BYREF
  __int64 v73; // [rsp+68h] [rbp-81h]
  __int64 v74; // [rsp+70h] [rbp-79h] BYREF
  SaDeviceParams *v75; // [rsp+78h] [rbp-71h] BYREF
  struct ISaDeviceProxy **v76; // [rsp+80h] [rbp-69h]
  __int64 v77; // [rsp+88h] [rbp-61h] BYREF
  unsigned int v78; // [rsp+90h] [rbp-59h]
  struct ISaDeviceProxy *v79; // [rsp+98h] [rbp-51h] BYREF
  struct CEndpointCharacteristics *v80; // [rsp+A0h] [rbp-49h] BYREF
  __int128 v81; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-31h]
  _QWORD v83[2]; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v84; // [rsp+D0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+3Fh]

  v78 = a4;
  v80 = a2;
  v83[0] = a6;
  v14 = a12;
  v76 = a12;
  LODWORD(v75) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids, *(_QWORD *)a3);
  }
  v84 = *((_OWORD *)a3 + 3);
  v15 = *((int *)a3 + 2);
  if ( v15 >= *((_QWORD *)a2 + 219) )
  {
    v69 = gsl::fail_fast::fail_fast(
            (gsl::fail_fast *)&v72,
            "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    LODWORD(v75) = 1;
    gsl::details::throw_exception<gsl::fail_fast>(v69);
  }
  v16 = *((_QWORD *)a2 + 220) + 16 * v15;
  v17 = 0;
  v18 = *(_DWORD *)(v16 + 8);
  if ( v18 <= 0 )
  {
LABEL_9:
    v17 = -1;
  }
  else
  {
    while ( *(_OWORD *)(*(_QWORD *)v16 + 16LL * v17) != v84 )
    {
      if ( ++v17 >= v18 )
        goto LABEL_9;
    }
  }
  if ( v17 == -1 )
    goto LABEL_30;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v19 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a2 + 2) + 40LL))(*((_QWORD *)a2 + 2), &pv);
  SaDeviceForPackagedApp = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v19,
      v70);
LABEL_20:
    if ( pv )
      CoTaskMemFree(pv);
    return SaDeviceForPackagedApp;
  }
  v74 = 0LL;
  v21 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          pv,
          &v74);
  SaDeviceForPackagedApp = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v21,
      v70);
LABEL_18:
    if ( v74 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
    goto LABEL_20;
  }
  v72 = 0LL;
  v73 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v74 + 80LL))(v74, &v72);
  SaDeviceForPackagedApp = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x710,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v22,
      v70);
    v23 = v72;
    if ( (_QWORD)v72 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v72);
      std::_Deallocate<16,0>(v23, (v73 - v23) & 0xFFFFFFFFFFFFFFF8uLL);
      v72 = 0LL;
      v73 = 0LL;
    }
    goto LABEL_18;
  }
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___(
    &v77,
    v72,
    *((_QWORD *)&v72 + 1),
    a3);
  v25 = v77 == *((_QWORD *)&v72 + 1);
  SaDeviceForPackagedApp = v77 != *((_QWORD *)&v72 + 1) ? 0x887C0043 : 0;
  v26 = v72;
  if ( (_QWORD)v72 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v72);
    std::_Deallocate<16,0>(v26, (v73 - v26) & 0xFFFFFFFFFFFFFFF8uLL);
    v72 = 0LL;
    v73 = 0LL;
  }
  if ( v74 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  v27 = (CAudioResourceManager *)pv;
  if ( pv )
    CoTaskMemFree(pv);
  v28 = !v25;
  v14 = v76;
  if ( v28 )
  {
    v29 = a5;
  }
  else
  {
LABEL_30:
    v29 = a5;
    v70 = a5;
    SaDeviceForPackagedApp = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
                               g_DeviceGraphManager,
                               a2,
                               a3,
                               v78);
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
        SaDeviceForPackagedApp);
    }
  }
  if ( SaDeviceForPackagedApp == -2005139364 )
  {
    if ( a8 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(v27, a2, a3, v78, v29, a6, a9, v14);
      if ( (SaDeviceForPackagedApp & 0x80000000) == 0 )
        return 0LL;
      v30 = 1838LL;
      goto LABEL_39;
    }
LABEL_43:
    v30 = 2081LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)SaDeviceForPackagedApp,
      v70);
    return SaDeviceForPackagedApp;
  }
  if ( SaDeviceForPackagedApp != -2005139360 && SaDeviceForPackagedApp != -2005139389 )
  {
    if ( (SaDeviceForPackagedApp & 0x80000000) == 0 )
      return 0LL;
    goto LABEL_43;
  }
  pv = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&pv);
  v31 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, LPVOID *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          *(_QWORD *)a3,
          &pv);
  v32 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v31,
      v70);
LABEL_148:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&pv);
    return (unsigned int)v32;
  }
  v81 = 0LL;
  v82 = 0LL;
  v33 = (*(__int64 (__fastcall **)(LPVOID, __int128 *))(*(_QWORD *)pv + 80LL))(pv, &v81);
  v32 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v33,
      v70);
LABEL_146:
    v67 = v81;
    if ( (_QWORD)v81 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v81);
      std::_Deallocate<16,0>(v67, (v82 - v67) & 0xFFFFFFFFFFFFFFF8uLL);
      v81 = 0LL;
      v82 = 0LL;
    }
    goto LABEL_148;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
      (__int64)(*((_QWORD *)&v81 + 1) - v81) >> 3);
  }
  v79 = 0LL;
  v34 = 0;
  for ( i = (_QWORD *)v81; ; ++i )
  {
    v36 = (_QWORD *)*((_QWORD *)&v81 + 1);
    if ( i == *((_QWORD **)&v81 + 1) )
      break;
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*i + 40LL))(*i, &v84);
    if ( *v37 == *((_QWORD *)a3 + 6)
      && v37[1] == *((_QWORD *)a3 + 7)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a3 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
    {
      if ( a11 )
      {
        v38 = (unsigned __int16 *)*((_QWORD *)a3 + 2);
        v39 = v38[8];
        v40 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i);
        if ( memcmp_0(v40, v38, v39 + 18) )
        {
LABEL_62:
          v14 = v76;
          continue;
        }
      }
      if ( a10 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a3 + 4) )
          goto LABEL_62;
      }
      else if ( v34 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i) )
      {
        v34 = 1;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
        WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v42, v41);
      }
      Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v79, i);
      v43 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *((_QWORD *)a3 + 4));
      v44 = v79;
      if ( v79 && v43 && v34 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
        v44 = v79;
      }
      v79 = 0LL;
      v14 = v76;
      *v76 = v44;
    }
  }
  if ( *v14 )
    goto LABEL_149;
  v74 = 0LL;
  v45 = 0;
  v46 = 0;
  v47 = (_QWORD *)v81;
  while ( 2 )
  {
    if ( v47 == v36 )
      goto LABEL_137;
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v47 + 40LL))(*v47, &v84);
    if ( *v48 != *((_QWORD *)a3 + 6)
      || v48[1] != *((_QWORD *)a3 + 7)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 80LL))(*v47) != *((_DWORD *)a3 + 2)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 88LL))(*v47) )
    {
LABEL_87:
      ++v47;
      v36 = (_QWORD *)*((_QWORD *)&v81 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 152LL))(*v47) )
  {
    v46 = 1;
    goto LABEL_87;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 120LL))(*v47) )
  {
    v45 = 1;
    goto LABEL_87;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 32LL))(*v47);
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, v50, v49);
  }
  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v74, v47);
  v51 = v74;
  if ( !v74 )
  {
LABEL_137:
    if ( a11 || a10 )
    {
      if ( v45 )
      {
        v32 = -2004287448;
        v66 = 1981LL;
LABEL_144:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v66,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v32,
          v70);
        goto LABEL_145;
      }
      if ( v46 )
      {
        v32 = -2004287447;
        v66 = 1982LL;
        goto LABEL_144;
      }
    }
    v32 = -2005139360;
    v66 = 1984LL;
    goto LABEL_144;
  }
  v75 = 0LL;
  v52 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v74 + 104LL))(v74, &v75);
  v32 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v52,
      v70);
    goto LABEL_129;
  }
  v72 = 0LL;
  v73 = 0LL;
  v54 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int128 *))(*(_QWORD *)pv + 104LL))(pv, v51, &v72);
  v32 = v54;
  if ( v54 < 0 )
  {
    v55 = (unsigned int)v54;
    v56 = 1994LL;
    goto LABEL_127;
  }
  v77 = v51;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v77);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b78fc1840c3dd433f506de497cc33a0a___(
    &v84,
    v72,
    *((_QWORD *)&v72 + 1),
    &v77);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v84);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v81);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
  v57 = v76;
  v70 = a5;
  v58 = v80;
  v59 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
          g_DeviceGraphManager,
          v80,
          a3,
          v78);
  v32 = v59;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids, v59);
  }
  if ( v32 < 0 )
  {
    v76 = 0LL;
    v70 = AUDCLNT_SHAREMODE_SHARED;
    v61 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v58,
            v75,
            2LL);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        24LL,
        &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
        (unsigned int)v61);
    }
    if ( v61 >= 0 )
    {
      v77 = 0LL;
      v70 = AUDCLNT_SHAREMODE_SHARED;
      v62 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v58,
              v75,
              2LL);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          25LL,
          &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
          (unsigned int)v62);
      }
      if ( v62 >= 0 )
      {
        v63 = lambda_413ceff6df6ff7d9a560b32e6a719ff0_::_lambda_413ceff6df6ff7d9a560b32e6a719ff0_(&v80, &v77);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_413ceff6df6ff7d9a560b32e6a719ff0___(
          v83,
          v72,
          *((_QWORD *)&v72 + 1),
          v63);
        lambda_413ceff6df6ff7d9a560b32e6a719ff0_::__lambda_413ceff6df6ff7d9a560b32e6a719ff0_(v83);
      }
      if ( v77 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
    }
    if ( v76 )
      (*((void (__fastcall **)(struct ISaDeviceProxy **))*v76 + 2))(v76);
  }
  else
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a2fefe741e044b1f018eee6408496d06___(
      &v80,
      v72,
      *((_QWORD *)&v72 + 1),
      v57);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids);
    }
  }
  if ( v32 < 0 )
  {
    v55 = (unsigned int)v32;
    v56 = 2076LL;
LABEL_127:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v56,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v55,
      v70);
    v64 = v72;
    if ( (_QWORD)v72 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v72);
      std::_Deallocate<16,0>(v64, (v73 - v64) & 0xFFFFFFFFFFFFFFF8uLL);
      v72 = 0LL;
      v73 = 0LL;
    }
LABEL_129:
    if ( v75 )
      SaDeviceParams::`scalar deleting destructor'(v75, v53);
    v75 = 0LL;
LABEL_145:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
    goto LABEL_146;
  }
  v65 = v72;
  if ( (_QWORD)v72 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v72);
    std::_Deallocate<16,0>(v65, (v73 - v65) & 0xFFFFFFFFFFFFFFF8uLL);
    v72 = 0LL;
    v73 = 0LL;
  }
  if ( v75 )
    SaDeviceParams::`scalar deleting destructor'(v75, v60);
  v75 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
LABEL_149:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v79);
  v68 = v81;
  if ( (_QWORD)v81 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v81);
    std::_Deallocate<16,0>(v68, (v82 - v68) & 0xFFFFFFFFFFFFFFF8uLL);
    v81 = 0LL;
    v82 = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&pv);
  return 0LL;
}
