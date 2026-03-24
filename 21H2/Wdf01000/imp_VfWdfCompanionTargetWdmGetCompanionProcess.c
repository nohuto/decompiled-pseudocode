/*
 * XREFs of imp_VfWdfCompanionTargetWdmGetCompanionProcess @ 0x1C00BF510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

struct _EPROCESS *__fastcall imp_VfWdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  return WdfVersion.Functions.pfnWdfCompanionTargetWdmGetCompanionProcess(DriverGlobals, CompanionTarget);
}
