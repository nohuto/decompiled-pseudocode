/*
 * XREFs of ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x180036D3C
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x180037C60 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x18009D2F0 (-Reset@CBatchOptimizer@@AEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18009F730 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::CBatchOptimizer(CBatchOptimizer *this, struct CDrawListBatchManager *a2)
{
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  `vector constructor iterator'(
    (char *)this + 80,
    0x208uLL,
    8uLL,
    (void *(*)(void *))SharedStateLayer::SharedStateLayer);
  CBatchOptimizer::Reset(this);
  return this;
}
