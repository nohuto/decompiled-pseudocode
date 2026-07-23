/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140276F10
 * Callers:
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140276E98 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
