/*
 * XREFs of ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00018E8
 * Callers:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0001534 (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C018F8D4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputTraceLogging::IsMouseInputMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
