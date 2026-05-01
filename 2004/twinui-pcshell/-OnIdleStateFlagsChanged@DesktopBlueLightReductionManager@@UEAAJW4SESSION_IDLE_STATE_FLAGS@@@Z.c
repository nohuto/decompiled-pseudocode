/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801995E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180060644 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9a5eea2e7cf0ec67372bc9fea48c14bd___ @ 0x18019874C (Windows--Internal--ComTaskPool--QueueTask__lambda_9a5eea2e7cf0ec67372bc9fea48c14bd___.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180199030 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_180199030.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801995C0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801995C0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180199B50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180199B50.c)
 *     ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x18019A4EC (-get@-$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  int v4; // ebx
  volatile int *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 v21; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  int v24; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 88) ^ a2;
  v6 = *(_DWORD **)(wil::details::static_lazy<BlueLightReductionLogging>::get(
                      a1,
                      _lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    v24 = v4;
    LODWORD(v23) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_1804FCE06,
      0LL,
      v7,
      (__int64)&v23,
      (__int64)&v24);
  }
  if ( !v4 )
    return 0LL;
  *(_DWORD *)(a1 + 88) = a2;
  if ( (v4 & 0xD) == 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v23 = 0LL;
      v14 = *(_QWORD *)(a1 + 56);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v23);
      v15 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL))(
              v14,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              &v23);
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 32LL))(v23, *(unsigned int *)(a1 + 72));
        *(_DWORD *)(a1 + 72) = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x143,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v15);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    }
    return 0LL;
  }
  if ( (a2 & 0xD) != 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 72) )
  {
LABEL_11:
    v12 = a1 - 120;
    if ( a1 != 120 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::InternalAddRef(
        a1 - 120,
        v5);
    v20 = a1 - 120;
    v21 = a1 - 120;
    if ( a1 != 120 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::AddRef(a1 - 120);
    v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_9a5eea2e7cf0ec67372bc9fea48c14bd___(
            (__int64)v6,
            (__int64)v5,
            *(_DWORD *)(a1 + 84),
            &v20);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v21);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13A,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v13);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v12);
    return 0LL;
  }
  v23 = 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v23);
  v9 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
         v8,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v23);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      304LL,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v23 + 24LL))(
            v23,
            30LL,
            (a1 - 16) & -(__int64)(a1 != 120),
            a1 + 72);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      goto LABEL_11;
    }
  }
  wil::details::in1diag3::Throw_Hr(
    v11,
    305LL,
    (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
    (const char *)(unsigned int)v10);
  __debugbreak();
  return DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::dtor_0(v18, v17, v19);
}
