/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140505990
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x14069E77C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
