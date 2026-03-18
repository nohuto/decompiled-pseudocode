/*
 * XREFs of ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x1800AF694
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1800B1FA0 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x18007E3D0 (-Reset@CBatchOptimizer@@AEAAXXZ.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::CBatchOptimizer(CBatchOptimizer *this, struct CDrawListBatchManager *a2)
{
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  `vector constructor iterator'(
    (char *)this + 80,
    520LL,
    8LL,
    (void (__fastcall *)(char *))SharedStateLayer::SharedStateLayer);
  CBatchOptimizer::Reset(this);
  return this;
}
