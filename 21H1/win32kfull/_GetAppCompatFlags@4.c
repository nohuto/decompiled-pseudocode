/*
 * XREFs of _GetAppCompatFlags@4 @ 0xA6D98
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z @ 0x88306 (-vIFIMetricsToTextMetricWStrict@@YGXAAVRFONTOBJ@@AAVDCOBJ@@PAUtagTEXTMETRICW@@PAU_IFIMETRICS@@@Z.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     ?GetWindowWorker@@YGPAUtagWND@@PAU1@IH@Z @ 0x1B6E6A (-GetWindowWorker@@YGPAUtagWND@@PAU1@IH@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __stdcall GetAppCompatFlags(int a1)
{
  int ThreadWin32Thread; // eax
  PKTHREAD CurrentThread; // eax

  ThreadWin32Thread = a1;
  if ( !a1 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  }
  return *(_DWORD *)(ThreadWin32Thread + 348);
}
