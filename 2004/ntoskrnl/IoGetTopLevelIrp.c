/*
 * XREFs of IoGetTopLevelIrp @ 0x140228F40
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x140887520 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408877A0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140887F60 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1408881C0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
