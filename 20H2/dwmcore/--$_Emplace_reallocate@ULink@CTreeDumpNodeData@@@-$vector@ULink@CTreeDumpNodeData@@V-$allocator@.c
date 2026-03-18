/*
 * XREFs of ??$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@QEAAPEAULink@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180196354
 * Callers:
 *     ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801ABE90 (--$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ??$AddLinkInternal@VCBrush@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCBrush@@_N@Z @ 0x1801B6998 (--$AddLinkInternal@VCBrush@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D@s.c)
 *     ??$AddLinkInternal@VIGDIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVIGDIBitmapRealization@@_N@Z @ 0x1801C0D84 (--$AddLinkInternal@VIGDIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$.c)
 *     ??$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCResource@@_N@Z @ 0x1801ED544 (--$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@.c)
 *     ??$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCGdiSpriteBitmap@@_N@Z @ 0x1801F2694 (--$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@YAPEAULink@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@ULink@CTreeDumpNodeData@@@0@@Z @ 0x180196D7C (--$_Uninitialized_move@PEAULink@CTreeDumpNodeData@@PEAU12@V-$allocator@ULink@CTreeDumpNodeData@@.c)
 *     ?_Change_array@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAULink@CTreeDumpNodeData@@_K1@Z @ 0x1801977C4 (-_Change_array@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@ULink@CTreeDumpNodeData@@@std@@@st.c)
 */

__int64 __fastcall std::vector<CTreeDumpNodeData::Link>::_Emplace_reallocate<CTreeDumpNodeData::Link>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx

  v6 = (a2 - *a1) / 40;
  v7 = (a1[1] - *a1) / 40;
  if ( v7 == 0x666666666666666LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 40;
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 40 * v11;
  if ( v11 > 0x666666666666666LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 5 * v6;
  *(_QWORD *)(v13 + 8 * v14 + 16) = 0LL;
  *(_QWORD *)(v13 + 8 * v14 + 24) = 0LL;
  *(_OWORD *)(v13 + 8 * v14) = *(_OWORD *)a3;
  *(_OWORD *)(v13 + 8 * v14 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_QWORD *)(v13 + 8 * v14 + 32) = *(_QWORD *)(a3 + 32);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CTreeDumpNodeData::Link *,CTreeDumpNodeData::Link *,std::allocator<CTreeDumpNodeData::Link>>(
      v16,
      a2);
    v15 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<CTreeDumpNodeData::Link *,CTreeDumpNodeData::Link *,std::allocator<CTreeDumpNodeData::Link>>(
    v16,
    v15);
  std::vector<CTreeDumpNodeData::Link>::_Change_array(a1, v13, v8, v11);
  return *a1 + 8 * v14;
}
