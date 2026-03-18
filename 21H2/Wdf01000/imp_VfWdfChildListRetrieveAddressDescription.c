/*
 * XREFs of imp_VfWdfChildListRetrieveAddressDescription @ 0x1C00C0130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfChildListRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))WdfVersion.Functions.pfnWdfChildListRetrieveAddressDescription)(
           DriverGlobals,
           ChildList,
           IdentificationDescription,
           AddressDescription);
}
