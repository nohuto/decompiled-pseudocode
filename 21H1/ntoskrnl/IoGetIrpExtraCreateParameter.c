/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x1405FFDF0
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x1402FFEA8 (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x1406CD9E8 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDF18 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1406CE040 (IopGraftName.c)
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
