/*
 * XREFs of IoQueryInterface @ 0x140765590
 * Callers:
 *     HalpIommuGetDeviceId @ 0x140379A34 (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x1404B7984 (HalpDmaGetIommuInterface.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B7280 (ExShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x140764CFC (HalpGetCacheCoherency.c)
 * Callees:
 *     IopQueryInterfaceRecurseUp @ 0x140765388 (IopQueryInterfaceRecurseUp.c)
 *     PnpQueryInterface @ 0x140765D84 (PnpQueryInterface.c)
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
