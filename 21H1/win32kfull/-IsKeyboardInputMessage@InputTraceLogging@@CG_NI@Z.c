/*
 * XREFs of ?IsKeyboardInputMessage@InputTraceLogging@@CG_NI@Z @ 0xA9632
 * Callers:
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E (-PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x46B46 (-RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z @ 0xC7FE4 (-RedistributeInput@@YGXPAUtagQMSG@@PAUtagQ@@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall InputTraceLogging::IsKeyboardInputMessage(char *this)
{
  return (unsigned int)(this - 256) <= 9;
}
