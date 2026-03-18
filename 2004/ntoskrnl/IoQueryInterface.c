/*
 * XREFs of IoQueryInterface @ 0x1407536E0
 * Callers:
 *     HalpIommuGetDeviceId @ 0x1403778A4 (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x1404B2AA4 (HalpDmaGetIommuInterface.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B1CF0 (ExShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x140752E4C (HalpGetCacheCoherency.c)
 * Callees:
 *     IopQueryInterfaceRecurseUp @ 0x1407534D8 (IopQueryInterfaceRecurseUp.c)
 *     PnpQueryInterface @ 0x140753EE0 (PnpQueryInterface.c)
 */

__int64 __fastcall IoQueryInterface(
        struct _DEVICE_OBJECT *a1,
        char a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((__int64)a1, a3, a4, a5, a6, a7);
  else
    return PnpQueryInterface(a1, a6, a7);
}
