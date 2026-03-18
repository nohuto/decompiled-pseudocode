/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801B5E70
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x18005ED90 (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18005F02C (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
        char *a1,
        char *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rbp
  __int64 v6; // r14
  __int128 *v7; // rdi
  __int128 *v8; // rbx
  char *v9; // rax
  __int128 v10; // xmm0

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a3 + 4;
    v6 = a1 - (char *)a3;
    do
    {
      *v3 = *(_QWORD *)((char *)v5 + v6 - 32);
      *(v5 - 3) = v5;
      *(v5 - 1) = v5 + 4;
      *(v5 - 2) = v5;
      v7 = *(__int128 **)((char *)v5 + v6 - 16);
      v8 = *(__int128 **)((char *)v5 + v6 - 24);
      v9 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
             (detail::liberal_expansion_policy *)(v5 - 3),
             0LL,
             v7 - v8);
      while ( v8 != v7 )
      {
        v10 = *v8++;
        *(_OWORD *)v9 = v10;
        v9 += 16;
      }
      v5 += 8;
      v3 += 8;
    }
    while ( (char *)v5 + v6 - 32 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v3, v3);
  return v3;
}
