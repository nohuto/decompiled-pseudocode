/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046C04
 * Callers:
 *     AudioServerGetAudioSession @ 0x180046B30 (AudioServerGetAudioSession.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006F530 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AUDIOSERVER_rundown @ 0x1800DE380 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800DE6D0 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE850 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800DEC90 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamLatency @ 0x1800DFE70 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800DFF40 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800E0B30 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800E0BE0 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800E0CB0 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800E0E60 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800E0F30 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800E1010 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800E10B0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800E1150 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800E1230 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800E1320 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800E13E0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800E1570 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
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
