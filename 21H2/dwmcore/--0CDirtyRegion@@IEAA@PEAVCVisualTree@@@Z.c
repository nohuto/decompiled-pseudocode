/*
 * XREFs of ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x18006414C
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180064074 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ @ 0x18006426C (--0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x1800642CC (--0COcclusionContext@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::CDirtyRegion(CDirtyRegion *this, struct CVisualTree *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  COcclusionContext::COcclusionContext((CDirtyRegion *)((char *)this + 16));
  v3 = 8LL;
  `vector constructor iterator'(
    (char *)this + 1568,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 1696,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 2368,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_DWORD *)this + 624) = 0;
  `vector constructor iterator'(
    (char *)this + 2532,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 2660,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_DWORD *)this + 705) = 0;
  CDirtyRegionAnnotationAllocationSet::CDirtyRegionAnnotationAllocationSet((CDirtyRegion *)((char *)this + 2824));
  v4 = (_QWORD *)((char *)this + 1824);
  *((_QWORD *)this + 550) = 0LL;
  *((_QWORD *)this + 551) = 0LL;
  *((_DWORD *)this + 1104) = 0;
  *(_QWORD *)((char *)this + 4420) = 1065353216LL;
  *((_WORD *)this + 2214) = 0;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v3;
  }
  while ( v3 );
  return this;
}
