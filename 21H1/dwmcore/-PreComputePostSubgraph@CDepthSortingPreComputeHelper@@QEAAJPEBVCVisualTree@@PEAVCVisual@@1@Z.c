/*
 * XREFs of ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019E550
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18007D7B0 (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A9060 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?pop_back@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAXXZ @ 0x18019E794 (-pop_back@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollection@@@s.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1801B14E4 (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801FE9E0 (-AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801FED28 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 */

__int64 __fastcall CDepthSortingPreComputeHelper::PreComputePostSubgraph(
        CDepthSortingPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        struct CVisual *a4)
{
  __int64 DepthSortedList; // rax
  int WorldTransform; // esi
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-18h]

  if ( *((_DWORD *)a3 + 25) == 3 )
  {
    DepthSortedList = CVisual::CreateDepthSortedList(a3);
    if ( !(unsigned __int8)CDepthSortedVisualCollection::SortVisuals(*((_QWORD *)this + 1) - 56LL, DepthSortedList) )
      CVisual::DeleteDepthSortedList(a3);
    std::vector<CDepthSortedVisualCollection>::pop_back(this);
  }
  else
  {
    CVisual::DeleteDepthSortedList(a3);
  }
  if ( !a4 || *((_DWORD *)a4 + 25) != 3 )
    return 0LL;
  v12 = 0;
  WorldTransform = CVisual::GetWorldTransform(a3, a2, 1, (__int64)v11, 0LL, 0LL);
  if ( WorldTransform >= 0 )
  {
    CDepthSortedVisualCollection::AddVisual(
      (CDepthSortedVisualCollection *)(*((_QWORD *)this + 1) - 56LL),
      a3,
      (struct CMILMatrix *)v11);
    return 0LL;
  }
  CVisual::DeleteDepthSortedList(a3);
  if ( *((_DWORD *)a3 + 25) == 3 )
    std::vector<CDepthSortedVisualCollection>::pop_back(this);
  return (unsigned int)WorldTransform;
}
