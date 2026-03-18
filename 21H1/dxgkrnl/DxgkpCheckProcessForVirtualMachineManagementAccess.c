/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C022DDEC
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C022B890 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C45F0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02C8520 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02C8970 (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C025D088 (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  return (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v3) >= 0 && v3
      || (unsigned __int8)DxgkpIsDrtEnabled(v1, v0)
      && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v3) >= 0
      && v3;
}
