/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C01071B0
 * Callers:
 *     W32kCddDisableGdiHwAcceleration @ 0x1C0107170 (W32kCddDisableGdiHwAcceleration.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E1280 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C0219DBC (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02245AC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(_QWORD *)(ThreadWin32Thread + 640);
}
