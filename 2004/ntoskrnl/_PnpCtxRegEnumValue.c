/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1406C2E60
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406C2C0C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140714464 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140755D50 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B3018 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B40B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140972958 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140972D58 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140975D54 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x140976050 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x1409798BC (DrvDbDeleteObjectSubKey.c)
 *     PipResetDevices @ 0x140A51EC8 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1407007A4 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  return RegRtlEnumValue(a2, a3, a4, a6, a7, a8);
}
