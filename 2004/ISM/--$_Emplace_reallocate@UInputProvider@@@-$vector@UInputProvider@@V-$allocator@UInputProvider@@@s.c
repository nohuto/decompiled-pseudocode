/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180028670
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800272C4 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800287C4 (--$_Uninitialized_move@PEAUInputProvider@@PEAU1@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUI.c)
 *     ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x18002882C (-_Change_array@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputP.c)
 */

__int64 __fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(__int64 *a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  size_t size_of; // rax
  _QWORD *v12; // rdi
  __int64 v13; // r15
  _OWORD *v14; // rcx
  _QWORD *v15; // r13
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx

  v5 = (a2 - *a1) / 24;
  v6 = (a1[1] - *a1) / 24;
  if ( v6 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 24;
  v9 = v8 >> 1;
  if ( v8 > 0xAAAAAAAAAAAAAAALL - (v8 >> 1) )
  {
    v10 = v7;
  }
  else
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  size_of = std::_Get_size_of_n<24>(v10);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = 3 * v5;
  v14 = &v12[v13];
  v15 = (_QWORD *)v14 + 3;
  *v14 = *a3;
  v16 = a3 + 1;
  *((_QWORD *)v14 + 2) = 0LL;
  if ( v14 + 1 != a3 + 1 )
  {
    *((_QWORD *)v14 + 2) = *v16;
    *v16 = 0LL;
  }
  v17 = a1[1];
  v18 = v12;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<InputProvider *,InputProvider *,std::allocator<InputProvider>>(v19, a2, v12);
    v18 = v15;
    v17 = a1[1];
    v19 = a2;
  }
  std::_Uninitialized_move<InputProvider *,InputProvider *,std::allocator<InputProvider>>(v19, v17, v18);
  std::vector<InputProvider>::_Change_array(a1, v12, v7, v10, v12);
  return *a1 + 8 * v13;
}
