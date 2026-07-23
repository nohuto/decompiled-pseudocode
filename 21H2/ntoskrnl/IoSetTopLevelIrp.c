/*
 * XREFs of IoSetTopLevelIrp @ 0x140361970
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
 *     FsRtlCopyRead @ 0x14088A770 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14088B1B0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B410 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
