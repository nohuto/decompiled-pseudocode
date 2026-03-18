/*
 * XREFs of PopCheckpointSystemSleep @ 0x14098F6C4
 * Callers:
 *     PopPrepareSleep @ 0x140380174 (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140762570 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407625C4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140762624 (PopResumeApps.c)
 *     PopResumeServices @ 0x14076269C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140762744 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076279C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x14098D6B4 (PopWriteHiberPages.c)
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x14098F728 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x140990440 (PopHiberChecksumHiberFileData.c)
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x140762AE8 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409AEA14 (PopCheckpointSystemSleepUnsafe.c)
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
  qword_140C23950 += result;
  return result;
}
