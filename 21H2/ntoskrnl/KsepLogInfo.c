/*
 * XREFs of KsepLogInfo @ 0x1403712F8
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140758810 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 *     KseQueryDeviceData @ 0x14075F5E0 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x1407730B4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407BDBD0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1408BFF80 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C0310 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0794 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A696E8 (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140A6B22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6B47C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140371328 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
