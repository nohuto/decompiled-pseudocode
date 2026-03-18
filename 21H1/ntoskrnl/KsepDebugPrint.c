/*
 * XREFs of KsepDebugPrint @ 0x1405213E8
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403ECAA0 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140741120 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140741648 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x140743F4C (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x140747CA8 (KsepShimDatabaseTime.c)
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 *     KseAddHardwareId @ 0x14074807C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14075E3F4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407A8210 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407BC228 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1408BB5E0 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408BB970 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408BBDF4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1408BC434 (KsepDeletePatchSdb.c)
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A35BE4 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A35C5C (KseUserCetInitialize.c)
 *     KseInitialize @ 0x140A38EBC (KseInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A645D4 (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A64600 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A64670 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6469C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A646C8 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A646F4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A64720 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A65FE0 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140A6613C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6638C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A6E2DC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14033C750 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
