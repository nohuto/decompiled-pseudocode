/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E17DC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMiPPromotion @ 0x1C01E271C (SetMiPPromotion.c)
 * Callees:
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1)
{
  SetWakeBit((__int64)a1, (**((_DWORD **)a1 + 159) & 0x20) != 0 ? 4 : 2);
}
