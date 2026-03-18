/*
 * XREFs of _GetTouchDoubleClickTime@0 @ 0x16FBF1
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     <none>
 */

int __stdcall GetTouchDoubleClickTime()
{
  return GetTouchTimeFromCPLValue(300, 180, 5, 1);
}
