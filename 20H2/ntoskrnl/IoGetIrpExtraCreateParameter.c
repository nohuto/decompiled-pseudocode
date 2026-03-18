/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x140600340
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14020C800 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14030F488 (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406C6E18 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
