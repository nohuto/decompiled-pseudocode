/*
 * XREFs of ?DisconnectOffloadStreams@@YAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800709E0
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F1678 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisconnectOffloadStreams(__int64 a1)
{
  return CAudioResourceManager::DisconnectOffloadStreams(a1, a1);
}
