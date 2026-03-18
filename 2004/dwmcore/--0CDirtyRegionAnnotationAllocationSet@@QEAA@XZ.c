/*
 * XREFs of ??0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ @ 0x1800360E4
 * Callers:
 *     ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x180035FC4 (--0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CDirtyRegionAnnotationAllocationSet *__fastcall CDirtyRegionAnnotationAllocationSet::CDirtyRegionAnnotationAllocationSet(
        CDirtyRegionAnnotationAllocationSet *this)
{
  CDirtyRegionAnnotationAllocationSet *result; // rax

  `vector constructor iterator'(
    (char *)this + 32,
    0x30uLL,
    0x20uLL,
    (void *(*)(void *))CDirtyRegionAnnotation::CDirtyRegionAnnotation);
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = this;
  *((_QWORD *)this + 1) = (char *)this + 16;
  *(_QWORD *)this = (char *)this + 16;
  result = this;
  *((_DWORD *)this + 392) = 0;
  return result;
}
