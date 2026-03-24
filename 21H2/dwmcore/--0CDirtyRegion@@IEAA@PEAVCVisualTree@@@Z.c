/*
 * XREFs of ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x1800444A0
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800443B0 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003E900 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ @ 0x1800445C0 (--0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
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
    (char *)this + 1600,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 1728,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 2400,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_DWORD *)this + 632) = 0;
  `vector constructor iterator'(
    (char *)this + 2564,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 2692,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_DWORD *)this + 713) = 0;
  CDirtyRegionAnnotationAllocationSet::CDirtyRegionAnnotationAllocationSet((CDirtyRegion *)((char *)this + 2856));
  v4 = (_QWORD *)((char *)this + 1856);
  *((_QWORD *)this + 554) = 0LL;
  *((_QWORD *)this + 555) = 0LL;
  *((_DWORD *)this + 1112) = 0;
  *(_QWORD *)((char *)this + 4452) = 1065353216LL;
  *((_WORD *)this + 2230) = 0;
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
