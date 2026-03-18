/*
 * XREFs of ?SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z @ 0x14DB36
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _SetMiPPromotion@8 @ 0x14E66B (_SetMiPPromotion@8.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 */

void __thiscall SetMiPWakeBit(_BYTE **this)
{
  SetWakeBit((int)this, 2 * ((*this[180] & 0x20) != 0) + 2);
}
