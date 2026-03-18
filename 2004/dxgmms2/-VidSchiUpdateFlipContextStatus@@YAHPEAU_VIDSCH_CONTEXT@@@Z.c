/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002CEA0
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003C20 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0004200 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C003018C (VidSchiProcessFlipPendingContextList.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C0010770 (VidSchiUnwaitContext.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 46) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 46) &= ~0x10u;
    return VidSchiUnwaitContext((__int64)a1, 0x537Eu);
  }
  return v1;
}
