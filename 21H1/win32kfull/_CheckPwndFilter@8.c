/*
 * XREFs of _CheckPwndFilter@8 @ 0xA6D84
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 * Callees:
 *     <none>
 */

int __fastcall CheckPwndFilter(int a1, int a2)
{
  if ( !a2 || a2 == a1 || a2 == 1 && !a1 )
    return 1;
  else
    return _IsChild(a2, a1);
}
