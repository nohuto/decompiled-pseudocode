/*
 * XREFs of ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140058584
 * Callers:
 *     ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140057D5C (-GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140057FA0 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140058444 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x1400585BC (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 *     ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x14005B160 (-AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFF.c)
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x14005B360 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidQueueIndex(
        CCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl

  if ( a2 < a3 )
    return 1;
  v3 = 0;
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidQueueIndex", 0x6EAu, -2147467259);
  return v3;
}
