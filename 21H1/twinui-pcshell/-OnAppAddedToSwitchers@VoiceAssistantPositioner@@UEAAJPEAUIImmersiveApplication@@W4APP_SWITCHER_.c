/*
 * XREFs of ?OnAppAddedToSwitchers@VoiceAssistantPositioner@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z @ 0x18007F800
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015DD0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803BDDF8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE770 (--1VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1803C1D38 (-StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C2F04 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1803C6918 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?VAPositioner_PositionPendingViewBelongsToAppAdded@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1803C7108 (-VAPositioner_PositionPendingViewBelongsToAppAdded@VAPositioner_AppAddedToTaskbarActivity@VoiceA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::OnAppAddedToSwitchers(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, LPVOID *); // rbx
  int updated; // eax
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  if ( a3 != 2 || !*(_QWORD *)(a1 + 272) )
    return 0LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v12);
  pv = 0LL;
  v6 = *(_QWORD *)(a1 + 272);
  v7 = *(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 136LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v7(v6, &pv);
  v10 = 0;
  (*(void (__fastcall **)(__int64, LPVOID, int *))(*(_QWORD *)a2 + 88LL))(a2, pv, &v10);
  if ( !v10
    || (VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::VAPositioner_PositionPendingViewBelongsToAppAdded((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v12),
        updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 144)),
        v9 = updated,
        updated >= 0) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
    if ( pv )
      CoTaskMemFree(pv);
    VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v12);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x229,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)updated);
  if ( pv )
    CoTaskMemFree(pv);
  VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity::~VAPositioner_AppAddedToTaskbarActivity((VoiceAssistantPositionerTelemetry::VAPositioner_AppAddedToTaskbarActivity *)v12);
  return v9;
}
