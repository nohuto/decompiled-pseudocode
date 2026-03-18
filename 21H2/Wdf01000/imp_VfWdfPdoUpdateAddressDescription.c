/*
 * XREFs of imp_VfWdfPdoUpdateAddressDescription @ 0x1C00C33A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfPdoUpdateAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))WdfVersion.Functions.pfnWdfPdoUpdateAddressDescription)(
           DriverGlobals,
           Device,
           AddressDescription);
}
