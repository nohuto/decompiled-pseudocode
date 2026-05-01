/*
 * XREFs of ?InitializePosition@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803C0660
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x180025184 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803BDE9C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803BE898 (--1VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803BEBDC (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1803C2550 (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803C2F04 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x1803C6918 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::InitializePosition(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"VAPositioner_InitializePositionActivity");
  *(_QWORD *)v11 = &VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity *)v11,
    a2,
    a3);
  updated = VoiceAssistantPositioner::CacheViewToManage(
              (VoiceAssistantPositioner *)((char *)this - 120),
              (struct IUnknown *)a2);
  v8 = updated;
  if ( updated >= 0 )
  {
    updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)((char *)this - 120));
    v8 = updated;
    if ( updated >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 36, (__int64)a2);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 347LL;
  }
  else
  {
    v9 = 346LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)updated);
LABEL_7:
  VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity::~VAPositioner_InitializePositionActivity((VoiceAssistantPositionerTelemetry::VAPositioner_InitializePositionActivity *)v11);
  return v8;
}
