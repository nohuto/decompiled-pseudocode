/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C035A7A0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0357578 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C038BF98 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C038C3D4 (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  return (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v5) >= 0 && v5
      || DxgkpIsDrtEnabled(v1, v0, v2, v3)
      && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v5) >= 0
      && v5;
}
