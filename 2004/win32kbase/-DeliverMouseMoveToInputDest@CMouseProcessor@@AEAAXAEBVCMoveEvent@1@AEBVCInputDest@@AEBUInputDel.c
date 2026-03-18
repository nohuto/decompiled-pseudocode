/*
 * XREFs of ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E208
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 * Callees:
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C003BBF4 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C003BC90 (ApiSeEditionDeferWinEventNotify.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0068FA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C006DD08 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C006DFDC (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E5A8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C006FC64 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0070978 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
        (int)&Feature_InputVirtualizationDesktopSpecific__private_reporting,
        0x1244BCEu,
        0,
        0,
        (__int64)&Feature_BrokeredDisplays_TestMode_logged_traits,
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
