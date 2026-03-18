/*
 * XREFs of PopCheckpointSystemSleep @ 0x140996484
 * Callers:
 *     PopPrepareSleep @ 0x140382774 (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140772460 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407724B4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140772514 (PopResumeApps.c)
 *     PopResumeServices @ 0x14077258C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140772634 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14077268C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x140993EBC (PopWriteHiberPages.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x1409952E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1409964E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x140997200 (PopHiberChecksumHiberFileData.c)
 *     PopDecompressHiberBlocks @ 0x140997874 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x14099B6B0 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1409B4954 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x1407729D8 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409B57E4 (PopCheckpointSystemSleepUnsafe.c)
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
  qword_140C23850 += result;
  return result;
}
