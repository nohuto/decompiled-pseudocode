/*
 * XREFs of KsepLogError @ 0x140371AC4
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F3810 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x140755C14 (KsepSdbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x140758810 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x14075F488 (KsepShimDatabaseTime.c)
 *     KseAddHardwareId @ 0x14075F85C (KseAddHardwareId.c)
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
 *     KseClearPCIDBitsInitialize @ 0x140A69758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A69784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A697B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A697DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A69808 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A6B0D0 (KsepMatchInitMachineInfo.c)
 *     KsepEngineReadFlags @ 0x140A6B47C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A73134 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140371328 (KsepLogEtwMessage.c)
 */

void KsepLogError(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 0, a2, va);
}
