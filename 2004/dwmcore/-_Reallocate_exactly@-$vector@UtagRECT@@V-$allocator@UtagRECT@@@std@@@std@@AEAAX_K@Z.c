/*
 * XREFs of ?_Reallocate_exactly@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAX_K@Z @ 0x1800E8930
 * Callers:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E85D4 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ?allocate@?$allocator@UtagRECT@@@std@@QEAAPEAUtagRECT@@_K@Z @ 0x180175790 (-allocate@-$allocator@UtagRECT@@@std@@QEAAPEAUtagRECT@@_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::_Reallocate_exactly(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v5 = (void *)std::allocator<tagRECT>::allocate(a1, a2);
  memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  std::vector<tagRECT>::_Change_array(a1, (__int64)v5, v4, a2);
}
