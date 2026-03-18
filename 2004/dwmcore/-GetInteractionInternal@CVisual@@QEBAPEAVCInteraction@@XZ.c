/*
 * XREFs of ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98
 * Callers:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180004440 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18001967C (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x18001A118 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180038780 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18006D3D0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18009C78C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A0B40 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x1800A2048 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x1800A2E90 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x1800A2F30 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DD184 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1801AEFF0 (-GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801CA048 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180223CB0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180224FFC (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x180231E18 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1802326D4 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x18023298C (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x180232B70 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x180233004 (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x180233450 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x180234CC0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180234DFC (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CVisual::GetInteractionInternal(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x800000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 9 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (__int64)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(struct CInteraction **)v5;
}
