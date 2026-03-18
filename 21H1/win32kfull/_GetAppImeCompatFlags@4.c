/*
 * XREFs of _GetAppImeCompatFlags@4 @ 0xA2FB2
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxImmProcessKey@20 @ 0xA2CE0 (_xxxImmProcessKey@20.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z @ 0x146A3E (-FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z.c)
 *     _EditionGetAppImeCompatFlags@4 @ 0x16DF56 (_EditionGetAppImeCompatFlags@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall GetAppImeCompatFlags(int ThreadWin32Thread)
{
  PKTHREAD CurrentThread; // eax

  if ( !ThreadWin32Thread )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  }
  return *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 420);
}
