/*
 * XREFs of ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x1803E0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AFAC (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803DEEFC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1803DF8A0 (--1VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x1803DFDC8 (-ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLA.c)
 *     ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x1803E116C (-GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE.c)
 *     ?StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x1803E331C (-StartActivity@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerT.c)
 *     ?Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXUtagRECT@@0@Z @ 0x1803E45E0 (-Stop@VAPositioner_GetCortanaAppDefaultLaunchPositionActivity@VoiceAssistantPositionerTelemetry@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetCortanaAppDefaultLaunchPosition(
        VoiceAssistantPositioner *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rdi
  int MonitorInformation; // eax
  HMONITOR v6; // r8
  unsigned int v7; // ebx
  int v8; // ebx
  HMONITOR v9; // r8
  int v10; // eax
  struct tagRECT v11; // xmm0
  int v13; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v14; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v15; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v16; // [rsp+98h] [rbp-70h] BYREF
  struct tagRECT v17; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v18; // [rsp+B8h] [rbp-50h] BYREF
  RECT rc; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v20; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v21[40]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"VAPositioner_GetCortanaAppDefaultLaunchPositionActivity");
  v21[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v21);
  rc = (RECT)*((_OWORD *)this + 18);
  v4 = MonitorFromRect(&rc, 1u);
  MonitorInformation = VoiceAssistantPositioner::GetMonitorInformation(
                         (VoiceAssistantPositioner *)((char *)this - 104),
                         v4,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v13,
                         &v16,
                         &v15,
                         (struct tagRECT *)&v14.right);
  v7 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v8 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x198, (__int64)v4, v6);
    v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x2EC, (__int64)v4, v9);
    v17 = 0LL;
    v18 = rc;
    VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
      (__int64)&v16,
      &v20,
      v13,
      v8,
      v10,
      (__int64)&v16,
      &v15,
      (struct tagRECT *)&v14.right,
      (__int128 *)&v18.left,
      &v17,
      0);
    v11 = v20;
    *a2 = v20;
    v18 = v11;
    v17 = rc;
    VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::Stop(
      (VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v21,
      &v17,
      &v18);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)MonitorInformation);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity::~VAPositioner_GetCortanaAppDefaultLaunchPositionActivity((VoiceAssistantPositionerTelemetry::VAPositioner_GetCortanaAppDefaultLaunchPositionActivity *)v21);
  return v7;
}
