/*
 * XREFs of KsepLogInfo @ 0x1403717A8
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140758524 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140758650 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140758B78 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14075B560 (KseDriverLoadImage.c)
 *     KseQueryDeviceData @ 0x14075F420 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140772EF4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407BD440 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1408BFE20 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C01B0 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0634 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140A3C89C (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A686E8 (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6A47C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1403717D8 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
