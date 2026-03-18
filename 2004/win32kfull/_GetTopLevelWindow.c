/*
 * XREFs of _GetTopLevelWindow @ 0x1C006EA90
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0003194 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     NtUserNavigateFocus @ 0x1C0007B40 (NtUserNavigateFocus.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0007CEC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00225CC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C002F570 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C002F758 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C00335D0 (GetWindowCloakStateComponentUIAware.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00516F4 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0052118 (TransformVectorWithInputTargetPrecedence.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006E9F0 (ShouldUseLogPixelsForWindowMetrics.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00902A0 (NtUserGetWindowCompositionAttribute.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B0CEC (xxxDCompSpeedHitTest.c)
 *     IsWindowHolographicForHitTest @ 0x1C00B2A20 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_ @ 0x1C00BED60 (_lambda_cb10391b5661d01073277e9ca426a942_--_lambda_invoker_cdecl_.c)
 *     ShouldProcessHungWindow @ 0x1C00E82D8 (ShouldProcessHungWindow.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00F5C00 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C010D91C (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     CitGetWindowInfo @ 0x1C01112C0 (CitGetWindowInfo.c)
 *     NtUserLayoutCompleted @ 0x1C0112FE0 (NtUserLayoutCompleted.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0125960 (NtUserBeginLayoutUpdate.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D2F50 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D6A70 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01D949C (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E5BC0 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E5DA0 (IsChildWindowDpiMessageEnabledX.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EB168 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2090 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F47CC (_GetNextQueueWindow.c)
 *     NtUserGetTopLevelWindow @ 0x1C01FCBC0 (NtUserGetTopLevelWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 104);
      if ( v1 )
      {
        v2 = *(_QWORD *)(a1 + 24);
        v3 = 0LL;
        if ( v2 )
        {
          v4 = *(_QWORD *)(v2 + 8);
          if ( v4 )
            v3 = *(_QWORD *)(v4 + 24);
        }
        if ( v1 == v3 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 104);
    }
    while ( v1 );
  }
  return a1;
}
