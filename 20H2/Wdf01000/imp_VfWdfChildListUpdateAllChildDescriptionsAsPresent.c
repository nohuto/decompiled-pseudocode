/*
 * XREFs of imp_VfWdfChildListUpdateAllChildDescriptionsAsPresent @ 0x1C00BB1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfChildListUpdateAllChildDescriptionsAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListUpdateAllChildDescriptionsAsPresent(DriverGlobals, ChildList);
}
