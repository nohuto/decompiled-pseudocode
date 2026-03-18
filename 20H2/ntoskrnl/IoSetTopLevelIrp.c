/*
 * XREFs of IoSetTopLevelIrp @ 0x14029FEC0
 * Callers:
 *     MiShareExistingControlArea @ 0x14067EFC4 (MiShareExistingControlArea.c)
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140709EC4 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x14088D070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088D2F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088DAB0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
