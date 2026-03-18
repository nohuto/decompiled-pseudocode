/*
 * XREFs of MiIsRetryIoStatus @ 0x140354144
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiZeroPageWrite @ 0x140310298 (MiZeroPageWrite.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1406DB9D0 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x1408C3450 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140354200 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741801 || a1 == -1073741670 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
