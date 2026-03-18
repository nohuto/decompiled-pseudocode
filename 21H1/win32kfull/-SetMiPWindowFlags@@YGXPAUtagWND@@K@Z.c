/*
 * XREFs of ?SetMiPWindowFlags@@YGXPAUtagWND@@K@Z @ 0x14DB58
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

void __fastcall SetMiPWindowFlags(int a1, int a2)
{
  if ( a1 )
    InternalSetProp(a1, _gatomMiPFlags, a2, 5);
}
