/*
 * XREFs of IoSetTopLevelIrp @ 0x140228F20
 * Callers:
 *     MiShareExistingControlArea @ 0x1405FAA68 (MiShareExistingControlArea.c)
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 *     FsRtlCopyRead @ 0x140887520 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408877A0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140887F60 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1408881C0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetTopLevelIrp(PIRP Irp)
{
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)Irp;
}
