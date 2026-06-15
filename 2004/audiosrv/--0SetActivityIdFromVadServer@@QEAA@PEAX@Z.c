/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046BF4
 * Callers:
 *     AudioServerGetAudioSession @ 0x180046B20 (AudioServerGetAudioSession.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006F630 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AUDIOSERVER_rundown @ 0x1800DE440 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800DE790 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800DE910 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800DED50 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamLatency @ 0x1800DFF30 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800E0000 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800E0BF0 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800E0CA0 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800E0D70 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800E0F20 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800E0FF0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800E10D0 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800E1170 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800E1210 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800E12F0 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800E13E0 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800E14A0 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800E1630 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
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
