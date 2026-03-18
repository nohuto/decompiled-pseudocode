/*
 * XREFs of _ThreadLockExchangeAlways@8 @ 0x7D602
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxSendChildNCPaint@@YGXPAUtagWND@@@Z @ 0x715FC (-xxxSendChildNCPaint@@YGXPAUtagWND@@@Z.c)
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x17640C (-xxxUpdateOtherThreadsWindows@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _xxxUpdateThreadsWindows@12 @ 0x17804C (_xxxUpdateThreadsWindows@12.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     <none>
 */

int __fastcall ThreadLockExchangeAlways(int a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = a1;
  HMLockObject(a1);
  if ( v2 )
    return HMUnlockObject(v2);
  return v2;
}
