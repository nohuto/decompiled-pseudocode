/*
 * XREFs of ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18014A2C8
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B700 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18014AB54 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V-$allocator@UInputSamp.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014AD94 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_18014AD94.c)
 *     ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014AF7C (--0-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@_ea_18014AF7C.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x18014DB5C (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  ContextualProcessorBuffer::InputSample *v13; // r14
  ContextualProcessorBuffer::InputSample *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h]
  ContextualProcessorBuffer::InputSample *v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  void *v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  ContextualProcessorBuffer::InputSample *v25; // [rsp+80h] [rbp+8h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v6 = (a2 - *a1) / 200;
  v7 = (a1[1] - *a1) / 200;
  if ( v7 == 0x147AE147AE147AELL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 200;
  v10 = v9 >> 1;
  if ( v9 <= 0x147AE147AE147AELL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 200 * v11;
  if ( v11 > 0x147AE147AE147AELL )
    v12 = -1LL;
  v13 = (ContextualProcessorBuffer::InputSample *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v26 = 200 * v6;
  v14 = (ContextualProcessorBuffer::InputSample *)((char *)v13 + 200 * v6);
  v19 = (_QWORD *)((char *)v14 + 200);
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v14 = v15;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
      (char *)v14 + 8,
      a3 + 1);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
      (char *)v14 + 72,
      a3 + 9);
    std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
      (char *)v14 + 136,
      a3 + 17);
    v25 = v14;
    v16 = a1[1];
    v17 = *a1;
    if ( a2 == v16 )
    {
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        v17,
        v16,
        v13,
        a1,
        v19,
        v13,
        v14);
    }
    else
    {
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        v17,
        a2,
        v13,
        a1,
        v19,
        v13,
        v14);
      v25 = v13;
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        a2,
        a1[1],
        (char *)v14 + 200,
        a1,
        v21,
        v23,
        v24);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(v25, v20);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(200 * v11));
    throw;
  }
  std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v13, v8, v11);
  return v26 + *a1;
}
