/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18003BA10
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18003C818 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x18014533C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x180145B38 (--$_Uninitialized_move@PEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$C.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v20; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 8 * v11;
  v20 = v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v15 = &v13[v6];
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      *v18 = 0LL;
      if ( v18 != v17 )
      {
        *v18 = *v17;
        *v17 = 0LL;
      }
      ++v18;
      ++v17;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
      v17,
      a2,
      v13);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
      a2,
      a1[1],
      v15 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = &v14[v8];
  a1[2] = &v14[v20];
  return v15;
}
