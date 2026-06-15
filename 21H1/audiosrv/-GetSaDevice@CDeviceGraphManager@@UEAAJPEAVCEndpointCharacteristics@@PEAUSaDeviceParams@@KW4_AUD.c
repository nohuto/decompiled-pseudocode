/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18002F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180027AF0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x18002FDD0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D68C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180072350 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E3EF8 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18011FEC0 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct _GUID *a7,
        struct _GUID *a8,
        struct ISaDeviceProxy **a9)
{
  BOOL v12; // edi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  struct IDeviceGraphObjectsStore *v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  Microsoft::WRL::Details *v20; // rcx
  __int64 v21; // rcx
  signed __int64 v22; // rax
  unsigned int v23; // ecx
  signed __int64 v24; // rtt
  __int64 v25; // r10
  __int64 v26; // rcx
  int v27; // eax
  _WORD *v28; // rcx
  __int64 v29; // rax
  int v31; // edx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // rcx
  struct ISaDeviceProxy *v37; // rax
  __int64 v38; // rdx
  struct IDeviceGraphObjectsStore *v39; // rcx
  int v41; // [rsp+28h] [rbp-E0h]
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A8h] BYREF
  struct IDeviceGraphObjectsStore *v44; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v47; // [rsp+80h] [rbp-88h] BYREF
  WINBOOL fPending; // [rsp+88h] [rbp-80h] BYREF
  int v49; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v50; // [rsp+90h] [rbp-78h] BYREF
  struct _GUID *v51; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v52; // [rsp+A0h] [rbp-68h] BYREF
  LPCRITICAL_SECTION v53[2]; // [rsp+A8h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-48h] BYREF
  __int64 (__fastcall ***v56)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp-40h] BYREF
  struct ISaDeviceProxy **v57; // [rsp+D0h] [rbp-38h]
  LPCRITICAL_SECTION v58; // [rsp+D8h] [rbp-30h]
  _DWORD v59[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-20h]
  unsigned __int16 *v61; // [rsp+F8h] [rbp-10h]
  int v62; // [rsp+100h] [rbp-8h]
  int v63; // [rsp+104h] [rbp-4h]
  void *v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  __int64 (__fastcall ****v67)(_QWORD, GUID *, __int64 *); // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  struct _GUID **v69; // [rsp+128h] [rbp+20h]
  __int64 v70; // [rsp+130h] [rbp+28h]
  _WORD *v71; // [rsp+138h] [rbp+30h]
  int v72; // [rsp+140h] [rbp+38h]
  int v73; // [rsp+144h] [rbp+3Ch]
  int *v74; // [rsp+148h] [rbp+40h]
  __int64 v75; // [rsp+150h] [rbp+48h]
  __int64 *v76; // [rsp+158h] [rbp+50h]
  __int64 v77; // [rsp+160h] [rbp+58h]
  char *v78; // [rsp+168h] [rbp+60h]
  __int64 v79; // [rsp+170h] [rbp+68h]
  __int64 *v80; // [rsp+178h] [rbp+70h]
  __int64 v81; // [rsp+180h] [rbp+78h]
  int *v82; // [rsp+188h] [rbp+80h]
  __int64 v83; // [rsp+190h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v51 = a7;
  Context = a8;
  v57 = a9;
  v58 = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v12 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v13 = *(_QWORD *)a3;
  v44 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          v13,
          &v44);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = 2431LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14,
      v41);
    goto LABEL_57;
  }
  v41 = (int)a9;
  v14 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, BOOL))(*(_QWORD *)v44 + 56LL))(
          v44,
          a3,
          (unsigned int)a5,
          v12);
  v15 = v14;
  if ( v14 >= 0 )
    goto LABEL_56;
  if ( v14 != -2005139430 )
  {
    v16 = 2436LL;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v44 + 72LL))(v44, v53);
  v17 = v44;
  v43 = 0LL;
  v18 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v47 = v18;
  v19 = v18;
  if ( v18 )
  {
    v20 = Microsoft::WRL::Details::ModuleBase::module_;
    v18[5] = 1LL;
    *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IInspectable'};
    v18[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v18[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
    v18[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    if ( v20 )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v20 + 8LL))(v20);
    v52 = v19;
    *v19 = &CSaDeviceProxy::`vftable'{for `IInspectable'};
    v19[1] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v19[2] = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
    v19[3] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    v19[6] = 0LL;
    v19[7] = 0LL;
    v19[8] = 0LL;
    *((_BYTE *)v19 + 72) = 0;
    v19[10] = 0LL;
    v19[11] = 0LL;
    v19[12] = 0LL;
    v19[13] = 0LL;
    v19[14] = 0LL;
    v47 = 0LL;
    v15 = CSaDeviceProxy::RuntimeClassInitialize(
            (CSaDeviceProxy *)v19,
            a3,
            a2,
            v17,
            a5,
            a4,
            a6,
            v51,
            (const struct _GUID *)Context);
    if ( v15 >= 0 )
    {
      v43 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v19 + 1);
      (*(void (__fastcall **)(_QWORD *))(v19[1] + 8LL))(v19 + 1);
      if ( v19 )
      {
        v21 = v19[14];
        v52 = 0LL;
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v21 + 72LL))(v21, &lpCriticalSection);
        v22 = v19[5];
        v53[1] = (LPCRITICAL_SECTION)v22;
        while ( v22 >= 0 )
        {
          if ( (_DWORD)v22 == 0x7FFFFFFF )
            goto LABEL_27;
          v23 = v22 - 1;
          v24 = v22;
          v22 = _InterlockedCompareExchange64(v19 + 5, v22 - 1, v22);
          if ( v24 == v22 )
            goto LABEL_24;
        }
        v23 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v22 + 16));
LABEL_24:
        if ( !v23 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v19 + 48LL))(v19, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                              + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
LABEL_27:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v15 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v52);
      Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v47);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v47);
    v15 = -2147024882;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18019F838;
    qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
    qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_18019F838,
      qword_18019F850,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
  }
  v25 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v25 > 4u )
  {
    v26 = *((_QWORD *)a3 + 2);
    v49 = *((_DWORD *)a3 + 2);
    v55 = *((_QWORD *)a3 + 4);
    LOWORD(v42) = *(_WORD *)(v26 + 2);
    v27 = *(_DWORD *)(v26 + 4);
    v28 = *(_WORD **)a3;
    v50 = v27;
    v56 = v43;
    v82 = &v49;
    v80 = &v55;
    v78 = (char *)a3 + 48;
    v76 = &v42;
    v74 = &v50;
    LODWORD(v51) = v15;
    v83 = 4LL;
    v81 = 8LL;
    v79 = 16LL;
    v77 = 2LL;
    v75 = 4LL;
    if ( v28 )
    {
      v29 = -1LL;
      while ( v28[++v29] != 0 )
        ;
      v31 = 2 * v29 + 2;
    }
    else
    {
      v28 = &unk_18015D744;
      v31 = 2;
    }
    v71 = v28;
    v69 = &v51;
    v72 = v31;
    v67 = &v56;
    v59[1] = 4;
    v61 = *(unsigned __int16 **)(v25 + 8);
    v73 = 0;
    v70 = 4LL;
    v68 = 8LL;
    v59[0] = 184549376;
    v60 = 0LL;
    v62 = *v61;
    v64 = &unk_180168968;
    v63 = 2;
    v32 = *(_QWORD *)(v25 + 32);
    v65 = 129;
    v66 = 1;
    LODWORD(v47) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    v41 = 10;
    EtwEventWriteTransfer(v32, v59, 0LL);
  }
  if ( v15 >= 0 )
  {
    v45 = 0LL;
    v33 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v43, &v45);
    v15 = v33;
    if ( v33 < 0 )
    {
      v34 = 2462LL;
      goto LABEL_46;
    }
    v33 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct SaDeviceParams *, __int64 *))(*(_QWORD *)v44 + 64LL))(
            v44,
            a3,
            &v45);
    v15 = v33;
    if ( v33 < 0 )
    {
      v34 = 2463LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v33,
        v41);
      v35 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      goto LABEL_48;
    }
    v36 = 0LL;
    v37 = (struct ISaDeviceProxy *)v43;
    v43 = 0LL;
    *v57 = v37;
    v38 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v36 = v43;
    }
    if ( v36 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v36)[2])(v36);
    if ( v53[0] )
      LeaveCriticalSection(v53[0]);
LABEL_56:
    v15 = 0;
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x99A,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v15,
    v41);
LABEL_48:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v43);
  if ( v53[0] )
    LeaveCriticalSection(v53[0]);
LABEL_57:
  v39 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( v58 )
    LeaveCriticalSection(v58);
  return (unsigned int)v15;
}
