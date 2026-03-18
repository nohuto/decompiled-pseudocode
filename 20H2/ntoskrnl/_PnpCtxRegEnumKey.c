/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1407BF844
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6970 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140A933DC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A93520 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A93CE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A93EF0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A94280 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14076358C (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
