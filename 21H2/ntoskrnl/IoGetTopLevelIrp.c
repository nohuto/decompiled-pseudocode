/*
 * XREFs of IoGetTopLevelIrp @ 0x140356C40
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14088A610 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A890 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B050 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B2B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
