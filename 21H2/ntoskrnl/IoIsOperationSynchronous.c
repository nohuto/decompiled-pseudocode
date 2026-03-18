/*
 * XREFs of IoIsOperationSynchronous @ 0x1402A2FA0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14071C610 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsOperationSynchronous(PIRP Irp)
{
  ULONG Flags; // eax
  bool v2; // dl
  bool v3; // cl
  int v4; // eax

  Flags = Irp->Flags;
  v2 = (Irp->Tail.Overlay.CurrentStackLocation->FileObject->Flags & 2) == 0;
  v3 = (Flags & 4) == 0;
  v4 = Flags & 0x42;
  return (!v2 || !v3 || v4 == 66) && v4 != 2;
}
