/*
 * XREFs of LdrControlFlowGuardEnforced @ 0x180033520
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdataHeap @ 0x18000EED4 (LdrProtectMrdataHeap.c)
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180053EB8 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlDeleteFunctionTable @ 0x180068EE0 (RtlDeleteFunctionTable.c)
 *     RtlAddFunctionTable @ 0x1800690C0 (RtlAddFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800693B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180069900 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180069C10 (RtlAddGrowableFunctionTable.c)
 *     RtlGuardRestoreContext @ 0x18006EDE0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x18006EEF0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006F020 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckImageBase @ 0x180075B98 (RtlGuardCheckImageBase.c)
 *     RtlpCallVectoredHandlers @ 0x180079A74 (RtlpCallVectoredHandlers.c)
 *     RtlSetProtectedPolicy @ 0x180081550 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x1800820B0 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x1800828A0 (RtlpRemoveVectoredHandler.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D108C (LdrpInitializeExecutionOptions.c)
 *     RtlGrowFunctionTable @ 0x1800E0BD0 (RtlGrowFunctionTable.c)
 *     RtlRemoteCall @ 0x1800FF100 (RtlRemoteCall.c)
 *     RtlpFreeReadOnlyHeap @ 0x18010B2A0 (RtlpFreeReadOnlyHeap.c)
 * Callees:
 *     <none>
 */

__int64 LdrControlFlowGuardEnforced()
{
  __int64 result; // rax

  if ( !qword_1801813A8 )
    return 0LL;
  result = 1LL;
  if ( (byte_18018138C & 1) != 0 )
    return 0LL;
  return result;
}
