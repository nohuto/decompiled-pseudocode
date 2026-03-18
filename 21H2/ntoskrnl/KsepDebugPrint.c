/*
 * XREFs of KsepDebugPrint @ 0x14057D738
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x14057F1F0 (KseKPSOHookDriverTargeted.c)
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x14075C7BC (KsepGetShimsForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075CC14 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x14075CCC8 (KseDriverLoadImage.c)
 *     KsepGetShimCallbacksForDriver @ 0x14075EC70 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14075ECF4 (KseShimDriverIoCallbacks.c)
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     KseAddHardwareId @ 0x1407EC8C4 (KseAddHardwareId.c)
 *     KsepShimDatabaseTime @ 0x1407ECB78 (KsepShimDatabaseTime.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1408277FC (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x140963EA0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x140964230 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1409646B4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x140964CB8 (KsepDeletePatchSdb.c)
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140B001A8 (KsepMatchInitBiosInfo.c)
 *     KseVersionLieInitialize @ 0x140B003F8 (KseVersionLieInitialize.c)
 *     KsepEngineReadFlags @ 0x140B01140 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B01388 (KsepMatchInitMachineInfo.c)
 *     KseDriverScopeInitialize @ 0x140B01600 (KseDriverScopeInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140B01670 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140369C50 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
