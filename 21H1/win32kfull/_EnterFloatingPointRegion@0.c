/*
 * XREFs of _EnterFloatingPointRegion@0 @ 0xAD89E
 * Callers:
 *     _InitializeDPIINFO@16 @ 0x24784 (_InitializeDPIINFO@16.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _MagpRemoveTransformOutputMagFac@4 @ 0xA3ACC (_MagpRemoveTransformOutputMagFac@4.c)
 *     _InitializePointerPrediction@0 @ 0xEC744 (_InitializePointerPrediction@0.c)
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1796EB (-ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?GetScreenRect@@YG?AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z @ 0x179C6A (-GetScreenRect@@YG-AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x17A904 (-xxxSendNCHitTest@@YGXPAUtagWND@@UtagPOINT@@1PAU2@PAHPAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall EnterFloatingPointRegion()
{
  return KeSaveFloatingPointState(_gfsSave) >= 0;
}
