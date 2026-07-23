/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x180033520
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdataHeap @ 0x18000EED4 (LdrProtectMrdataHeap.c)
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004758C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlDeleteFunctionTable @ 0x1800679F0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180067BD0 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180067EC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180068410 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180068720 (RtlAddGrowableFunctionTable.c)
 *     RtlGuardRestoreContext @ 0x18006DDB0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006DEC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DFF0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckImageBase @ 0x180074B68 (RtlGuardCheckImageBase.c)
 *     RtlpCallVectoredHandlers @ 0x180078A44 (RtlpCallVectoredHandlers.c)
 *     RtlSetProtectedPolicy @ 0x180080C30 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180081790 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180082190 (RtlpRemoveVectoredHandler.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     RtlGrowFunctionTable @ 0x1800E0E20 (RtlGrowFunctionTable.c)
 *     RtlRemoteCall @ 0x1800FF260 (RtlRemoteCall.c)
 *     RtlpFreeReadOnlyHeap @ 0x18010B400 (RtlpFreeReadOnlyHeap.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  BOOLEAN result; // al

  if ( !LdrSystemDllInitBlock.CfgBitMap )
    return 0;
  result = 1;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 )
    return 0;
  return result;
}
