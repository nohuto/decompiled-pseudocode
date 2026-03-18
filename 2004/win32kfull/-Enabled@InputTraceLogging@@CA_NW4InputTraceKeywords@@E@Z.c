/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00B2E58
 * Callers:
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x1C00363E4 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0042E40 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxWindowFromPoint @ 0x1C00B0884 (xxxWindowFromPoint.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00B2CE8 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00B2E10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C01077D0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C005A788 (_tlgKeywordOn.c)
 */

bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r9

  v1 = 0;
  if ( dword_1C0330B30 )
    return tlgKeywordOn((__int64)&dword_1C0330B30, a1) != 0;
  return v1;
}
