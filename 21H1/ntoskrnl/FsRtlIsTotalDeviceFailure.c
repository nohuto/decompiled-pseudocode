/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140354200
 * Callers:
 *     MiIsRetryIoStatus @ 0x140354144 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140354188 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
