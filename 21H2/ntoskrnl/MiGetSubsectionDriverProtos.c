/*
 * XREFs of MiGetSubsectionDriverProtos @ 0x14027B234
 * Callers:
 *     MiImageProtoChargedCommit @ 0x14024B768 (MiImageProtoChargedCommit.c)
 *     MiComputeImagePteIndex @ 0x14027B194 (MiComputeImagePteIndex.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     MiDeleteSessionDriverProtos @ 0x1406EB270 (MiDeleteSessionDriverProtos.c)
 *     MiAddMappedPtes @ 0x1406F40E0 (MiAddMappedPtes.c)
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
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
