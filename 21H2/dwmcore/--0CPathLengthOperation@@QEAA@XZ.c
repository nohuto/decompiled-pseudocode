/*
 * XREFs of ??0CPathLengthOperation@@QEAA@XZ @ 0x18029FEE0
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x1801912C4 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 */

CPathLengthOperation *__fastcall CPathLengthOperation::CPathLengthOperation(CPathLengthOperation *this)
{
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((__int64)this, 0.25);
  `vector constructor iterator'((char *)this + 92, 8LL, 16LL, (void (__fastcall *)(char *))CMilPoint2F::CMilPoint2F);
  return this;
}
