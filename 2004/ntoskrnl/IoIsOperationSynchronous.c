/*
 * XREFs of IoIsOperationSynchronous @ 0x14032A9A0
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x140689350 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsOperationSynchronous(PIRP Irp)
{
  ULONG v1; // eax

  v1 = Irp->Flags & 0x42;
  return ((Irp->Tail.Overlay.CurrentStackLocation->FileObject->Flags & 2) != 0 || (Irp->Flags & 4) != 0 || v1 == 66)
      && v1 != 2;
}
