/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x14024EC00
 * Callers:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     MiComputeImagePteIndex @ 0x14024EB60 (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiImageProtoChargedCommit @ 0x14037A0A0 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140658B60 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x14070F388 (MiRevertRelocations.c)
 *     MiDeleteSessionDriverProtos @ 0x140775678 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionDriverProtos(_QWORD *a1)
{
  if ( (*(_DWORD *)(*a1 + 56LL) & 0x20) != 0 )
    return a1[3];
  else
    return 0LL;
}
