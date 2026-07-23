/*
 * XREFs of KsepDebugPrint @ 0x140527128
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F3810 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140758810 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x14075F488 (KsepShimDatabaseTime.c)
 *     KseQueryDeviceData @ 0x14075F5E0 (KseQueryDeviceData.c)
 *     KseAddHardwareId @ 0x14075F85C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407730B4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407BDBD0 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407D2048 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1408BFF80 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C0310 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0794 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1408C0DD4 (KsepDeletePatchSdb.c)
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A39BB0 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A39C28 (KseUserCetInitialize.c)
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A696BC (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A696E8 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A69758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A69784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A697B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A697DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A69808 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A6B0D0 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140A6B22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6B47C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A73134 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140272800 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
