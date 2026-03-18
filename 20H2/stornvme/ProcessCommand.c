/*
 * XREFs of ProcessCommand @ 0x1C0002084
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012C70 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0013C80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0013E90 (NVMeSplitIoCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014380 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0014800 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0015100 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C00152C0 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0016798 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0016914 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0016A28 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0016F2C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00171A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017298 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0017474 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0017568 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00176E8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C00178C8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017AFC (NVMeGetCommandEffectsLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C0017C90 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0017E6C (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0017FB0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0018394 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018690 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018A44 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0018B1C (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018DC4 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C001963C (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019BE0 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019F54 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C001A2B8 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001A3D8 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A4C0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001A678 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001A78C (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001ABA4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C001AD64 (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
 *     ProcessMultipleCommands @ 0x1C001B3D0 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C00029B0 (ProcessCommandInSpecificQueue.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000F3F0 (NVMeRequestComplete.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // r15
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // r14d
  unsigned int v12; // r12d
  unsigned __int16 v13; // ax

  SrbExtension = GetSrbExtension(a2);
  v6 = *(unsigned __int16 *)(SrbExtension + 4244);
  if ( (_WORD)v6 )
  {
    v7 = *(_WORD *)(a1 + 278);
    v8 = 136 * v6 + *(_QWORD *)(a1 + 768) - 136LL;
  }
  else
  {
    v7 = *(_WORD *)(a1 + 276);
    v8 = a1 + 288;
  }
  result = ProcessCommandInSpecificQueue(a1, v4, v8, v7);
  if ( !(_BYTE)result )
  {
    if ( *(_BYTE *)(a2 + 3) == 5
      && *(_WORD *)(v8 + 40)
      && (v10 = *(unsigned __int16 *)(a1 + 280), v11 = 0, *(_BYTE *)(SrbExtension + 4253) |= 0x10u, (v12 = v10) != 0) )
    {
      while ( 1 )
      {
        v13 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 280) )
          v13 = ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 280);
        *(_WORD *)(SrbExtension + 4244) = v13;
        v8 = 136LL * v13 + *(_QWORD *)(a1 + 768) - 136LL;
        result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
        if ( (_BYTE)result )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v11 < v12 )
          continue;
        return NVMeRequestComplete(a1, a2, 0LL);
      }
    }
    else
    {
      return NVMeRequestComplete(a1, a2, 0LL);
    }
  }
  return result;
}
