/*
 * XREFs of PopCheckpointSystemSleep @ 0x140990414
 * Callers:
 *     PopPrepareSleep @ 0x1403809B4 (PopPrepareSleep.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopSuspendApps @ 0x140763E50 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x140763EA4 (PopSuspendServices.c)
 *     PopResumeApps @ 0x140763F04 (PopResumeApps.c)
 *     PopResumeServices @ 0x140763F7C (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140764024 (PopDispatchSuperfetchNotification.c)
 *     PopNotifyCallbacksPreSleep @ 0x14076407C (PopNotifyCallbacksPreSleep.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PopWriteHiberPages @ 0x14098DECC (PopWriteHiberPages.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140990478 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     PopRequestWrite @ 0x140990D44 (PopRequestWrite.c)
 *     PopHiberChecksumHiberFileData @ 0x140991190 (PopHiberChecksumHiberFileData.c)
 *     PopDecompressHiberBlocks @ 0x140991804 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140995550 (PopHiberCheckResume.c)
 *     PopRequestRead @ 0x1409AE9E4 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PopRecordSleepCheckpoint @ 0x1407643C8 (PopRecordSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1409AF874 (PopCheckpointSystemSleepUnsafe.c)
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
  qword_140C23390 += result;
  return result;
}
