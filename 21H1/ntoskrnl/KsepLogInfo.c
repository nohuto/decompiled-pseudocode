/*
 * XREFs of KsepLogInfo @ 0x14036E538
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140741120 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140741648 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140743F4C (KseDriverLoadImage.c)
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x14075E3F4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407A8210 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1408BB5E0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408BB970 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408BBDF4 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140A38EBC (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A64600 (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140A6613C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6638C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14036E568 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
