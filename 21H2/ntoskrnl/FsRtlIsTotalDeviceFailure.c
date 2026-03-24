/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1402559A0
 * Callers:
 *     MiIsRetryIoStatus @ 0x1402558E4 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140255928 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
