/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1406E4590
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406E433C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407226DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140764990 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140978728 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140978B28 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097BB24 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14097BE20 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097F68C (DrvDbDeleteObjectSubKey.c)
 *     PipResetDevices @ 0x140A52548 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1406D3F38 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        _DWORD *a5,
        _DWORD *a6,
        void *a7,
        unsigned int *a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
