/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E36AC
 * Callers:
 *     _lambda_3ea8e7556f72cf8b3f162dbd37187d30_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800E2F90 (_lambda_3ea8e7556f72cf8b3f162dbd37187d30_--operator()_Microsoft--WRL--WeakRef_const__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@0@@Z @ 0x1800CE1EC (--$_Uninitialized_move@PEAV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@PEAV123@V-$alloca.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800D0CDC (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r12
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 result; // rax
  __int64 *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]
  __int64 *v23; // [rsp+88h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  else
  {
    v10 = v6 + 1;
  }
  v11 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  try
  {
    v13 = v12;
    v20 = v12;
    v14 = &v12[v5];
    v23 = v14 + 1;
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v21 = v14;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,std::allocator<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
        v18,
        a2,
        v13);
      v21 = v13;
      v17 = v14 + 1;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *,std::allocator<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
      v18,
      v16,
      v17);
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Change_array((__int64)a1, (__int64)v13, v7, v10);
    result = (__int64)&(*a1)[v5];
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v21, v23);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
