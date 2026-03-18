/*
 * XREFs of ProcessCommand @ 0x1C0002084
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012CF0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0013D00 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0013F10 (NVMeSplitIoCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014400 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0014880 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0015180 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0015340 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0016818 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0016994 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0016AA8 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0016FAC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017094 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0017224 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017318 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C00174F4 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0017768 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0017948 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0017B98 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C0017D20 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0017EFC (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0018040 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0018424 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018AE4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0018BBC (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C0018E64 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C00196DC (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019C80 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019FF4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C001A358 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001A478 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A560 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001A718 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001A82C (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001AC44 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C001AE34 (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C001B0A8 (NVMeSyncHostTime.c)
 *     ProcessMultipleCommands @ 0x1C001B4A0 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C00029B0 (ProcessCommandInSpecificQueue.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000F470 (NVMeRequestComplete.c)
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
