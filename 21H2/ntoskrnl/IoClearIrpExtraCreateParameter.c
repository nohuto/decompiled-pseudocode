/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140505910
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1405FD94C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
