/*
 * XREFs of imp_VfWdfUsbTargetDeviceAllocAndQueryString @ 0x1C00BF2D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceAllocAndQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *StringMemoryAttributes,
        WDFMEMORY__ **StringMemory,
        wchar_t *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **, wchar_t *, unsigned __int8, unsigned __int16))WdfVersion.Functions.pfnWdfUsbTargetDeviceAllocAndQueryString)(
           DriverGlobals,
           UsbDevice,
           StringMemoryAttributes,
           StringMemory,
           NumCharacters,
           StringIndex,
           LangID);
}
