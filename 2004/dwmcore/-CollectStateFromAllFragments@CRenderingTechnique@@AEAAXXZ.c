/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800B89A4
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800B840C (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18004B49C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18004B5C0 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800B8BE0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B8CB0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C4B90 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  __int64 v1; // rax
  void *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  void *v5[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+40h] [rbp-10h]
  unsigned __int64 v7; // [rsp+60h] [rbp+10h] BYREF
  void *v8; // [rsp+68h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v6 = 0LL;
  DWORD2(v4) = 0;
  *(_QWORD *)&v4 = v1;
  *(_OWORD *)v5 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    (char **)v5,
    &v4);
  CFragmentIterator::FindFirst((CFragmentIterator *)v5);
  while ( 1 )
  {
    v3 = v5[0];
    if ( !(((char *)v5[1] - (char *)v5[0]) >> 4) )
      break;
    CRenderingTechnique::CollectStateFromFragment(this, *((struct CRenderingTechniqueFragment **)v5[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)v5);
  }
  if ( v5[0] )
  {
    v8 = v5[0];
    v7 = (v6 - (unsigned __int64)v5[0]) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v3 = v8;
    }
    operator delete(v3);
  }
}
