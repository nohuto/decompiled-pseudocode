/*
 * XREFs of _IsPointerInputMessage@4 @ 0x4485A
 * Callers:
 *     _IsPointerInputMessageWithState@4 @ 0x439B4 (_IsPointerInputMessageWithState@4.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E (-PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x46B46 (-RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x69F40 (-xxxReadPostMessage@@YGHPAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIPAU_QMSG_POSTCHAR_FLAGS@@H@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _DestroyThreadsMessages@8 @ 0x6FE90 (_DestroyThreadsMessages@8.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 *     _FreeMessageList@4 @ 0x9C39C (_FreeMessageList@4.c)
 *     _FreeQEntry@4 @ 0xAB19C (_FreeQEntry@4.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0xCC9F6 (-CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14CB1D (-CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206 (-HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14D801 (-ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D (-_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z.c)
 *     _IsMiPPointerMessage@8 @ 0x14E3B9 (_IsMiPPointerMessage@8.c)
 *     ?DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z @ 0x159CFC (-DelegateDiscardMessages@@YGXPAUtagQ@@HPAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _NtUserfnPOINTERINPUT@28 @ 0x16D2EA (_NtUserfnPOINTERINPUT@28.c)
 *     ?FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z @ 0x16F14F (-FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z @ 0x189294 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SGXPBUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsPointerInputMessage(unsigned int a1)
{
  return a1 >= 0x241 && a1 <= 0x244 || a1 >= 0x245 && a1 <= 0x257 && a1 != 589;
}
