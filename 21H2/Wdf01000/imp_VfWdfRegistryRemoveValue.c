/*
 * XREFs of imp_VfWdfRegistryRemoveValue @ 0x1C00C36B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryRemoveValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfRegistryRemoveValue)(
           DriverGlobals,
           Key,
           ValueName);
}
