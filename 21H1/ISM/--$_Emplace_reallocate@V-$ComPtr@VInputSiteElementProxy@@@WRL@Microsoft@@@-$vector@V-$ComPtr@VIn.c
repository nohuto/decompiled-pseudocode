/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180012824
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180012530 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800127F0 (--$_Uninitialized_move@PEAV-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@PEAV123@V-$allocator.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // r15
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rcx
  __int64 *v22; // r10
  __int64 *v23; // r9

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v7;
  }
  else
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  size_of = std::_Get_size_of_n<8>(v10);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v14 = &v12[v5];
  *v14 = 0LL;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v15 = a1[1];
  v16 = v12;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<InputSiteElementProxy> *,Microsoft::WRL::ComPtr<InputSiteElementProxy> *,std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(
      v17,
      a2,
      v12);
    v16 = v22;
    v15 = a1[1];
    v17 = v23;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<InputSiteElementProxy> *,Microsoft::WRL::ComPtr<InputSiteElementProxy> *,std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(
    v17,
    v15,
    v16);
  v18 = *a1;
  if ( *a1 )
  {
    v19 = a1[1];
    if ( v18 != v19 )
    {
      do
      {
        v20 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        }
        ++v18;
      }
      while ( v18 != v19 );
      v18 = *a1;
    }
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v18) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = v13;
  a1[1] = &v13[v7];
  a1[2] = &v13[v10];
  return v14;
}
