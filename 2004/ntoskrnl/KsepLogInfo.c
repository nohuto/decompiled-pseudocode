/*
 * XREFs of KsepLogInfo @ 0x14036F168
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140742B74 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140742CA0 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x1407431C8 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140745ACC (KseDriverLoadImage.c)
 *     KseQueryDeviceData @ 0x140749980 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140760764 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407AB370 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1408BC900 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408BCC90 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408BD114 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140A38D38 (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A63FE0 (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140A65B1C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A65D6C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14036F198 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
