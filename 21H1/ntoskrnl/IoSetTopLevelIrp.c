/*
 * XREFs of IoSetTopLevelIrp @ 0x140281F70
 * Callers:
 *     MiShareExistingControlArea @ 0x14062FAA8 (MiShareExistingControlArea.c)
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x140886200 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140886C40 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
