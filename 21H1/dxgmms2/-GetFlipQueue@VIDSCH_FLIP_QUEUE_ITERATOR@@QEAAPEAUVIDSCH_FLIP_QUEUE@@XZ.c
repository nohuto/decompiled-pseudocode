/*
 * XREFs of ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029FF4
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002924 (VidSchiSetFlipDevice.c)
 *     VidSchiCompletePendingFlip @ 0x1C003CE80 (VidSchiCompletePendingFlip.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003D9CC (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003DA54 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003DB04 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00D0C84 (VidSchResetFlipQueueTimeout.c)
 *     VidSchCollectDbgInfo @ 0x1C00D4FA0 (VidSchCollectDbgInfo.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00D5A90 (VidSchiGetNumFlipAllocAttribs.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue(VIDSCH_FLIP_QUEUE_ITERATOR *this)
{
  __int64 v1; // r8
  __int64 v2; // rcx

  v1 = *((int *)this + 3);
  v2 = *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 2) + 3104);
  if ( (_DWORD)v1 == -1 )
    return *(struct VIDSCH_FLIP_QUEUE **)(v2 + 24);
  else
    return *(struct VIDSCH_FLIP_QUEUE **)(v2 + 8 * v1 + 32);
}
