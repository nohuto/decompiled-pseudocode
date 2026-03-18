/*
 * XREFs of __GetTopLevelWindow@4 @ 0x313A0
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z @ 0x11AF6 (-SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x19E68 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     _NtUserGetForegroundWindow@0 @ 0x25C7C (_NtUserGetForegroundWindow@0.c)
 *     _IsWindowHolographicForHitTest@4 @ 0x268C0 (_IsWindowHolographicForHitTest@4.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _ShouldUseLogPixelsForWindowMetrics@4 @ 0x2AC48 (_ShouldUseLogPixelsForWindowMetrics@4.c)
 *     _ProtectedContentAccessCheck@4 @ 0x2FF9C (_ProtectedContentAccessCheck@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0 (_NtUserGetWindowCompositionAttribute@8.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z @ 0x93274 (-CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z @ 0x9B656 (-GetTopLevelOrDpiBoundaryWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z @ 0xA6A46 (-GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z.c)
 *     _CitGetWindowInfo@8 @ 0xA7234 (_CitGetWindowInfo@8.c)
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 *     _IsWindowEffectivelyCloaked@4 @ 0xAB818 (_IsWindowEffectivelyCloaked@4.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB848 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB862 (-GetCompositeAppFrameWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _NtUserBeginLayoutUpdate@4 @ 0xAD520 (_NtUserBeginLayoutUpdate@4.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     ?GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z @ 0xF4610 (-GetLayeredRegion@@YG_NPAUtagWND@@PAUHRGN__@@PA_N@Z.c)
 *     ?GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z @ 0xF46F8 (-GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x141881 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z @ 0x144E9E (-FixupOverlayWindowAttributes@@YGHPAUtagWND@@@Z.c)
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 *     _IsChildWindowDpiMessageEnabledX@4 @ 0x151284 (_IsChildWindowDpiMessageEnabledX@4.c)
 *     ?GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z @ 0x155D29 (-GetTopLevelWindowFromInputForVisualWindowOrSelf@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 *     ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750 (-StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z.c)
 *     _NtUserGetTopLevelWindow@4 @ 0x1647F7 (_NtUserGetTopLevelWindow@4.c)
 *     _NtUserNavigateFocus@8 @ 0x16716A (_NtUserNavigateFocus@8.c)
 *     ?WindowArrangementHotKeyCallback@@YGXIJ@Z @ 0x172BB1 (-WindowArrangementHotKeyCallback@@YGXIJ@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _anonymous_namespace_::GetWindowInGroupFromHint @ 0x19F198 (_anonymous_namespace_--GetWindowInGroupFromHint.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetTopLevelWindow(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // esi
  int v4; // edx
  int v5; // esi

  result = a1;
  if ( a1 )
  {
    do
    {
      v2 = *(_DWORD *)(result + 56);
      if ( v2 )
      {
        v3 = *(_DWORD *)(result + 12);
        v4 = 0;
        if ( v3 )
        {
          v5 = *(_DWORD *)(v3 + 4);
          if ( v5 )
            v4 = *(_DWORD *)(v5 + 12);
        }
        if ( v2 == v4 )
          break;
      }
      result = *(_DWORD *)(result + 56);
    }
    while ( v2 );
  }
  return result;
}
