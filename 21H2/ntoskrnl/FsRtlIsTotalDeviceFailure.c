/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x14028D390
 * Callers:
 *     MiIsRetryIoStatus @ 0x14028D2D8 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x14028D31C (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
