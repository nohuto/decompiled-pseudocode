/*
 * XREFs of KsepLogError @ 0x140371F74
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F3810 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x140755A54 (KsepSdbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x140758650 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B74C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x14075F2C8 (KsepShimDatabaseTime.c)
 *     KseAddHardwareId @ 0x14075F69C (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407BD440 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407D1ED8 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1408BFE20 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C01B0 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0634 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1408C0C74 (KsepDeletePatchSdb.c)
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A38BB0 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A38C28 (KseUserCetInitialize.c)
 *     KseInitialize @ 0x140A3C89C (KseInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A686BC (KseZeroPoolInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A68758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A68784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A687B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A687DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A68808 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A6A0D0 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x140A6A47C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A72134 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1403717D8 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
