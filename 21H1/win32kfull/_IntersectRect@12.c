/*
 * XREFs of _IntersectRect@12 @ 0x36374
 * Callers:
 *     _FindOldMonitor@12 @ 0x153AA (_FindOldMonitor@12.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _SpbCheckDce@4 @ 0x3272A (_SpbCheckDce@4.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     ?SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z @ 0x34A8E (-SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 *     ?IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z @ 0x359D0 (-IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z.c)
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     _UT_GetParentDCClipBox@12 @ 0x71660 (_UT_GetParentDCClipBox@12.c)
 *     _SubtractRect@12 @ 0x9A66A (_SubtractRect@12.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7 (-FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z @ 0x13F989 (-PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z @ 0x14FE5B (-IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 *     ?MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x171DE6 (-MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@3PAUtagWND@@33@Z @ 0x172538 (-TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIREC.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@@Z @ 0x174406 (-xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAU.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z @ 0x179D48 (-TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 *     ?FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z @ 0x17E08B (-FBitsTouch@@YGHPAUtagWND@@PAUtagRECT@@PAUtagSPB@@K@Z.c)
 *     ?PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z @ 0x196427 (-PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     ?SaveScreen@@YGKPAUtagWND@@KKHHHH@Z @ 0x19DB0A (-SaveScreen@@YGKPAUtagWND@@KKHHHH@Z.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 *     ?TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z @ 0x1A7C3C (-TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 *     _TouchTargetingClipContact@28 @ 0x1B8A8D (_TouchTargetingClipContact@28.c)
 *     _TouchTargetingCreateContact@16 @ 0x1B8BA5 (_TouchTargetingCreateContact@16.c)
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     <none>
 */

int __fastcall IntersectRect(_DWORD *a1, int *a2, int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v9; // edi

  v4 = *a2;
  if ( *a2 <= *a3 )
    v4 = *a3;
  *a1 = v4;
  v5 = a2[2];
  if ( v5 >= a3[2] )
    v5 = a3[2];
  a1[2] = v5;
  if ( v4 < v5 )
  {
    v6 = a2[1];
    if ( v6 <= a3[1] )
      v6 = a3[1];
    a1[1] = v6;
    v7 = a2[3];
    if ( v7 >= a3[3] )
      v7 = a3[3];
    a1[3] = v7;
    if ( v6 < v7 )
      return 1;
  }
  *a1 = 0;
  v9 = a1 + 1;
  *v9++ = 0;
  *v9 = 0;
  v9[1] = 0;
  return 0;
}
