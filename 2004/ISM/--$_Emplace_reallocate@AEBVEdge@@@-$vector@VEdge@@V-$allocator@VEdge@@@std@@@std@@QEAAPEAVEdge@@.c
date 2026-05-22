/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x18017829C
 * Callers:
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x180178540 (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x18003FBBC (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1800494B4 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??0?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180049660 (--0-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEdgyCo.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006DBD8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801784FC (--$_Uninitialized_move@PEAVEdge@@PEAV1@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1801799FC (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t size_of; // rcx
  __int64 *v12; // rax
  __int64 *v13; // r15
  unsigned __int64 v14; // r14
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 *v24; // [rsp+28h] [rbp-50h]
  void *v25; // [rsp+28h] [rbp-50h]
  __int64 *v26; // [rsp+80h] [rbp+8h]
  __int64 *v28; // [rsp+98h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 7;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 7;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  size_of = std::_Get_size_of_n<128>(v10);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v24 = v12;
  v14 = v5 & 0xFFFFFFFFFFFFFF80uLL;
  v15 = (char *)v12 + v14;
  v28 = (__int64 *)((char *)v12 + v14 + 128);
  *(__int64 *)((char *)v12 + v14) = *(_QWORD *)a3;
  try
  {
    std::wstring::wstring((__int64)v12 + v14 + 8, a3 + 8);
    v16 = *(_QWORD *)(a3 + 40);
    *((_QWORD *)v15 + 5) = v16;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 24));
    *((_DWORD *)v15 + 12) = *(_DWORD *)(a3 + 48);
    *(_OWORD *)(v15 + 52) = *(_OWORD *)(a3 + 52);
    *(_OWORD *)(v15 + 68) = *(_OWORD *)(a3 + 68);
    *(_QWORD *)(v15 + 84) = *(_QWORD *)(a3 + 84);
    *((_DWORD *)v15 + 23) = *(_DWORD *)(a3 + 92);
    *((_DWORD *)v15 + 24) = *(_DWORD *)(a3 + 96);
    std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>(
      (__int64 **)v15 + 13,
      (__int64 **)(a3 + 104));
    v26 = (__int64 *)v15;
    v17 = a1[1];
    v18 = v13;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<Edge *,Edge *,std::allocator<Edge>>(v19, a2, v13);
      v26 = v13;
      v18 = v28;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<Edge *,Edge *,std::allocator<Edge>>(v19, v17, v18);
    std::vector<Edge>::_Change_array(a1, v13, v7, v10, v10, v24, v15);
    result = v14 + *a1;
  }
  catch ( ... )
  {
    std::vector<Edge>::_Destroy(v20, v26, v28);
    std::allocator<Edge>::deallocate(v22, v25, v23);
    throw;
  }
  return result;
}
