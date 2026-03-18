/*
 * XREFs of ?IsMouseInputMessage@InputTraceLogging@@CG_NI@Z @ 0x46752
 * Callers:
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E (-PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x46B46 (-RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0xCC9F6 (-CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14CB1D (-CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206 (-HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14D801 (-ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z @ 0x189294 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall InputTraceLogging::IsMouseInputMessage(char *this)
{
  return (unsigned int)(this - 512) <= 0xE || (unsigned int)(this - 160) <= 0xD;
}
