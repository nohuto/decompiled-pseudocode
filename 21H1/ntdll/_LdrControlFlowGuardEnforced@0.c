/*
 * XREFs of _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100
 * Callers:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 *     _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3 (_RtlGuardCheckImageBase@8.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrpCfgProcessLoadConfig@12 @ 0x4B2CFEA0 (_LdrpCfgProcessLoadConfig@12.c)
 *     _LdrControlFlowGuardEnforcedWithExportSuppression@0 @ 0x4B2D00AD (_LdrControlFlowGuardEnforcedWithExportSuppression@0.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 *     _LdrProtectMrdataHeap@4 @ 0x4B2EC610 (_LdrProtectMrdataHeap@4.c)
 *     _LdrAllocateMrdataHeap@4 @ 0x4B2EC928 (_LdrAllocateMrdataHeap@4.c)
 *     _RtlpCallVectoredHandlers@12 @ 0x4B2ECCA1 (_RtlpCallVectoredHandlers@12.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0 (_RtlGuardCheckLongJumpTarget@12.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 *     _RtlRemoteCall@28 @ 0x4B366400 (_RtlRemoteCall@28.c)
 * Callees:
 *     <none>
 */

BOOLEAN LdrControlFlowGuardEnforced(void)
{
  return qword_4B3A9300 && (byte_4B3A92E4 & 1) == 0;
}
