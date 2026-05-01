/*
 * XREFs of ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800270B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800273E0 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x180027758 (-Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x18002AC1C (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18012AB18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180147068 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?SetUnhandledException@?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1801FF854 (-SetUnhandledException@-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803BE334 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1803BE334.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1803C162C (-ReportStopActivity@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorT.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803C75E0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1803C75E0.c)
 */

// Hidden C++ exception states: #wind=10
_BOOL8 __fastcall VoiceAssistantPositioner::ShouldHandleActivation(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        RTL_SRWLOCK *a3)
{
  struct IUnknown *v3; // rdi
  bool v5; // bl
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  int PropSetMap; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  BOOL v14; // edi
  __int64 v15; // rcx
  __int64 v17; // rcx
  char v18; // bl
  unsigned int v19; // eax
  void *v20; // rbx
  void *v21; // rbx
  HANDLE ProcessHeap; // rax
  void *v23; // rbx
  HANDLE v24; // rax
  void (*v25)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v26; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+58h] [rbp-A8h] BYREF
  void **v34; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v35[3]; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  int *v37; // [rsp+98h] [rbp-68h]
  int *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h] BYREF
  char v40; // [rsp+ACh] [rbp-54h]
  char v41[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+D0h] [rbp-30h] BYREF
  const char *v43; // [rsp+D8h] [rbp-28h]
  LPVOID v44; // [rsp+E0h] [rbp-20h]
  char v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  char v47[144]; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID lpMem; // [rsp+188h] [rbp+88h]
  __int128 v49; // [rsp+190h] [rbp+90h]
  void *v50; // [rsp+1A0h] [rbp+A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1B0h] [rbp+B0h] BYREF
  HSTRING string; // [rsp+1C8h] [rbp+C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v3 = (struct IUnknown *)a3;
  SRWLock[1] = a3;
  v34 = &wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v35[0] = 0LL;
  v35[1] = &v34;
  v35[2] = 0LL;
  v36 = 0;
  v37 = &v42;
  v38 = &v39;
  v39 = 0;
  v40 = 0;
  v45 = 0;
  v42 = 0;
  v43 = "VAPositioner_ShouldHandleActivationActivity";
  v44 = 0LL;
  v46 = 1LL;
  lpMem = 0LL;
  memset_0(v47, 0, sizeof(v47));
  v49 = 0LL;
  v50 = 0LL;
  v34 = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)&v34,
    a2,
    v3);
  v5 = 0;
  v28 = 0LL;
  if ( !v3
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v3->lpVtbl->QueryInterface)(
         v3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v28) < 0 )
  {
    goto LABEL_21;
  }
  v29 = v28;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  SRWLock[0] = (PSRWLOCK)&v29;
  v31 = v29;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"IsVoiceActivation", 0x11u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  else
  {
    v3 = (struct IUnknown *)string;
    v27 = 0LL;
  }
  PropSetMap = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(&v31, &v27);
  if ( PropSetMap >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, int *))(*(_QWORD *)v27 + 64LL))(v27, v3, &v26);
    PropSetMap = v10;
    if ( v10 >= 0 )
    {
      v11 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      PropSetMap = 0;
      goto LABEL_14;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"onecore\\internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v10,
      v26);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
LABEL_14:
  if ( PropSetMap < 0 || (v5 = 1, !(_BYTE)v26) )
    v5 = 0;
  string = 0LL;
  v12 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_21:
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)&v34,
    v5);
  v14 = v5;
  v15 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v34 = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  if ( !v50 )
    goto LABEL_24;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    &v34,
    SRWLock);
  if ( v50 && *(_DWORD *)v50 == 1 )
  {
    v18 = 1;
  }
  else
  {
    v18 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v50);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v18 )
  {
LABEL_24:
    if ( *v38 == 1 )
    {
      v19 = wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        &v34,
        v19);
    }
  }
  if ( v50 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)v50) )
    {
      v20 = v50;
      if ( v50 )
      {
        wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v50 + 8);
        operator delete(v20, (const struct std::nothrow_t *)0x100);
      }
    }
    v50 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v21 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v21);
    }
    lpMem = 0LL;
    *(_QWORD *)&v49 = 0LL;
  }
  if ( v45 )
  {
    v23 = v44;
    v24 = GetProcessHeap();
    HeapFree(v24, 0, v23);
    v45 = 0;
  }
  v44 = 0LL;
  if ( v39 == 1 )
  {
    v39 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18059FF68;
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v25);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v41);
  }
  v39 = 3;
  if ( v36 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v35);
  return v14;
}
