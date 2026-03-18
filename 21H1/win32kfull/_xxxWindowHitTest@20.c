/*
 * XREFs of _xxxWindowHitTest@20 @ 0x7D14C
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKPBUtagPOINTEREVENTINT@@PAU4@@Z @ 0x17B79F (-xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKP.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 */

int __thiscall xxxWindowHitTest(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  int v4; // ebx
  ULONG_PTR v5; // edi
  _DWORD v7[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = 0;
  v7[2] = 0;
  v5 = BugCheckParameter2;
  v7[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v7;
  for ( v7[1] = 0; v5; v5 = *(_DWORD *)(v5 + 48) )
  {
    ThreadLockExchangeAlways(v5, v7);
    v4 = xxxWindowHitTest2(v5, a2, a3, a4);
    if ( v4 )
      break;
  }
  ThreadUnlock1();
  return v4;
}
