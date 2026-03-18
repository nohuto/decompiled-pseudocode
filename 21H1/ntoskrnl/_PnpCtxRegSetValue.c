/*
 * XREFs of _PnpCtxRegSetValue @ 0x1409700BC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     _RegRtlSetValue @ 0x140752584 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
