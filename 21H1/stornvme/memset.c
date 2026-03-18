/*
 * XREFs of memset @ 0x1C0005500
 * Callers:
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 *     MdlToPrp @ 0x1C0003FE0 (MdlToPrp.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     DriverEntry @ 0x1C000901C (DriverEntry.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00091A4 (NVMeControllerStartFailureEventLog.c)
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     AdminQueuesFreeResources @ 0x1C0009CD8 (AdminQueuesFreeResources.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 *     NVMeInitStreams @ 0x1C000D840 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000DD98 (NVMeLogTelemetry.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0011A50 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011E38 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012810 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C00129F8 (LogSenseTemperature.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0013B08 (NVMeGetRichDeviceDescription.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C001501C (QueryProtocolInfoIdentifyData.c)
 *     SglToPrp @ 0x1C0015EFC (SglToPrp.c)
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
 *     NVMeReenumerateCompareAndMerge @ 0x1C00191E8 (NVMeReenumerateCompareAndMerge.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C00196DC (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019920 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0019C00 (NVMeReenumerateNameSpaceStart.c)
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
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
