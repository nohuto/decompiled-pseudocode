/*
 * XREFs of ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x180105054
 * Callers:
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18000CB84 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DefaultHeap::Free(v2);
    *a1 = 0LL;
  }
}
