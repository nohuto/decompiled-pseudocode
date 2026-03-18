/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18005A984
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x1800580E4 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18005A0D8 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18005BBB4 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18005D634 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18005D758 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C4BB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // r8
  bool v5; // bl
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  void *v9[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  unsigned __int64 v11; // [rsp+60h] [rbp+10h] BYREF
  void *v12; // [rsp+68h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v10 = 0LL;
  v8 = 0;
  v7 = v1;
  *(_OWORD *)v9 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(v9, &v7);
  CFragmentIterator::FindFirst((CFragmentIterator *)v9);
  while ( 1 )
  {
    v3 = v9[1];
    v4 = v9[0];
    if ( !(((char *)v9[1] - (char *)v9[0]) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBackdropInput(
           *((CRenderingTechniqueFragment **)v9[1] - 2),
           *(const struct CBrushRenderingGraph **)this) )
    {
      v3 = v9[1];
      v4 = v9[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v9);
  }
  v5 = (v3 - v4) >> 4 != 0;
  if ( v4 )
  {
    v12 = v4;
    v11 = (v10 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v12, &v11);
      v4 = v12;
    }
    operator delete(v4);
  }
  return v5;
}
