/*
 * XREFs of ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C0001A38
 * Callers:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0001684 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0187694 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputTraceLogging::IsMouseInputMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
