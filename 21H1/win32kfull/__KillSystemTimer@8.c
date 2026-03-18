/*
 * XREFs of __KillSystemTimer@8 @ 0x1562F0
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int __stdcall _KillSystemTimer(unsigned int a1, int a2)
{
  return FindTimer(a1, a2, 2u, 1, 0);
}
