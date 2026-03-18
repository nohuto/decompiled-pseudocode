/*
 * XREFs of KsepLogError @ 0x140371884
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F1F60 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x140751880 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140754898 (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x140758408 (KsepShimDatabaseTime.c)
 *     KseAddHardwareId @ 0x1407587DC (KseAddHardwareId.c)
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
 *     KseClearPCIDBitsInitialize @ 0x140A6B320 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6B34C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A6B378 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A6B3A4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A6B3D0 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A6CC90 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x140A6D03C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A751B4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x1403710E8 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
