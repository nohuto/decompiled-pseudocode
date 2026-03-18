/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C0009118
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C002ED74 (_RegisterHotKey.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

void SetPenHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-28h]

  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_PenTailDockEvents__private_reporting,
    20840718LL,
    0LL,
    0LL,
    &Feature_PenTailDockEvents_logged_traits,
    1);
  LODWORD(BugCheckParameter2) = 131;
  RegisterHotKey(0LL, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = 130;
  RegisterHotKey(0LL, BugCheckParameter2a);
  LODWORD(BugCheckParameter2b) = 129;
  RegisterHotKey(0LL, BugCheckParameter2b);
  LODWORD(BugCheckParameter2c) = 131;
  RegisterHotKey(0LL, BugCheckParameter2c);
  LODWORD(BugCheckParameter2d) = 130;
  RegisterHotKey(0LL, BugCheckParameter2d);
}
