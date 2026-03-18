/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@0AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x180168D34
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800513C4 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@PEAV1@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAPEAVCDepthSortedVisualCollection@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x180199BD8 (--$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@PEAV1@V-$allocator@VCDepthSortedVisualC.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x180199ED0 (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 * Callees:
 *     ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x18016CAD8 (--_GCDepthSortedVisualCollection@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(
        CDepthSortedVisualCollection *this,
        CDepthSortedVisualCollection *a2)
{
  CDepthSortedVisualCollection *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CDepthSortedVisualCollection::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CDepthSortedVisualCollection *)((char *)v3 + 56);
    }
    while ( v3 != a2 );
  }
  return result;
}
