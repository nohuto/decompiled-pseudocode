/*
 * XREFs of ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00330E0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0051710 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BB1D0 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C0032C08 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0032EB4 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033488 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033C60 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034CE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C009B1EC (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C009B288 (ApiSeEditionDeferWinEventNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DeliverMouseMoveToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        const struct CInputDest *a3,
        struct tagPOINT *a4,
        struct _mouseCursorEvent *a5)
{
  if ( *(_DWORD *)a3 )
  {
    if ( CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      *(_BYTE *)(*((_QWORD *)this + 617) + 52LL) = 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
        0x1244BCEu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_TestMode_logged_traits,
        0,
        3);
    }
    else
    {
      if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(a3, 0LL) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput(a3);
      ApiSeEditionDeferWinEventNotify();
      CMouseProcessor::UpdateGlobalCursorOwner(
        this,
        a3,
        a4,
        (const struct tagINPUT_MESSAGE_SOURCE *)(*((_QWORD *)a2 + 1) + 104LL));
      CMouseProcessor::DetectAndApplyMouseMovePostStrategy(this, a3, (const struct tagLOGICALPOINT *)&a4[1], a2, a5);
      ApiSetEditionEndDeferWinEventNotify();
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  }
}
