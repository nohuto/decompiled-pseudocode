/*
 * XREFs of ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x18019E794
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019E550 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x180171448 (--_GCDepthSortedVisualCollection@@QEAAPEAXI@Z.c)
 */

CDepthSortedVisualCollection *__fastcall std::vector<CDepthSortedVisualCollection>::pop_back(__int64 a1)
{
  CDepthSortedVisualCollection *result; // rax

  result = CDepthSortedVisualCollection::`scalar deleting destructor'((CDepthSortedVisualCollection *)(*(_QWORD *)(a1 + 8) - 56LL));
  *(_QWORD *)(a1 + 8) -= 56LL;
  return result;
}
