/*
 * XREFs of IoSetTopLevelIrp @ 0x140356C20
 * Callers:
 *     MiCreateNewSection @ 0x1406D2BC0 (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x140707DEC (MiShareExistingControlArea.c)
 *     FsRtlCopyRead @ 0x14088A610 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A890 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B050 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B2B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
