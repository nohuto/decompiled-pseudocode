/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180035384
 * Callers:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180017C9C (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180032E04 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180034610 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18003523C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800352B8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18003531C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x18003534C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x180225CFC (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x180227918 (-QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x180228444 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x180228510 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180228E90 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180229304 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180229EA8 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x18022A02C (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ??$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x18022B004 (--$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTr.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x18023736C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800CE750 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1800E17DC (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6) && (_DWORD)v5 )
  {
    v6 = qword_18034D1D8;
    qword_18034D1D8[0] = &CompositorTracing::`vftable';
    qword_18034D1F0 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18034D1D8, qword_18034D1F0, v4);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_18034D1D8);
  }
  return v6;
}
