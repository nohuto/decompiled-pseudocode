/*
 * XREFs of ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800A6D58
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A4EC4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x48uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::TargetedContentLayoutHelpers::Item>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
    *((_OWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
  }
  a1[1] = v2;
  *a1 = v2 + 4;
  return a1;
}
