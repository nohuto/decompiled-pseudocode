/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x180029838
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180028DD0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAUCursorDeviceInfo@@_K1@Z @ 0x180029924 (-_Change_array@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAU.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180029994 (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        char **a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  char *v6; // rbx
  signed __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  size_t v12; // rcx
  unsigned __int64 v13; // r9
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rdi
  char *v16; // rcx
  char *v17; // rax
  _OWORD *v18; // r8
  signed __int64 v20; // rax

  v6 = a2;
  v8 = a2 - *a1;
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v10 = v9 + 1;
  v11 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v9 + 1);
  v12 = 16 * v11;
  if ( v11 > v13 )
    v12 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_DWORD *)((char *)v14 + v15) = *a3;
  *(_QWORD *)((char *)v14 + v15 + 8) = *a4;
  v16 = a1[1];
  v17 = *a1;
  v18 = v14;
  if ( v6 == v16 )
  {
    while ( v17 != v16 )
    {
      *v18++ = *(_OWORD *)v17;
      v17 += 16;
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      do
      {
        *v18++ = *(_OWORD *)v17;
        v17 += 16;
      }
      while ( v17 != v6 );
      v16 = a1[1];
    }
    if ( v6 != v16 )
    {
      v20 = (char *)v14 + v15 + 16 - v6;
      do
      {
        *(_OWORD *)&v6[v20] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v16 );
    }
  }
  std::vector<CursorDeviceInfo>::_Change_array(a1, v14, v10, v11);
  return (unsigned __int64)&(*a1)[v15];
}
