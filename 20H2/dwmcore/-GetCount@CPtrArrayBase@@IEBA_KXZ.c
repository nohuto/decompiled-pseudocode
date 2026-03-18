/*
 * XREFs of ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378
 * Callers:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x180005334 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180016EE0 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$all.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180016FA4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180020020 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180026F58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800277EC (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800278A4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800366BC (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180041FFC (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800428EC (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180064910 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180065790 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV-$vector@PEAVCVisual@@V-$alloca.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18007750C (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18008D110 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18008E670 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008FBC0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180094DD0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A8790 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A8E00 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800AA250 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800AC150 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800AC280 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800BCD9C (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800BD238 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800C8F54 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180178E00 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180178FEC (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801ACCF0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801AD780 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180233EAC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
