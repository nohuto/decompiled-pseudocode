/*
 * XREFs of ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8
 * Callers:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x180003D24 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006B48 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180017780 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180017844 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180025DCC (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18003A5FC (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005CE00 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x1800619F0 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180062E20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007B750 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BDC0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18007CDE0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x18007EE60 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007EF90 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800925D4 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180092A40 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180099890 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800B2CEC (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800B3188 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B3290 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800BAE1C (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BB048 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800C2C54 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800C51F0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800C52A4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017D650 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017D83C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B1550 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801B1FE0 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801EA0EC (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1802377FC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPtrArrayBase::GetCount(CPtrArrayBase *this)
{
  if ( (*(_QWORD *)this & 2) != 0 )
    return *(_QWORD *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *(_QWORD *)this & 1LL;
}
