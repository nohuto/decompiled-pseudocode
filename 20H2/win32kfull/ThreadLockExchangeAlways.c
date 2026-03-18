/*
 * XREFs of ThreadLockExchangeAlways @ 0x1C00D71E0
 * Callers:
 *     xxxWindowHitTest @ 0x1C0012468 (xxxWindowHitTest.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C00CF9DC (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210B9C (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C0212C4C (xxxUpdateThreadsWindows.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C021686C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeAlways(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
