/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18005A8D8
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x180058084 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18005A178 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18005BBB4 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18005D634 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18005D758 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C4BB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  __int64 v1; // rax
  void *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  void *v6[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+40h] [rbp-10h]
  unsigned __int64 v8; // [rsp+60h] [rbp+10h] BYREF
  void *v9; // [rsp+68h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v7 = 0LL;
  v5 = 0;
  v4 = v1;
  *(_OWORD *)v6 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(v6, &v4);
  CFragmentIterator::FindFirst((CFragmentIterator *)v6);
  while ( 1 )
  {
    v3 = v6[0];
    if ( !(((char *)v6[1] - (char *)v6[0]) >> 4) )
      break;
    CRenderingTechnique::CollectStateFromFragment(this, *((struct CRenderingTechniqueFragment **)v6[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)v6);
  }
  if ( v6[0] )
  {
    v9 = v6[0];
    v8 = (v7 - (unsigned __int64)v6[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v8 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v3 = v9;
    }
    operator delete(v3);
  }
}
