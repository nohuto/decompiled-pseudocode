/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1402F8220
 * Callers:
 *     MiIsRetryIoStatus @ 0x1402F8164 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402F81A8 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
