/*
 * XREFs of IoGetTopLevelIrp @ 0x140281F90
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140886200 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140886C40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
