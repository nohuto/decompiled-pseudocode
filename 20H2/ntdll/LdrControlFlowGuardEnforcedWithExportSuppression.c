/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800477F0 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlValidateUserCallTarget @ 0x180047AD8 (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x180047BB0 (LdrpDoPostSnapWork.c)
 *     RtlGuardRestoreContext @ 0x18006DDB0 (RtlGuardRestoreContext.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FDAB0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 */

_BOOL8 __fastcall LdrControlFlowGuardEnforcedWithExportSuppression(__int64 a1)
{
  return (unsigned int)LdrControlFlowGuardEnforced(a1) && (BYTE5(xmmword_180181390) & 3) == 3;
}
