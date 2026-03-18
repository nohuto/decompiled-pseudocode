/*
 * XREFs of KsepDebugPrint @ 0x140525408
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F1F60 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x140751754 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140751880 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140751DA8 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x1407546AC (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140754898 (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x140758408 (KsepShimDatabaseTime.c)
 *     KseQueryDeviceData @ 0x140758560 (KseQueryDeviceData.c)
 *     KseAddHardwareId @ 0x1407587DC (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14076ED74 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407B92B0 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407CDC28 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1408C2660 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C29F0 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C2E74 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1408C34B4 (KsepDeletePatchSdb.c)
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A3BBE4 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A3BC5C (KseUserCetInitialize.c)
 *     KseInitialize @ 0x140A3ED1C (KseInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A6B284 (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A6B2B0 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A6B320 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6B34C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A6B378 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A6B3A4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A6B3D0 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A6CC90 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140A6CDEC (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6D03C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A751B4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140364830 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
