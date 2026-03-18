/*
 * XREFs of imp_VfWdfCmResourceListGetDescriptor @ 0x1C00BF270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCmResourceListGetDescriptor(DriverGlobals, List, Index);
}
