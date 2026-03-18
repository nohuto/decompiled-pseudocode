/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1407AE7A4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C3720 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140A8E0EC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8E230 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8E9F0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8EC00 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A8EF90 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x1407502BC (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
