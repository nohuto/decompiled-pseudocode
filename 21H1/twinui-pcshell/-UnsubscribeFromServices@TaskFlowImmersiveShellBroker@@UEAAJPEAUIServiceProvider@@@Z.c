/*
 * XREFs of ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x180213BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z @ 0x18020B668 (--$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::UnsubscribeFromServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 224);
  *((_DWORD *)this + 30) = 2;
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(v4, *((unsigned int *)this + 58));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v2);
    *((_DWORD *)this + 58) = 0;
  }
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v6 + 56LL))(v6, a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v7);
    v8 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 17);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v9 + 56LL))(v9, a2);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  }
  v11 = *((_QWORD *)this + 20);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v11 + 56LL))(v11, a2);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDC,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  }
  v13 = *((_QWORD *)this + 19);
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v13 + 56LL))(v13, a2);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE2,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  }
  v15 = *((_QWORD *)this + 18);
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v15 + 56LL))(v15, a2);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE8,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  }
  v17 = *((_QWORD *)this + 21);
  if ( v17 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v17 + 56LL))(v17, a2);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  }
  v19 = *((_QWORD *)this + 22);
  if ( v19 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v19 + 56LL))(v19, a2);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v20);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 22);
  }
  v21 = *((_QWORD *)this + 16);
  if ( v21 )
  {
    if ( ListenerTelemetryReport::m_knownFailureCounter || ListenerTelemetryReport::m_unknownFailureCounter )
    {
      TaskFlowDataEngineTelemetry::SignalProcessingListenerCountersReport<unsigned int &,unsigned int &>(
        v21,
        (__int64)a2);
      v21 = *((_QWORD *)this + 16);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v21 + 96LL))(v21, a2);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFC,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  }
  return 0LL;
}
