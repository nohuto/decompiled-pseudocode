/*
 * XREFs of ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00B11D8
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00B1018 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 */

void __fastcall VidMmiFreeQuerySegmentInfo(struct _DXGK_QUERYSEGMENTOUT4 *a1)
{
  UCHAR *pSegmentDescriptor; // rcx

  pSegmentDescriptor = a1->pSegmentDescriptor;
  if ( pSegmentDescriptor )
  {
    operator delete(pSegmentDescriptor);
    a1->pSegmentDescriptor = 0LL;
  }
}
