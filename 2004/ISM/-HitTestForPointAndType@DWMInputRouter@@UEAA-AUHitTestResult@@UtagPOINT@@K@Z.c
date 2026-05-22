/*
 * XREFs of ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@K@Z @ 0x180138530
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B38 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x1800487C4 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 */

__int64 __fastcall DWMInputRouter::HitTestForPointAndType(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int128 v10[9]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0((char *)v10 + 12, 0, 0x7CuLL);
  *(_QWORD *)((char *)v10 + 4) = a3;
  LODWORD(v10[0]) = a4;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    a2,
    v10,
    *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 176),
    (__int64)InputSiteManager);
  return a2;
}
