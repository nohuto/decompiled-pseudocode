/*
 * XREFs of sqrt @ 0x18003C490
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800A8BD0 (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z @ 0x18017DCF0 (-NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z.c)
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180195020 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sqrt(double X)
{
  return _o_sqrt(X);
}
