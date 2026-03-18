/*
 * XREFs of _xxxDCEWindowHitTest@32 @ 0x9AED8
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKPBUtagPOINTEREVENTINT@@PAU4@@Z @ 0x17B79F (-xxxWindowHitTestWithoutTargeting@@YGPAUHWND__@@PAUtagTHREADINFO@@PAUtagWND@@IIJUtagPOINT@@PAHKP.c)
 * Callees:
 *     _xxxDCEWindowHitTestIndirect@16 @ 0x262C0 (_xxxDCEWindowHitTestIndirect@16.c)
 */

HWND __fastcall xxxDCEWindowHitTest(int a1, int a2, int a3, int a4, int a5, int a6, struct tagWND *a7, LONG a8)
{
  _DWORD v9[9]; // [esp+4h] [ebp-24h] BYREF

  v9[1] = a3;
  v9[2] = a4;
  v9[3] = a5;
  v9[4] = a6;
  v9[0] = a2;
  memset(&v9[5], 0, 16);
  return xxxDCEWindowHitTestIndirect(a1, (int)v9, a7, a8);
}
