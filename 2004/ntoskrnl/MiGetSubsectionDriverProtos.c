/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x140263D10
 * Callers:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x140263C70 (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiImageProtoChargedCommit @ 0x140378200 (MiImageProtoChargedCommit.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiPfAllocateMdls @ 0x1406094B0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x14060AA90 (MiAddMappedPtes.c)
 *     MiRevertRelocations @ 0x1406EB7C0 (MiRevertRelocations.c)
 *     MiDeleteSessionDriverProtos @ 0x140766648 (MiDeleteSessionDriverProtos.c)
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
