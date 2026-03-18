/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18001A1FC
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180034D74 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800AB5B0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007D750 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _QWORD *a2)
{
  struct CInteraction *InteractionInternal; // rax
  _QWORD *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rax

  *a2 = 0LL;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v4 = 0LL;
  if ( InteractionInternal )
  {
    v5 = *((_QWORD *)InteractionInternal + 12);
    if ( v5 )
      v4 = *(_QWORD *)(v5 + 96);
    *v3 = v4;
  }
  return (struct _LUID)v3;
}
