/*
 * XREFs of MiIsRetryIoStatus @ 0x14028D2D8
 * Callers:
 *     MiZeroPageWrite @ 0x1402459E8 (MiZeroPageWrite.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1407063CC (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x14028D390 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
