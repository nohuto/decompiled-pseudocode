/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x1406D8110
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return FsRtlpOplockFsctrlInternal((__int64 *)Oplock, Irp, OpenCount, Flags, 0x7000u);
}
