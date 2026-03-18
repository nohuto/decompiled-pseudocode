/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0230E7C
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C022E920 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CBAE0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02CBF30 (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C02603A8 (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  return (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v1) >= 0 && v1
      || (unsigned __int8)DxgkpIsDrtEnabled()
      && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v1) >= 0
      && v1;
}
