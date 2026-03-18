/*
 * XREFs of ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x141881 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     _EditionChangeForegroundQueueForMouseInput@8 @ 0x147787 (_EditionChangeForegroundQueueForMouseInput@8.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 */

BOOL __thiscall IsIndependentInputWindow(void *this)
{
  return IsCompositionInputWindow() && IsMessageOnlyWindow(this);
}
