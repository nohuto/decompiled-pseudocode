/*
 * XREFs of KsepLogError @ 0x14036ED04
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403ECAA0 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x140741120 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140744138 (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x140747CA8 (KsepShimDatabaseTime.c)
 *     KseAddHardwareId @ 0x14074807C (KseAddHardwareId.c)
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
 *     KseClearPCIDBitsInitialize @ 0x140A64670 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6469C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A646C8 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A646F4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A64720 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A65FE0 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x140A6638C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A6E2DC (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x14036E568 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
