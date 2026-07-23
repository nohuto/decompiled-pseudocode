/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x140307B30
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiComputeImagePteIndex @ 0x140307A90 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiImageProtoChargedCommit @ 0x140379DF0 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039EDE4 (MiCountSystemImageCommitment.c)
 *     MiRevertRelocations @ 0x1406C3F08 (MiRevertRelocations.c)
 *     MiPfAllocateMdls @ 0x140700080 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140700630 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x1407797E8 (MiDeleteSessionDriverProtos.c)
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
