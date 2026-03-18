/*
 * XREFs of GetAppImeCompatFlags @ 0x1C00FDF04
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxImmProcessKey @ 0x1C00FDC24 (xxxImmProcessKey.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D7FE0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionGetAppImeCompatFlags @ 0x1C0207170 (EditionGetAppImeCompatFlags.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppImeCompatFlags(__int64 ThreadWin32Thread)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(unsigned int *)(*(_QWORD *)(ThreadWin32Thread + 424) + 776LL);
}
