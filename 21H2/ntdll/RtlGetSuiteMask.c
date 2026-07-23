/*
 * XREFs of RtlGetSuiteMask @ 0x18003CC10
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18003E4E0 (RtlGetVersion.c)
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 *     LdrpEnableParallelLoading @ 0x180062B18 (LdrpEnableParallelLoading.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088BB4 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlInitializeHeapManager @ 0x1800F2654 (RtlInitializeHeapManager.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F43D0 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F44C8 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
