/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1407B1904
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C45E0 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140A8D6DC (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A8D820 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A8DFE0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A8E1F0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A8E580 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14075494C (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
