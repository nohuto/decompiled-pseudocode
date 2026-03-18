/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C00C824C
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void SetPenHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-28h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_PenTailDockEvents__private_reporting,
    0x13E010Eu,
    0,
    0,
    (__int64)&Feature_PenTailDockEvents_logged_traits,
    1u,
    v5);
  LODWORD(BugCheckParameter2) = 131;
  RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 30, 16904, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = 130;
  RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 31, 16904, BugCheckParameter2a);
  LODWORD(BugCheckParameter2b) = 129;
  RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 32, 16904, BugCheckParameter2b);
  LODWORD(BugCheckParameter2c) = 131;
  RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 33, 16906, BugCheckParameter2c);
  LODWORD(BugCheckParameter2d) = 130;
  RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 34, 16906, BugCheckParameter2d);
}
