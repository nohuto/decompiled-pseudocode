/*
 * XREFs of ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1801AD654
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019A740 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?GetDepthSortedList@CVisual@@QEBAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18009FF68 (-GetDepthSortedList@CVisual@@QEBAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801AEC38 (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 */

_QWORD *__fastcall CVisual::CreateDepthSortedList(__int64 a1)
{
  _QWORD *DepthSortedList; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  DepthSortedList = (_QWORD *)CVisual::GetDepthSortedList(a1);
  v3 = DepthSortedList;
  if ( DepthSortedList )
  {
    DepthSortedList[1] = *DepthSortedList;
  }
  else
  {
    v4 = operator new(0x18uLL);
    v3 = v4;
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    CVisual::SetDepthSortedList(a1, v3);
  }
  return v3;
}
