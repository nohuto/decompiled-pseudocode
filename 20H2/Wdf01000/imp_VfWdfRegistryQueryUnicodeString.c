/*
 * XREFs of imp_VfWdfRegistryQueryUnicodeString @ 0x1C00BE620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        wchar_t *ValueByteLength,
        _UNICODE_STRING *Value)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, wchar_t *, _UNICODE_STRING *))WdfVersion.Functions.pfnWdfRegistryQueryUnicodeString)(
           DriverGlobals,
           Key,
           ValueName,
           ValueByteLength,
           Value);
}
