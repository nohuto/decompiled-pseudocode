/*
 * XREFs of ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18003798C
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003719C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18003A220 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18003A288 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18003A41C (-HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

bool __fastcall CRenderingTechnique::HasBlurredWallpaperBackdropInput(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // bl
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  v4 = *((_QWORD *)this + 1);
  v13 = 0LL;
  v11 = 0;
  v10 = v4;
  v12 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v12,
    &v10,
    a3,
    a4);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v12);
  while ( 1 )
  {
    v6 = *((_QWORD *)&v12 + 1);
    v7 = v12;
    if ( !((__int64)(*((_QWORD *)&v12 + 1) - v12) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBlurredWallpaperBackdropInput(
           *(CRenderingTechniqueFragment **)(*((_QWORD *)&v12 + 1) - 16LL),
           *(const struct CBrushRenderingGraph **)this) )
    {
      v6 = *((_QWORD *)&v12 + 1);
      v7 = v12;
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)&v12);
  }
  v8 = (v6 - v7) >> 4 != 0;
  if ( v7 )
    std::_Deallocate<16,0>(v7, (v13 - v7) & 0xFFFFFFFFFFFFFFF0uLL);
  return v8;
}
