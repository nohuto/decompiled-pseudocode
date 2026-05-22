/*
 * XREFs of ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800C4894
 * Callers:
 *     ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C5F30 (-EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV-$vector@VHString@Wrappers@WRL@Micro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAPEAVHString@Wrappers@WRL@Microsoft@@QEAV1234@0PEAV1234@AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C55E0 (--$_Uninitialized_move@PEAVHString@Wrappers@WRL@Microsoft@@PEAV1234@V-$allocator@VHString@Wrappe.c)
 *     ?_Change_array@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXQEAVHString@Wrappers@WRL@Microsoft@@_K1@Z @ 0x1800C70E4 (-_Change_array@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Micr.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Emplace_reallocate<Microsoft::WRL::Wrappers::HString>(
        __int64 *a1,
        __int64 a2,
        HSTRING *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t size_of; // rax
  HSTRING *v12; // rsi
  HSTRING *v13; // rax
  HSTRING *v14; // r13
  __int64 v15; // rdx
  HSTRING *v16; // r8
  __int64 v17; // rcx
  __int64 result; // rax
  void *v19; // [rsp+20h] [rbp-48h]
  HSTRING *v20; // [rsp+70h] [rbp+8h]
  HSTRING *v22; // [rsp+88h] [rbp+20h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  size_of = std::_Get_size_of_n<8>(v10);
  v12 = (HSTRING *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v5];
  v14 = v13 + 1;
  v22 = v13 + 1;
  try
  {
    *v13 = *a3;
    *a3 = 0LL;
    v20 = &v12[v5];
    v15 = a1[1];
    v16 = v12;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,std::allocator<Microsoft::WRL::Wrappers::HString>>(
        v17,
        a2,
        v12);
      v20 = v12;
      v16 = v14;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,std::allocator<Microsoft::WRL::Wrappers::HString>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::Wrappers::HString>::_Change_array(a1, v12, v7, v10, v12);
    result = *a1 + 8 * v5;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(v20, v22);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
