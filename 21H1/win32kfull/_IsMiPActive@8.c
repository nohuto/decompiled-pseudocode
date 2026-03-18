/*
 * XREFs of _IsMiPActive@8 @ 0x9AF76
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?ShouldAddPointerWakeFlag@@YGHPBUtagTHREADINFO@@PBUtagQMSG@@@Z @ 0xA1E42 (-ShouldAddPointerWakeFlag@@YGHPBUtagTHREADINFO@@PBUtagQMSG@@@Z.c)
 * Callees:
 *     _IsMiPEnabledForThread@4 @ 0x9AF9E (_IsMiPEnabledForThread@4.c)
 */

BOOL __fastcall IsMiPActive(int a1, int a2)
{
  int v2; // edx

  return a2 != 1 && !*(_DWORD *)(a1 + 328) && IsMiPEnabledForThread() && (!v2 || (*(_BYTE *)(v2 + 64) & 0x20) == 0);
}
