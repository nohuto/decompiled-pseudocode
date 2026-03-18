/*
 * XREFs of FsRtlCheckOplockEx @ 0x140293370
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140689350 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
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
