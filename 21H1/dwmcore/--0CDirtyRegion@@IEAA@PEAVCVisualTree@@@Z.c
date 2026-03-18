/*
 * XREFs of ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x18008E37C
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x18008E28C (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ @ 0x18008E49C (--0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18009110C (--0COcclusionContext@@QEAA@XZ.c)
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
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 1728,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 2400,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_DWORD *)this + 632) = 0;
  `vector constructor iterator'(
    (char *)this + 2564,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  `vector constructor iterator'(
    (char *)this + 2692,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
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
