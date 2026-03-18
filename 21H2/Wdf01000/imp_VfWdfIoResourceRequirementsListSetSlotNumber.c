/*
 * XREFs of imp_VfWdfIoResourceRequirementsListSetSlotNumber @ 0x1C00C2850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListSetSlotNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 SlotNumber)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetSlotNumber(DriverGlobals, RequirementsList, SlotNumber);
}
