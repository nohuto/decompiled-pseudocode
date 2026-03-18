/*
 * XREFs of ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x18019BBE4
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019B9A0 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x18016E8B8 (--_GCDepthSortedVisualCollection@@QEAAPEAXI@Z.c)
 */

CDepthSortedVisualCollection *__fastcall std::vector<CDepthSortedVisualCollection>::pop_back(__int64 a1)
{
  CDepthSortedVisualCollection *result; // rax

  result = CDepthSortedVisualCollection::`scalar deleting destructor'((CDepthSortedVisualCollection *)(*(_QWORD *)(a1 + 8) - 56LL));
  *(_QWORD *)(a1 + 8) -= 56LL;
  return result;
}
