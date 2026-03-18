/*
 * XREFs of ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x180037794
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18003719C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18003A220 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18003A288 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18003A4C4 (-GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingG.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

const struct CBackdropBrush *__fastcall CRenderingTechnique::GetBackdropBrushNoRef(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const struct CBackdropBrush *BackdropBrushNoRef; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  v8 = *((_QWORD *)this + 1);
  BackdropBrushNoRef = 0LL;
  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v10,
    &v8,
    a3,
    a4);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v10);
  while ( 1 )
  {
    v6 = v10;
    if ( !((__int64)(*((_QWORD *)&v10 + 1) - v10) >> 4) )
      break;
    BackdropBrushNoRef = CRenderingTechniqueFragment::GetBackdropBrushNoRef(
                           *(CRenderingTechniqueFragment **)(*((_QWORD *)&v10 + 1) - 16LL),
                           *(const struct CBrushRenderingGraph **)this);
    if ( BackdropBrushNoRef )
    {
      v6 = v10;
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)&v10);
  }
  if ( v6 )
    std::_Deallocate<16,0>(v6, (v11 - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  return BackdropBrushNoRef;
}
