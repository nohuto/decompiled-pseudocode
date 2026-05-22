/*
 * XREFs of ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0A1C
 * Callers:
 *     ?LockAndInvokeDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0234 (-LockAndInvokeDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180046928 (--4-$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069138 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C5A70 (-EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV-$vector@VHString@Wrappers@WRL@Micro.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800C6DC8 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800CDC3C (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CE1A8 (--1OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     _lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator() @ 0x1800CE634 (_lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_--operator().c)
 *     ?AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800CEB9C (-AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJ.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CF904 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D1BB8 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800D1DE8 (-RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800D2538 (-StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x180151140 (--$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@-$Singleton@VSpatia.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x18015ACE0 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3,
        char a4)
{
  int v6; // ebx
  int v7; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  HSTRING *i; // rsi
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  HSTRING v28; // rbx
  __int64 v29; // rcx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v30; // rcx
  __int64 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v39; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  GUID InterfaceClassGuid; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v48[8]; // [rsp+90h] [rbp-70h] BYREF
  char v49; // [rsp+D0h] [rbp-30h]
  char *v50; // [rsp+E0h] [rbp-20h]
  _QWORD v51[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v52; // [rsp+128h] [rbp+28h] BYREF
  int v53; // [rsp+138h] [rbp+38h]
  _QWORD v54[40]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]
  char v56; // [rsp+2E8h] [rbp+1E8h] BYREF

  v56 = a4;
  HIDWORD(v36) = 0;
  if ( !a3 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  v41 = 0LL;
  string = 0LL;
  LOWORD(v36) = 256;
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v54,
    (__int64)"OnHolographicDisplayChanged");
  v54[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::StartActivity((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)v54);
  v48[0] = (char *)&v36 + 1;
  v48[1] = this;
  v48[2] = &v41;
  v48[3] = v54;
  v48[4] = (char *)&v36 + 4;
  v48[5] = &string;
  v48[6] = &v56;
  v48[7] = &v36;
  v49 = 1;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::IHolographicDisplay *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string);
  v6 = v7;
  HIDWORD(v36) = v7;
  if ( v7 < 0 )
  {
    v9 = 686LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_53;
  }
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(this, v8);
  v6 = v7;
  HIDWORD(v36) = v7;
  if ( v7 < 0 )
  {
    v9 = 687LL;
    goto LABEL_12;
  }
  if ( v56 )
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDisplay(this, a3);
    v6 = v7;
    HIDWORD(v36) = v7;
    if ( v7 < 0 )
    {
      v9 = 692LL;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDisplay(this, a3);
    v6 = v7;
    HIDWORD(v36) = v7;
    if ( v7 < 0 )
    {
      v9 = 696LL;
      goto LABEL_12;
    }
  }
  *((_OWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 44) = 0;
  v10 = (__int64 *)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 18);
  v11 = (__int64 *)((char *)this + 136);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 17);
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  v44 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  v12 = *((_QWORD *)this + 51);
  v13 = 0LL;
  if ( v12 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this + 51));
    v13 = v12;
    v38 = 0LL;
    v44 = v12;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-360LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 9);
  v37 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v37);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v13 + 48LL))(
          v13,
          &v37);
  v6 = v14;
  HIDWORD(v36) = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 714LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v15);
    goto LABEL_52;
  }
  if ( !v37 )
  {
    LOBYTE(v36) = 1;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v37);
    v17 = (_QWORD *)*((_QWORD *)this + 42);
    if ( (__int64)(*((_QWORD *)this + 43) - (_QWORD)v17) >> 3 )
    {
      v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v17)(
             *v17,
             &GUID_9acea414_1d9f_4090_a388_90c06f6eae9c,
             &v37);
    }
    else
    {
      v37 = 0LL;
      v6 = -2147023728;
    }
    if ( v6 < 0 )
    {
      v15 = (unsigned int)v6;
      v16 = 718LL;
      goto LABEL_25;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(
    (__int64 *)this + 52,
    (__int64 *)&v37);
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-360LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 9);
  v43 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v43);
  v18 = (**v37)(v37, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v43);
  v6 = v18;
  HIDWORD(v36) = v18;
  if ( v18 < 0 )
  {
    v19 = 727LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_51;
  }
  v20 = v43;
  WindowsDeleteString(v41);
  v41 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 64LL))(v20, &v41);
  v6 = v18;
  HIDWORD(v36) = v18;
  if ( v18 < 0 )
  {
    v19 = 729LL;
    goto LABEL_32;
  }
  v42 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v42);
  v21 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(&v42);
  v6 = v21;
  if ( v21 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2D,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v21);
  HIDWORD(v36) = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DE,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_50;
  }
  v45 = 0LL;
  v46 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_SPATIAL_GRAPH;
  v22 = SpatialInteractionDevices::EnumerateDevices(&InterfaceClassGuid, (__int64)&v45);
  v6 = v22;
  HIDWORD(v36) = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E1,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_49;
  }
  for ( i = (HSTRING *)v45; ; ++i )
  {
    if ( i == *((HSTRING **)&v45 + 1) )
    {
      HIDWORD(v36) = -2147023728;
      v6 = -2147023728;
      goto LABEL_49;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v39);
    v24 = CreateSpatialGraphDriverClient(*i, &v39);
    v25 = v24;
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        742LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v24);
    if ( v25 >= 0 )
      break;
LABEL_46:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v39);
  }
  v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, HSTRING, __int128 *))(*(_QWORD *)v39 + 80LL))(
          v39,
          v41,
          &v52);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      745LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v26);
    goto LABEL_46;
  }
  v28 = *i;
  *i = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 19));
  *((_QWORD *)this + 19) = v28;
  v29 = v42;
  v42 = 0LL;
  v38 = *v11;
  *v11 = v29;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
  v30 = v39;
  v39 = 0LL;
  v38 = *v10;
  *v10 = (__int64)v30;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v38);
  *((_OWORD *)this + 10) = v52;
  *((_DWORD *)this + 44) = v53;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  v50 = (char *)this + 432;
  v31 = (__int64 *)*((_QWORD *)this + 59);
  v32 = *v31;
  v38 = *v31;
  while ( (__int64 *)v32 != v31 )
  {
    v33 = v32 + 40;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 40) + 72LL))(*(_QWORD *)(v32 + 40)) )
    {
      v51[0] = off_1801B0958;
      v51[1] = this;
      v51[7] = v51;
      LOBYTE(v34) = 1;
      v35 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              this,
              v33,
              v51,
              v34,
              v36);
      if ( v35 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          767LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v35);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v38);
    v32 = v38;
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-432LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  BYTE1(v36) = 0;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v39);
  v6 = 0;
LABEL_49:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy((__int64)&v45);
LABEL_50:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v42);
LABEL_51:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v43);
LABEL_52:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v37);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v44);
LABEL_53:
  v49 = 0;
  lambda_af5bdd6d6d6bf413afa9b6eaade37ea9_::operator()((__int64)v48);
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::~OnHolographicDisplayChanged((SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *)v54);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v41);
  return (unsigned int)v6;
}
