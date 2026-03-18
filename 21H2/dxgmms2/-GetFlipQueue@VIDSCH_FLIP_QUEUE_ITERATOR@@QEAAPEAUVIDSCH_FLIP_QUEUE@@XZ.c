/*
 * XREFs of ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C001AF04
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C000317C (VidSchiSetFlipDevice.c)
 *     VidSchiCompletePendingFlip @ 0x1C001ADBC (VidSchiCompletePendingFlip.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0046580 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00465F8 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00466A8 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00F2CA4 (VidSchResetFlipQueueTimeout.c)
 *     VidSchCollectDbgInfo @ 0x1C00F64B0 (VidSchCollectDbgInfo.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00F6FB0 (VidSchiGetNumFlipAllocAttribs.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue(VIDSCH_FLIP_QUEUE_ITERATOR *this)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = *((int *)this + 3);
  v2 = *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 2) + 3200);
  if ( (_DWORD)v1 == -1 )
    return *(struct VIDSCH_FLIP_QUEUE **)(v2 + 24);
  else
    return *(struct VIDSCH_FLIP_QUEUE **)(v2 + 8 * v1 + 32);
}
