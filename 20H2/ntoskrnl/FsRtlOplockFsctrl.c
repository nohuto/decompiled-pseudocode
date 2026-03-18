/*
 * XREFs of FsRtlOplockFsctrl @ 0x1406CC440
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x1405F20C0 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return FsRtlpOplockFsctrlInternal((__int64 *)Oplock, Irp, OpenCount, 0, 0x7000u);
}
