/*
 * XREFs of ?GetMiPWindowFlags@@YGKPAUtagWND@@@Z @ 0x14D15A
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __thiscall GetMiPWindowFlags(void *this)
{
  if ( this )
    return _GetProp((int)this, _gatomMiPFlags, 1);
  else
    return 0;
}
