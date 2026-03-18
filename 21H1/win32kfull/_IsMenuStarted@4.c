/*
 * XREFs of _IsMenuStarted@4 @ 0xABF6A
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMenuStarted(_DWORD *this)
{
  int v1; // eax

  v1 = this[82];
  return v1 && (*(_BYTE *)(v1 + 4) & 1) != 0;
}
