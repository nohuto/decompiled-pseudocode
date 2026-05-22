/*
 * XREFs of ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@@Z @ 0x180138430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180048774 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 */

__int64 __fastcall DWMInputRouter::HitTestForPoint(__int64 a1, __int64 a2, __int64 a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int128 v8[9]; // [rsp+20h] [rbp-98h] BYREF

  memset_0((char *)v8 + 12, 0, 0x7CuLL);
  LODWORD(v8[0]) = 0;
  *(_QWORD *)((char *)v8 + 4) = a3;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    a2,
    v8,
    *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 176),
    (__int64)InputSiteManager);
  return a2;
}
