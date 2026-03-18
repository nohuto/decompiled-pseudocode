/*
 * XREFs of ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8
 * Callers:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x180003B24 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800170C0 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180017184 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180020540 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18002D84C (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x180057FA8 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18006E330 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18006F890 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180070DE0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180075FB0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18008BC00 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18008C494 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18008C544 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180096EC0 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180097330 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009E2D4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800A0484 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A0B40 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A11B0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800A2740 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800A46A0 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800A47D0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800BD11C (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800BD5B8 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD6C0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800C9914 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017AA50 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18017AC3C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801AEBF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801AF690 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801E776C (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180234E3C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
