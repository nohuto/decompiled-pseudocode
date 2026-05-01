/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801550C4
 * Callers:
 *     ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x180156DA4 (-AppendChainLinkInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJ.c)
 *     _lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::operator() @ 0x1802C773C (_lambda_e6f1dea95eb706d4d1f25363c8f9b29f_--operator().c)
 *     ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x1802C95D0 (-RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1801215A4 (--$_Uninitialized_move@PEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$C.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x180130670 (-_Change_array@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
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
  size_t v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r12
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 result; // rax
  __int64 *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

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
  v13 = v12;
  v19 = v12;
  v14 = &v12[v5];
  try
  {
    *v14 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    v20 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array((__int64)a1, (__int64)v13, v7, v10);
    result = (__int64)&(*a1)[v5];
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(v20, v14 + 1);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
