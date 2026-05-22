/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x180141248
 * Callers:
 *     ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180142A70 (-DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV-$function@$$A6AXAEAV-$ComPtr@VDataProvider.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE130 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@_K1@Z @ 0x1801450C4 (-_Change_array@-$vector@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=5
unsigned __int64 __fastcall std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r12
  size_t v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rdi
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  void *v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp+8h]
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 6;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v31 = v7 + 1;
  v8 = (a1[2] - *a1) >> 6;
  v9 = v8 >> 1;
  if ( v8 <= 0x3FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 + 1 )
      v10 = v7 + 1;
  }
  else
  {
    v10 = v7 + 1;
  }
  v11 = v10 << 6;
  if ( v10 > 0x3FFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = v12;
  v29 = v12;
  v27 = v6 & 0xFFFFFFFFFFFFFFC0uLL;
  v14 = (__int64)v12 + (v6 & 0xFFFFFFFFFFFFFFC0uLL);
  v15 = v14 + 64;
  v28 = v14 + 64;
  try
  {
    std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
      v14,
      a3);
    v30 = v14;
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      v18 = (__int64)v13;
      while ( v17 != v16 )
      {
        std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
          v18,
          v17);
        v18 += 64LL;
        v17 += 64LL;
      }
    }
    else
    {
      v19 = v13;
      while ( v17 != v4 )
      {
        v19[7] = 0LL;
        v20 = *(_QWORD *)(v17 + 56);
        if ( v20 )
        {
          if ( v20 == v17 )
          {
            v19[7] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 8LL))(v20, v19);
            std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v17, v21);
          }
          else
          {
            v19[7] = v20;
            *(_QWORD *)(v17 + 56) = 0LL;
          }
        }
        v19 += 8;
        v17 += 64LL;
      }
      v30 = (__int64)v13;
      v22 = a1[1];
      while ( v4 != v22 )
      {
        *(_QWORD *)(v15 + 56) = 0LL;
        v23 = *(_QWORD *)(v4 + 56);
        if ( v23 )
        {
          if ( v23 == v4 )
          {
            *(_QWORD *)(v15 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 8LL))(v23, v15);
            std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v4, v24);
          }
          else
          {
            *(_QWORD *)(v15 + 56) = v23;
            *(_QWORD *)(v4 + 56) = 0LL;
          }
        }
        v15 += 64LL;
        v4 += 64LL;
      }
    }
    std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Change_array(a1, v13, v31, v10);
    result = v27 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Destroy(v25, v30, v28);
    std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)(v10 << 6));
    throw;
  }
  return result;
}
