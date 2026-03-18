/*
 * XREFs of IoQueryInterface @ 0x140846710
 * Callers:
 *     HalpIommuGetDeviceId @ 0x1403CD2D0 (HalpIommuGetDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x1405043D8 (HalpDmaGetIommuInterface.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     HalpGetCacheCoherency @ 0x140846200 (HalpGetCacheCoherency.c)
 * Callees:
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140846760 (IopQueryInterfaceRecurseUp.c)
 */

__int64 __fastcall IoQueryInterface(
        struct _DEVICE_OBJECT *a1,
        char a2,
        ULONG_PTR a3,
        USHORT a4,
        USHORT a5,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a6,
        void *a7)
{
  if ( (a2 & 1) != 0 )
    return IopQueryInterfaceRecurseUp((int)a1, a3, a4, a5, (__int64)a6, a7);
  else
    return PnpQueryInterface(a1, a3, a5, a4, a6, (USHORT *)a7);
}
