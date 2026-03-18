/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C023202C
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C022FAD0 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C8B70 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CCAA0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02CCEF0 (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C0261388 (DxgkpIsDrtEnabled.c)
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
