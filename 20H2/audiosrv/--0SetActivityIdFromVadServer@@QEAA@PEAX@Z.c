/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046434
 * Callers:
 *     AudioServerGetAudioSession @ 0x180046360 (AudioServerGetAudioSession.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006EB70 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AUDIOSERVER_rundown @ 0x1800DD7B0 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800DDB00 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DDC80 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800DE0C0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamLatency @ 0x1800DF2A0 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800DF370 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800DFF60 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800E0010 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800E00E0 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800E0290 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800E0360 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800E0440 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800E04E0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800E0580 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800E0660 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800E0750 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800E0810 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800E09A0 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        char *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = *(GUID *)(a2 + 280);
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
