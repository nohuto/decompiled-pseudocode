/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1403444E0
 * Callers:
 *     MmIsWriteErrorFatal @ 0x140344468 (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x14034450C (MiIsRetryIoStatus.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
