/*
 * XREFs of IoGetTopLevelIrp @ 0x140361990
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14088A770 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B1B0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B410 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
