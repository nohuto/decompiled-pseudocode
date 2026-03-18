/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x1402BCD40
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x1402BCCA0 (MiComputeImagePteIndex.c)
 *     MiImageProtoChargedCommit @ 0x1403773F0 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiPfAllocateMdls @ 0x14063E600 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x14063FBE0 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x1406CA540 (MiRevertRelocations.c)
 *     MiDeleteSessionDriverProtos @ 0x140764C88 (MiDeleteSessionDriverProtos.c)
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
