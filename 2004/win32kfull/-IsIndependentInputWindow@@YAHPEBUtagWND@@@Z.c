/*
 * XREFs of ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00229B0
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0003194 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0008640 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00225CC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B0CEC (xxxDCompSpeedHitTest.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D2F50 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2090 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00BF910 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall IsIndependentInputWindow(const struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) )
    return (unsigned int)IsMessageOnlyWindow(a1) != 0;
  return v2;
}
