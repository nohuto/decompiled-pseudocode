/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18009B924
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18009B340 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1800449E0 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180044C4C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18009BAB4 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18009BDA4 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BE7C0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // r8
  bool v5; // bl
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  void *v8[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]
  unsigned __int64 v10; // [rsp+60h] [rbp+10h] BYREF
  void *v11; // [rsp+68h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 1);
  v9 = 0LL;
  DWORD2(v7) = 0;
  *(_QWORD *)&v7 = v1;
  *(_OWORD *)v8 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    (char **)v8,
    &v7);
  CFragmentIterator::FindFirst((CFragmentIterator *)v8);
  while ( 1 )
  {
    v3 = v8[1];
    v4 = v8[0];
    if ( !(((char *)v8[1] - (char *)v8[0]) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBackdropInput(
           *((CRenderingTechniqueFragment **)v8[1] - 2),
           *(const struct CBrushRenderingGraph **)this) )
    {
      v3 = v8[1];
      v4 = v8[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)v8);
  }
  v5 = (v3 - v4) >> 4 != 0;
  if ( v4 )
  {
    v11 = v4;
    v10 = (v9 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v11, &v10);
      v4 = v11;
    }
    operator delete(v4);
  }
  return v5;
}
