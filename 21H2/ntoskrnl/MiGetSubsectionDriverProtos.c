/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1402FCDE0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     MiComputeImagePteIndex @ 0x1402FCD40 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiImageProtoChargedCommit @ 0x14037A2A0 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MiPfAllocateMdls @ 0x1406E8CA0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x1406E9250 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x1407158B8 (MiRevertRelocations.c)
 *     MiDeleteSessionDriverProtos @ 0x140779628 (MiDeleteSessionDriverProtos.c)
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
