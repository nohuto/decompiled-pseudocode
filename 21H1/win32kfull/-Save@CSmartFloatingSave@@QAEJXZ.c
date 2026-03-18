/*
 * XREFs of ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C
 * Callers:
 *     _PhysicalToLogicalInPlaceRgnWorker@12 @ 0x36FD6 (_PhysicalToLogicalInPlaceRgnWorker@12.c)
 *     _PhysicalToLogicalInPlaceRect@8 @ 0x37E2C (_PhysicalToLogicalInPlaceRect@8.c)
 *     _UpdateTopLevelWindowDPITransform@8 @ 0x99C12 (_UpdateTopLevelWindowDPITransform@8.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 *     _MagpComposeDesktop@8 @ 0xE1152 (_MagpComposeDesktop@8.c)
 *     ?OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_TRANSFORM@@@Z @ 0xF1E96 (-OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_T.c)
 *     _MagSetLensContextInformation@28 @ 0x13D036 (_MagSetLensContextInformation@28.c)
 *     ?GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z @ 0x14FCA4 (-GetDpiRectWithSubpixel@@YGXPAUtagRECT@@PAMPAUtagWND@@21111@Z.c)
 *     ?RectContainsRect@@YGHMMMMMMMM@Z @ 0x14FED6 (-RectContainsRect@@YGHMMMMMMMM@Z.c)
 *     ?RectIntersectsRect@@YGHMMMMMMMM@Z @ 0x14FF7E (-RectIntersectsRect@@YGHMMMMMMMM@Z.c)
 *     _LogicalToPhysicalInPlaceRect@8 @ 0x15135F (_LogicalToPhysicalInPlaceRect@8.c)
 *     _ScaleDpiOffsetWithSubpixel@16 @ 0x151870 (_ScaleDpiOffsetWithSubpixel@16.c)
 *     _ScaleDpiValueWithSubpixel@16 @ 0x151932 (_ScaleDpiValueWithSubpixel@16.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __thiscall CSmartFloatingSave::Save(PKFLOATING_SAVE FloatSave)
{
  NTSTATUS result; // eax

  result = KeSaveFloatingPointState(FloatSave);
  LOBYTE(FloatSave[1].ControlWord) = result >= 0;
  return result;
}
