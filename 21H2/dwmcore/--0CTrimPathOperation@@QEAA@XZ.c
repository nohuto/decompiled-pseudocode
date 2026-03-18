/*
 * XREFs of ??0CTrimPathOperation@@QEAA@XZ @ 0x1801F8B7C
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801F8BF0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801138DE (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x1801912C4 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 */

CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Path::Segment::Segment((char *)this + 48, 0);
  Path::Segment::Segment((char *)this + 64, 2);
  Path::Segment::Segment((char *)this + 80, 5);
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((__int64)this + 112, 0.25);
  `vector constructor iterator'((char *)this + 204, 8LL, 16LL, (void (__fastcall *)(char *))CMilPoint2F::CMilPoint2F);
  return this;
}
