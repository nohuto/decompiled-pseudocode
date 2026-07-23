/*
 * XREFs of FsRtlCheckOplock @ 0x14035FA50
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14035F6A0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 */

NTSTATUS __stdcall FsRtlCheckOplock(
        POPLOCK Oplock,
        PIRP Irp,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  unsigned int v9; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Options; // eax

  v9 = 0;
  FsRtlpOplockStoreKeyForDeleteOperation((__int64 *)Oplock, (__int64)Irp, 0);
  if ( !*Oplock && (!Irp || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
    return 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    v9 = (Options >> 8) & 1;
    if ( (Options & 0x10000) != 0 )
      v9 |= 0x10000000u;
  }
  return FsRtlCheckOplockEx2(
           (__int64 *)Oplock,
           Irp,
           v9,
           0,
           (__int64)Context,
           (__int64)CompletionRoutine,
           (__int64)PostIrpRoutine,
           0LL,
           0LL,
           0LL);
}
