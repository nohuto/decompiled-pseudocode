/*
 * XREFs of MiIsRetryIoStatus @ 0x14034450C
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiZeroPageWrite @ 0x14031E678 (MiZeroPageWrite.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1406D15FC (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x1408CA5E0 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1403444E0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741801 || a1 == -1073741670 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
