/*
 * XREFs of ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180018FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1800196BC (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ @ 0x180019EF8 (-StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001D424 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006A534 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006DE14 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007FBF0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145D38 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::FrameworkViewTypeChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  void *v10; // rbx
  HANDLE ProcessHeap; // rax
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  void **v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  int *v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h] BYREF
  char v22; // [rsp+7Ch] [rbp-84h]
  _BYTE v23[32]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+A0h] [rbp-60h] BYREF
  const char *v25; // [rsp+A8h] [rbp-58h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  char v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  _BYTE v29[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+158h] [rbp+58h] BYREF
  __int128 v31; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v16 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v17[0] = 0LL;
  v17[1] = &v16;
  v17[2] = 0LL;
  v18 = 0;
  v19 = &v24;
  v20 = &v21;
  v21 = 0;
  v22 = 0;
  v27 = 0;
  v24 = 0;
  v25 = "FrameworkViewTypeChanged";
  lpMem = 0LL;
  v28 = 1LL;
  v30 = 0LL;
  memset_0(v29, 0, sizeof(v29));
  v31 = 0LL;
  v32 = 0LL;
  v16 = &ShellPositionerTelemetry::FrameworkViewTypeChanged::`vftable';
  ShellPositionerTelemetry::FrameworkViewTypeChanged::StartActivity((ShellPositionerTelemetry::FrameworkViewTypeChanged *)&v16);
  *(_QWORD *)v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 562LL;
  }
  else
  {
    v6 = ShellPositionerManager::HandleFrameworkViewTypeChange(a1 - 120, a3, a2, *(_QWORD *)v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v16);
      v7 = 0;
      goto LABEL_4;
    }
    v9 = 563LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v6,
    v13[0]);
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  v16 = &ShellPositionerTelemetry::FrameworkViewTypeChanged::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v16);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v32);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v30);
  if ( v27 )
  {
    v10 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v10);
    v27 = 0;
  }
  lpMem = 0LL;
  if ( v21 == 1 )
  {
    v21 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v12);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v23);
  }
  v21 = 3;
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  return v7;
}
