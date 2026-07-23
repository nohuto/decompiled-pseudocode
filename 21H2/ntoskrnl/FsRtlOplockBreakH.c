/*
 * XREFs of FsRtlOplockBreakH @ 0x140617A40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpAttachOplockKey @ 0x1403647CC (FsRtlpAttachOplockKey.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS v10; // ebx
  POPLOCK_FS_PREPOST_IRP v12; // r12
  POPLOCK_WAIT_COMPLETE_ROUTINE v13; // r13
  __int64 v14; // [rsp+20h] [rbp-98h]
  char v15; // [rsp+C0h] [rbp+8h] BYREF
  char v16; // [rsp+C8h] [rbp+10h] BYREF
  PVOID v17; // [rsp+D8h] [rbp+20h]

  v17 = Context;
  v8 = (PFAST_MUTEX *)*Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v15 = 0;
  v10 = 0;
  v16 = 0;
  if ( !v8 )
    return v10;
  v10 = FsRtlpAttachOplockKey(Irp);
  if ( !v10 )
  {
    if ( CurrentStackLocation->MajorFunction )
    {
LABEL_8:
      v12 = PostIrpRoutine;
      v13 = CompletionRoutine;
      do
      {
        v16 = 0;
        if ( !v15 )
        {
          ExAcquireFastMutexUnsafe(v8[19]);
          v15 = 1;
        }
        LODWORD(v14) = 0;
        v10 = FsRtlpOplockBreakByCacheFlags(
                (__int64)v8,
                (__int64)CurrentStackLocation,
                Irp,
                Flags,
                v14,
                0x2000,
                (__int64)v17,
                (__int64)v13,
                (__int64)v12,
                0LL,
                0LL,
                0LL,
                &v15,
                (__int64)&v16);
      }
      while ( v16 );
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0 )
    {
      if ( (CurrentStackLocation->Parameters.Create.Options & 0x10000) != 0 )
        Flags |= 0x10000000u;
      goto LABEL_8;
    }
    v10 = 0;
  }
LABEL_14:
  if ( v15 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v10;
}
