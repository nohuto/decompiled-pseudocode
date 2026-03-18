/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18007C6E8
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180034D74 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BAEB4 (-PreSubgraph@CInputSinkContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800DBE14 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007D750 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

__int64 __fastcall CVisual::GetInputHandle(CVisual *this)
{
  struct CInteraction *InteractionInternal; // rax
  __int64 v2; // r10
  __int64 v4; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    v4 = *((_QWORD *)InteractionInternal + 12);
    if ( v4 )
      return *(_QWORD *)(v4 + 64);
  }
  return v2;
}
