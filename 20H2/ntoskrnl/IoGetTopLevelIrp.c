/*
 * XREFs of IoGetTopLevelIrp @ 0x14029FEE0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 *     FsRtlCopyRead @ 0x14088D070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088D2F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088DAB0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

PIRP IoGetTopLevelIrp(void)
{
  return (PIRP)KeGetCurrentThread()[1].TrapFrame;
}
