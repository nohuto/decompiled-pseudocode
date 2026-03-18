/*
 * XREFs of ?Enabled@InputTraceLogging@@CG_NW4InputTraceKeywords@@E@Z @ 0x9AEC8
 * Callers:
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z @ 0x9AE96 (-SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z @ 0xC529E (-SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     ?OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_TRANSFORM@@@Z @ 0xF1E96 (-OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_T.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 */

bool __fastcall InputTraceLogging::Enabled(int a1)
{
  return dword_2689E8 && (unsigned __int8)_tlgKeywordOn(a1, a1 >> 31);
}
