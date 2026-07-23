/*
 * XREFs of MiIsRetryIoStatus @ 0x140276E54
 * Callers:
 *     MiZeroPageWrite @ 0x14023E168 (MiZeroPageWrite.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1406A8C3C (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x1408C7F00 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140276F10 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741801 || a1 == -1073741670 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
