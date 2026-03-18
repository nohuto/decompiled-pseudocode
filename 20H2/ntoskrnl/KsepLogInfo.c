/*
 * XREFs of KsepLogInfo @ 0x1403710B8
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140751754 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140751880 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140751DA8 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1407546AC (KseDriverLoadImage.c)
 *     KseQueryDeviceData @ 0x140758560 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x14076ED74 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407B92B0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1408C2660 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C29F0 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C2E74 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140A3ED1C (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A6B2B0 (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140A6CDEC (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6D03C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1403710E8 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
