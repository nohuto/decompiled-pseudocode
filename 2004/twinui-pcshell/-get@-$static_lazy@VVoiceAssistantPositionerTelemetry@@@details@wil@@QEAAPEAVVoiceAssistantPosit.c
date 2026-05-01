/*
 * XREFs of ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x1803E854C
 * Callers:
 *     ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007FB70 (-OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1803DE29C (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803DFC3C (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803E041C (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803E1470 (-HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803E15AC (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1803E1A6C (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x1803D4504 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    qword_1805CE3D8[0] = &IamTraceLogging::`vftable';
    v5 = qword_1805CE3D8;
    atexit(a2);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_1805CE3D8);
    InitOnceComplete(&`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_1805CE3D8);
  }
  return v5;
}
