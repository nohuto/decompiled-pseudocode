/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180048010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002A42C (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800D99E0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180105D78 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180106C5C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x180107168 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180107FBC (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180108330 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180108F88 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180109704 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010A190 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  struct SPATIAL_STREAM_PROPERTIES *v5; // rax
  void (__fastcall **v9)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  char v12; // bl
  HRESULT v13; // eax
  int ActivationFactory; // eax
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall **v17)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // r12d
  bool v22; // bl
  char v23; // r14
  HRESULT v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v28; // rax
  CSpatialAudioResourceManagerTraceLogger *v29; // rcx
  int v30; // eax
  unsigned int v31; // edi
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // eax
  const unsigned __int16 *v35; // rax
  int v36; // eax
  int v37; // eax
  struct Sarm::CEndpointResourcePool *v38; // r14
  int v39; // eax
  const char *v40; // r9
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ebx
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  struct ISaDeviceProxy *v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v51; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v52; // [rsp+68h] [rbp-98h] BYREF
  BOOL v53; // [rsp+6Ch] [rbp-94h] BYREF
  int v54; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v55; // [rsp+74h] [rbp-8Ch]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  struct Sarm::CEndpointResourcePool *v61; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID *v62; // [rsp+A8h] [rbp-58h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DESCRIPTOR v64; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR v65; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v66; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING string; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v69; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v70; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v71[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v72; // [rsp+160h] [rbp+60h]
  CLSID pClsid; // [rsp+168h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+178h] [rbp+78h] BYREF
  void *v75; // [rsp+188h] [rbp+88h]
  int v76; // [rsp+190h] [rbp+90h]
  int v77; // [rsp+194h] [rbp+94h]
  BOOL *v78; // [rsp+198h] [rbp+98h]
  __int64 v79; // [rsp+1A0h] [rbp+A0h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1A8h] [rbp+A8h] BYREF
  void *v81; // [rsp+1B8h] [rbp+B8h]
  int v82; // [rsp+1C0h] [rbp+C0h]
  int v83; // [rsp+1C4h] [rbp+C4h]
  BOOL *v84; // [rsp+1C8h] [rbp+C8h]
  __int64 v85; // [rsp+1D0h] [rbp+D0h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+1D8h] [rbp+D8h] BYREF
  void *v87; // [rsp+1E8h] [rbp+E8h]
  int v88; // [rsp+1F0h] [rbp+F0h]
  int v89; // [rsp+1F4h] [rbp+F4h]
  BOOL *v90; // [rsp+1F8h] [rbp+F8h]
  __int64 v91; // [rsp+200h] [rbp+100h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp+110h] BYREF
  void *v93; // [rsp+220h] [rbp+120h]
  int v94; // [rsp+228h] [rbp+128h]
  int v95; // [rsp+22Ch] [rbp+12Ch]
  const char *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  int *v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v5 = a5;
  v62 = a4;
  v55 = a3;
  v49 = a5;
  if ( (unsigned int)dword_18019D350 > 5 )
  {
    v50 = 299;
    v98 = &v50;
    v99 = 4LL;
    v96 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18019D358;
    v97 = 64LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18019D358;
    v93 = &unk_18016A43E;
    v95 = 1;
    UserData.Reserved = 2;
    v94 = 21;
    EventWriteTransfer(qword_18019D370, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    v5 = v49;
    a4 = v62;
  }
  v72 = 0LL;
  memset(v71, 0, sizeof(v71));
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      0LL);
    __debugbreak();
  }
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v9 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
  v10 = 0LL;
  v60 = 0LL;
  (*v9)(a2, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, &v60);
  if ( v60 )
  {
    v11 = *((_QWORD *)this + 29);
    if ( v11 )
    {
      v28 = *(_QWORD *)(v11 + 8LL * ((unsigned int)v60 % *((_DWORD *)this + 62)));
      if ( v28 )
      {
        while ( *(_DWORD *)(v28 + 112) != (_DWORD)v60 || *(_QWORD *)v28 != v60 )
        {
          v28 = *(_QWORD *)(v28 + 104);
          if ( !v28 )
            goto LABEL_8;
        }
        v10 = v28 + 8;
      }
    }
LABEL_8:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    if ( v10 )
      return 0LL;
  }
  if ( *((_QWORD *)this + 72) )
  {
LABEL_20:
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v17 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
    v48 = 0LL;
    v18 = ((__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v17[15])(a2, &v48);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v18,
        UserDataCount);
    }
    else
    {
      if ( v48 )
      {
        v45 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v48 + 192LL))(v48, &v45);
        v19 = v20;
        if ( v20 < 0 )
        {
          v32 = (unsigned int)v20;
          v33 = 337LL;
LABEL_103:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v33,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)v32,
            UserDataCount);
LABEL_40:
          if ( v45 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v45 + 16LL))(v45);
          goto LABEL_42;
        }
        if ( !v45 )
        {
          v19 = -2005139197;
          v33 = 338LL;
LABEL_102:
          v32 = (unsigned int)v19;
          goto LABEL_103;
        }
        v21 = a3 & 0x800000;
        if ( (a3 & 0x800000) != 0 )
          goto LABEL_92;
        v22 = 0;
        v23 = 0;
        if ( !*((_BYTE *)this + 145) )
        {
LABEL_32:
          if ( (unsigned int)dword_18019D350 > 4 )
          {
            v85 = 4LL;
            v65.Keyword = 0LL;
            *(_DWORD *)&v65.Id = 184549376;
            v52 = v23 != 0;
            v84 = &v52;
            *(_DWORD *)&v65.Level = 4;
            v80.Ptr = (ULONGLONG)off_18019D358;
            v80.Size = *(unsigned __int16 *)off_18019D358;
            v81 = &unk_18016A1AF;
            v83 = 1;
            v80.Reserved = 2;
            v82 = 38;
            EventWriteTransfer(qword_18019D370, &v65, 0LL, 0LL, 3u, &v80);
          }
          if ( v23 )
            v22 = CoGetPSClsid(&GUID_a026a0bf_1e7e_430b_b0d5_d4f3689d02ae, &pClsid) >= 0;
          if ( (unsigned int)dword_18019D350 > 4 )
          {
            v91 = 4LL;
            *(_DWORD *)&v66.Id = 184549376;
            v66.Keyword = 0LL;
            v53 = v22;
            v90 = &v53;
            *(_DWORD *)&v66.Level = 4;
            v86.Ptr = (ULONGLONG)off_18019D358;
            v86.Size = *(unsigned __int16 *)off_18019D358;
            v87 = &unk_18016A186;
            v89 = 1;
            v86.Reserved = 2;
            v88 = 29;
            EventWriteTransfer(qword_18019D370, &v66, 0LL, 0LL, 3u, &v86);
          }
          if ( !v22 )
          {
            v19 = 0;
            goto LABEL_40;
          }
          v46 = 0LL;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v46);
          v34 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v46);
          v19 = v34;
          if ( v34 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x159,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v34,
              UserDataCount);
LABEL_90:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
            goto LABEL_40;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v46 + 368LL))(v46) )
          {
            v19 = 0;
            goto LABEL_90;
          }
          v47 = 0LL;
          v35 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v45 + 24LL))(v45);
          v36 = Create_SpatialAudioDevicePropertyReader(v35, 0LL, &v47);
          v19 = v36;
          if ( v36 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x160,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v36,
              UserDataCount);
LABEL_89:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v47);
            goto LABEL_90;
          }
          v37 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v47 + 112LL))(v47, &v54);
          v19 = v37;
          if ( v37 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x163,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v37,
              UserDataCount);
            goto LABEL_89;
          }
          if ( !v54 )
          {
            v19 = 0;
            goto LABEL_89;
          }
          *((_QWORD *)&v71[0] + 1) = 0x100000001LL;
          v49 = (struct SPATIAL_STREAM_PROPERTIES *)v71;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v47);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
LABEL_92:
          v61 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                        (char *)this + 152,
                                                        v45);
          v38 = v61;
          if ( !v61 )
          {
            v39 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v45, &v61);
            v19 = v39;
            if ( v39 < 0 )
            {
              v32 = (unsigned int)v39;
              v33 = 374LL;
              goto LABEL_103;
            }
            v38 = v61;
            if ( !v61 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x177,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                v40);
              __debugbreak();
            }
          }
          v19 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v55, v62, v49, v38);
          if ( v19 < 0 )
          {
            if ( !*((_DWORD *)v38 + 3) && *(_QWORD *)v38 )
              ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
            v33 = 385LL;
            goto LABEL_102;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v48);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
          if ( !v21 )
          {
            v41 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            v42 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
                    this,
                    v41,
                    *((_DWORD *)v49 + 2),
                    *((_DWORD *)v49 + 3));
            v43 = v42;
            if ( v42 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x18B,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v42,
                UserDataCount);
              return v43;
            }
          }
          return 0LL;
        }
        v59 = 0LL;
        v70 = 0LL;
        v24 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v69, &v70);
        if ( v24 < 0 )
        {
          RaiseException(v24, 1u, 0, 0LL);
          __debugbreak();
        }
        else
        {
          if ( (int)RoGetActivationFactory(v70, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v59) < 0 )
          {
            v70 = 0LL;
LABEL_30:
            if ( v59 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
            goto LABEL_32;
          }
          v70 = 0LL;
          v58 = 0LL;
          v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v59 + 64LL))(v59, &v58);
          v26 = v58;
          if ( v25 < 0 )
          {
LABEL_76:
            if ( v26 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            goto LABEL_30;
          }
          if ( !v58 )
            goto LABEL_30;
        }
        v23 = 1;
        goto LABEL_76;
      }
      v19 = -2005139190;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010ALL,
        UserDataCount);
    }
LABEL_42:
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v19;
  }
  v12 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v57 = 0LL;
    string = 0LL;
    v13 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v13 < 0 )
    {
      RaiseException(v13, 1u, 0, 0LL);
      __debugbreak();
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v57);
      string = 0LL;
      if ( ActivationFactory < 0 )
        goto LABEL_15;
      v56 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 64LL))(v57, &v56);
      v16 = v56;
      if ( v15 < 0 )
      {
LABEL_60:
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        goto LABEL_15;
      }
      if ( !v56 )
      {
LABEL_15:
        if ( v57 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        goto LABEL_17;
      }
    }
    v12 = 1;
    goto LABEL_60;
  }
LABEL_17:
  if ( (unsigned int)dword_18019D350 > 4 )
  {
    v79 = 4LL;
    *(_DWORD *)&v64.Id = 184549376;
    v64.Keyword = 0LL;
    v51 = v12 != 0;
    v78 = &v51;
    *(_DWORD *)&v64.Level = 4;
    v74.Ptr = (ULONGLONG)off_18019D358;
    v74.Size = *(unsigned __int16 *)off_18019D358;
    v77 = 1;
    v75 = &unk_18016A1AF;
    v74.Reserved = 2;
    v76 = 38;
    EventWriteTransfer(qword_18019D370, &v64, 0LL, 0LL, 3u, &v74);
  }
  if ( !v12 )
    goto LABEL_20;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(v29, *((unsigned __int8 *)this + 145));
  if ( !*((_BYTE *)this + 145)
    || *((_QWORD *)this + 72)
    || (wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576),
        v30 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>((char *)this + 576),
        v31 = v30,
        v30 >= 0) )
  {
    if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v30,
    UserDataCount);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  return v31;
}
