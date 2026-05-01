/*
 * XREFs of ??$?0AEAW4MULTITASKING_VIEW_TYPES@@@DismissMultitaskingView@MultitaskingViewTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802D4620
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x18036E660 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801856AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802E56D4 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 */

struct wil::details::IFailureCallback *__fastcall MultitaskingViewTelemetry::DismissMultitaskingView::DismissMultitaskingView(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    (__int64)"DismissMultitaskingView");
  *(_QWORD *)a1 = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity(a1, *a3);
  return a1;
}
