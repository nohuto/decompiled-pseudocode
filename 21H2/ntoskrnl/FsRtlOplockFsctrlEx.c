/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x14071C5F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x14071C610 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return FsRtlpOplockFsctrlInternal(Oplock, Irp, 28672);
}
