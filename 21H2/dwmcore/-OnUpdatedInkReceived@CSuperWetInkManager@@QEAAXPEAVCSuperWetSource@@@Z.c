/*
 * XREFs of ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7CA8
 * Callers:
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x180216120 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180241250 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801A7C68 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7CE8 (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7DB4 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CSuperWetInkManager::OnUpdatedInkReceived(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  if ( IsSuperWetInkCompatibleVailContainer((__int64)this, (__int64)a2) )
    CSuperWetInkManager::OnUpdatedVailInkReceived(this, a2);
  else
    CSuperWetInkManager::OnUpdatedLocalInkReceived(this, a2);
}
