/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0032140
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F5D0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0004C98 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList ***a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  struct _VIDSCH_GLOBAL *v5; // rdx

  if ( (*(_DWORD *)(a4 + 1136) & 0x10) != 0 )
  {
    v4 = *(_DWORD **)(a4 + 1176);
    v5 = (struct _VIDSCH_GLOBAL *)(*v4 >> 10);
    LOWORD(v5) = *(_WORD *)(a3 + 33160) & (*(_WORD *)v4 | (unsigned __int16)v5) & 0x3FF;
  }
  else
  {
    v5 = (struct _VIDSCH_GLOBAL *)*(unsigned __int16 *)(a3 + 33160);
  }
  VidSchiUnreferenceDisplayingAllocations(a1, v5, (struct _VIDSCH_PRESENT_INFO *)a3, (unsigned __int16)v5);
}
