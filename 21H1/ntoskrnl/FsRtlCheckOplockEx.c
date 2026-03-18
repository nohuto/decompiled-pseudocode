/*
 * XREFs of FsRtlCheckOplockEx @ 0x140256AF0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 */

NTSTATUS __stdcall FsRtlCheckOplockEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  return FsRtlCheckOplockEx2(
           (__int64 *)Oplock,
           (__int64)Irp,
           Flags,
           0,
           (__int64)Context,
           (__int64)CompletionRoutine,
           (__int64)PostIrpRoutine,
           0LL,
           0LL,
           0LL);
}
