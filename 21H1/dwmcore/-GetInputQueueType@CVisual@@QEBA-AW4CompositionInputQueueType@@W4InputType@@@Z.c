/*
 * XREFs of ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x18001AD00
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180034D74 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x18001AD38 (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18007D750 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

__int64 __fastcall CVisual::GetInputQueueType(CVisual *a1)
{
  struct CInteraction *InteractionInternal; // rax
  unsigned int v2; // r10d
  unsigned int v3; // r11d
  __int64 v4; // rcx

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( InteractionInternal )
  {
    v4 = *((_QWORD *)InteractionInternal + 12);
    if ( v4 )
      return (unsigned int)CInputSinkStruct::GetInputQueueType(v4, v3);
  }
  return v2;
}
