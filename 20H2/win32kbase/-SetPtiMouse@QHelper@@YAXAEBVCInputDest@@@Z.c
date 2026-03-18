/*
 * XREFs of ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C0033624
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033488 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0033CBC (QHelper--_anonymous_namespace_--GetQ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall QHelper::SetPtiMouse(QHelper *this, const struct CInputDest *a2)
{
  __int64 v3; // rdi

  v3 = QHelper::_anonymous_namespace_::GetQ(this, a2);
  if ( v3 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MinQMouseAndMiP__private_reporting,
      0x1513BC7u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
      1,
      3);
    *(_QWORD *)(v3 + 88) = CInputDest::GetThreadInfo(this);
  }
}
