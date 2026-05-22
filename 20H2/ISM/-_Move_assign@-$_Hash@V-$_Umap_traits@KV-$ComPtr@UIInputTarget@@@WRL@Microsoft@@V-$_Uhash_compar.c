/*
 * XREFs of ?_Move_assign@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x18014D8F8
 * Callers:
 *     ??$_Move_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00@Z @ 0x18014A318 (--$_Move_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@@std@@YAPEAUInputSample@Con.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AC9B4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Move_assign(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx

  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    a1,
    *(_QWORD ***)(a1 + 8));
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = *(void **)(a1 + 24);
  v5 = (unsigned __int64)(*(_QWORD *)(a1 + 32) - (_QWORD)v4 + 7LL) >> 3;
  if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 32) )
    v5 = 0LL;
  if ( v5 )
    memset64(v4, *(_QWORD *)(a1 + 8), v5);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v6;
  v8 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = v8;
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v9;
  v11 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v10;
  v12 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v11;
  v13 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v12;
  v14 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v13;
  v15 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v14;
  v16 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v15;
  result = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v16;
  v18 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a2 + 56) = v18;
  return result;
}
