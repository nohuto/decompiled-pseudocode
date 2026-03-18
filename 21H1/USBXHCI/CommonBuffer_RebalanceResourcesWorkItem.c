/*
 * XREFs of CommonBuffer_RebalanceResourcesWorkItem @ 0x1C002FEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C0050038 (XilCoreCommonBuffer_FreeUnusedResources.c)
 */

__int64 __fastcall CommonBuffer_RebalanceResourcesWorkItem(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0060298);
  return XilCoreCommonBuffer_FreeUnusedResources(v2 + 88);
}
