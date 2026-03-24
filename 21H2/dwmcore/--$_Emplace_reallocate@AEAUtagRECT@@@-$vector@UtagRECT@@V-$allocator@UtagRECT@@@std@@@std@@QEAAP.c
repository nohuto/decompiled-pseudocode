/*
 * XREFs of ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1800EE3B8
 * Callers:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EE504 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?push_back@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAXAEBUtagRECT@@@Z @ 0x1800F2848 (-push_back@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x18004F814 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800CA5A4 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800EB3A0 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     ?allocate@?$allocator@UtagRECT@@@std@@QEAAPEAUtagRECT@@_K@Z @ 0x180173F40 (-allocate@-$allocator@UtagRECT@@@std@@QEAAPEAUtagRECT@@_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(_QWORD *a1, _BYTE *a2, _OWORD *a3)
{
  _BYTE *v3; // r14
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rsi
  void *v13; // rcx
  unsigned __int64 v14; // rdi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  v11 = (char *)std::allocator<tagRECT>::allocate(v10, v9);
  v12 = (__int64)v11;
  v13 = v11;
  v14 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_OWORD *)&v11[v14] = *a3;
  v15 = (_BYTE *)a1[1];
  v16 = (_BYTE *)*a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v11, v16, (size_t)&a2[-*a1]);
    v17 = a1[1] - (_QWORD)a2;
    v16 = a2;
    v13 = (void *)(v12 + v14 + 16);
  }
  memmove_0(v13, v16, v17);
  std::vector<tagRECT>::_Change_array((__int64)a1, v12, v8, v9);
  return v14 + *a1;
}
