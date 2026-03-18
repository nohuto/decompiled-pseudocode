/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180035778
 * Callers:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800356EC (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18003740C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x1800357CC (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  CRenderingTechnique::~CRenderingTechnique(this);
  operator delete(this, 0x110uLL);
  return this;
}
