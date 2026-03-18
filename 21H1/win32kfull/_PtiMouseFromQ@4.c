/*
 * XREFs of _PtiMouseFromQ@4 @ 0x4810E
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall PtiMouseFromQ(_DWORD *this)
{
  int v1; // eax

  v1 = this[14];
  if ( v1 )
    return *(_DWORD *)(v1 + 8);
  else
    return this[12];
}
