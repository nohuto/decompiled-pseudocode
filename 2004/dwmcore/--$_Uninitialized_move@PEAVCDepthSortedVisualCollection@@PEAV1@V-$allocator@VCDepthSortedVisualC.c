/*
 * XREFs of ??$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@PEAV1@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAPEAVCDepthSortedVisualCollection@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x18019B858
 * Callers:
 *     ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x18019B688 (--$_Emplace_reallocate@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@0AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x18016AB10 (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 */

CDepthSortedVisualCollection *__fastcall std::_Uninitialized_move<CDepthSortedVisualCollection *,CDepthSortedVisualCollection *,std::allocator<CDepthSortedVisualCollection>>(
        _QWORD *a1,
        _QWORD *a2,
        CDepthSortedVisualCollection *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 6;
    v5 = (char *)(a3 - (CDepthSortedVisualCollection *)a1);
    do
    {
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 32) = 0LL;
      *(_QWORD *)a3 = *(v4 - 6);
      a3 = (CDepthSortedVisualCollection *)((char *)a3 + 56);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = *(v4 - 5);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 32) = *(v4 - 4);
      *(v4 - 6) = 0LL;
      *(v4 - 5) = 0LL;
      *(v4 - 4) = 0LL;
      *(_DWORD *)((char *)v4 + (_QWORD)v5 - 24) = *((_DWORD *)v4 - 6);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 7;
    }
    while ( v4 - 6 != a2 );
  }
  std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(a3, a3);
  return a3;
}
