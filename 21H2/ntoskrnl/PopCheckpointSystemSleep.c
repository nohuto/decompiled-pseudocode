/*
 * XREFs of PopCheckpointSystemSleep @ 0x140993484
 * Callers:
 *     PopPrepareSleep @ 0x140382D5C (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140776410 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140776464 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407764C4 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077653C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1407765E4 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077663C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x140990EBC (PopWriteHiberPages.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1409934E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x140994200 (PopHiberChecksumHiberFileData.c)
 *     PopDecompressHiberBlocks @ 0x140994874 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x1409988A0 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1409B1854 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x140776988 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409B26E4 (PopCheckpointSystemSleepUnsafe.c)
 */

unsigned __int64 __fastcall PopCheckpointSystemSleep(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = a1;
  PopSleepCheckpoint = a1;
  v2 = __rdtsc();
  if ( PopBootStatCheckpointAvailable )
    PopRecordSleepCheckpoint(a1);
  if ( PopCheckpointSystemSleepEnabled
    && ((PopCheckpointSystemSleepSimulateFlags & 1) == 0
     || (unsigned int)v1 <= HIBYTE(PopCheckpointSystemSleepSimulateFlags)) )
  {
    if ( PoAllProcIntrDisabled )
    {
      if ( KeGetCurrentPrcb()->Number )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
      if ( (unsigned __int8)off_140C00940[0]() )
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
    }
    else if ( !_InterlockedExchangeAdd(&PopPagingEnabled, 0) )
    {
      KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
    }
    PopCheckpointSystemSleepUnsafe((unsigned int)v1);
  }
  v3 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v3) << 32) | (unsigned int)v3) - v2;
  qword_140C23990 += result;
  return result;
}
