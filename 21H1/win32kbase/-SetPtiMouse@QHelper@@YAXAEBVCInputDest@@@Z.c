/*
 * XREFs of ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C0063880
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00655BC (QHelper--_anonymous_namespace_--GetQ.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0065680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QHelper::SetPtiMouse(QHelper *this, const struct CInputDest *a2)
{
  __int64 v3; // rdi
  char v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+68h] [rbp+10h] BYREF

  v3 = QHelper::_anonymous_namespace_::GetQ(this);
  if ( v3 )
  {
    v5 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         (unsigned int)&Feature_MinQMouseAndMiP__private_reporting,
                         22100935,
                         0,
                         0,
                         2) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
      {
        v4 = 0;
        g_wil_details_pfnFeatureLoggingHook(
          22100935LL,
          &Feature_InputVirtualization_logged_traits,
          0LL,
          1LL,
          &v5,
          0LL,
          v4,
          1LL);
      }
    }
    *(_QWORD *)(v3 + 88) = CInputDest::GetThreadInfo(this);
  }
}
