/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C006F608
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0016168 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C006C664 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006F05C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C006F8F8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0127440 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C0194AC8 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0199288 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C019940C (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C019C1C0 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C019FEF8 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 */

bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r8

  v1 = 0;
  if ( dword_1C0246A70 )
    return tlgKeywordOn((__int64)&dword_1C0246A70, a1);
  return v1;
}
