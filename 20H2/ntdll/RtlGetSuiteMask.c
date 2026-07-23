/*
 * XREFs of RtlGetSuiteMask @ 0x18003CC50
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18003E520 (RtlGetVersion.c)
 *     RtlQueryResourcePolicy @ 0x180044740 (RtlQueryResourcePolicy.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044ABC (RtlpActivateLowFragmentationHeap.c)
 *     LdrpEnableParallelLoading @ 0x180061628 (LdrpEnableParallelLoading.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x1800885B4 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlInitializeHeapManager @ 0x1800F2804 (RtlInitializeHeapManager.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x1800F4580 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F4678 (RtlpHpOptIntoSegmentHeap.c)
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
