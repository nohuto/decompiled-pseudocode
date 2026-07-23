/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x1405DDD60
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x1403647CC (FsRtlpAttachOplockKey.c)
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405FD94C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
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
