/*
 * XREFs of QHelper::_anonymous_namespace_::GetQ @ 0x1C00655BC
 * Callers:
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C005CB6C (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x1C005FC74 (-HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0062854 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C00629C0 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C0063880 (-SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00699C8 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01C42A4 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0065680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall QHelper::_anonymous_namespace_::GetQ(__int64 a1)
{
  char v3; // [rsp+30h] [rbp-28h]
  int v4; // [rsp+68h] [rbp+10h] BYREF

  v4 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (unsigned int)&Feature_MinQMouseAndMiP__private_reporting,
                       22100935,
                       0,
                       0,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    v3 = 0;
    g_wil_details_pfnFeatureLoggingHook(
      22100935LL,
      &Feature_InputVirtualization_logged_traits,
      0LL,
      1LL,
      &v4,
      0LL,
      v3,
      1LL);
  }
  return CInputDest::GetQueue(a1, 2LL);
}
