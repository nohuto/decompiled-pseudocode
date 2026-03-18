/*
 * XREFs of ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x141881 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     _EditionChangeForegroundQueueForMouseInput@8 @ 0x147787 (_EditionChangeForegroundQueueForMouseInput@8.c)
 *     ?GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z @ 0x155D29 (-GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 *     _EditionGetCompositionInputWindowUIOwner@4 @ 0x16F37F (_EditionGetCompositionInputWindowUIOwner@4.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z.c)
 */

struct tagWND *__thiscall GetCompositionInputWindowUIOwner(void *this)
{
  int v1; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = 0;
  v3 = 0;
  if ( CWindowProp::GetProp<CInputQueueProp>((int)this, &v3) && *(_DWORD *)(v3 + 12) )
    return *(struct tagWND **)(v3 + 20);
  return (struct tagWND *)v1;
}
