/*
 * XREFs of ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z @ 0x11E02 (-IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _EditionIsCompositionInputWindow@4 @ 0x6FF34 (_EditionIsCompositionInputWindow@4.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _xxxWindowHitTest2@20 @ 0x7D1C4 (_xxxWindowHitTest2@20.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     ?BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@3PAIPAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x17996A (-BasicTargetingWindowHitTest@@YGHPAUtagWND@@UtagPOINT@@PBUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     _EditionQueryInertiaWorker@12 @ 0x17CA46 (_EditionQueryInertiaWorker@12.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z @ 0x1B38DC (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AAEJFPAUtagWND@@@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __cdecl IsCompositionInputWindow()
{
  int v0; // esi
  int Prop; // eax

  v0 = 0;
  Prop = _GetProp(1);
  if ( Prop )
  {
    if ( !*(_DWORD *)(Prop + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    return 1;
  }
  return v0;
}
