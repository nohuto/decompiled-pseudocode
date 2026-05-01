/*
 * XREFs of ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802FCB94
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180306440 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802F9B80 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802FC690 (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802FCA1C (--4-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

_QWORD *__fastcall XamlSwitcherTelemetry::ShowXamlTaskView::operator=(_QWORD *a1, __int64 a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v5);
  v5[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(a1, a2);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v5);
  return a1;
}
