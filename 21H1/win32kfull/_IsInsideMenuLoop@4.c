/*
 * XREFs of _IsInsideMenuLoop@4 @ 0xACC66
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsInsideMenuLoop(_DWORD *this)
{
  int v1; // eax

  v1 = this[82];
  return v1 && (*(_BYTE *)(v1 + 4) & 4) != 0;
}
