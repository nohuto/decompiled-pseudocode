/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001FEF0
 * Callers:
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18001FCAC (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FD64 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  size_t size_of; // rax
  __int64 *v13; // rsi
  unsigned __int64 v14; // r14
  _QWORD *v15; // r13
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rbx
  __int64 *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (char *)a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v23 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = (__int64 *)((char *)v13 + v14);
  *(__int64 *)((char *)v13 + v14) = 0LL;
  if ( (__int64 *)((char *)v13 + v14) != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = a1[1];
  v17 = *a1;
  v18 = v13;
  if ( v4 == v16 )
  {
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
    if ( v17 != v4 )
    {
      do
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
      while ( v17 != v4 );
      v16 = a1[1];
    }
    if ( v4 != v16 )
    {
      v18 = (__int64 *)((char *)v13 + v14 - (_QWORD)v4 + 8);
      do
      {
        *(__int64 *)((char *)v18 + (_QWORD)v4) = 0LL;
        if ( (__int64 *)((char *)v18 + (_QWORD)v4) != v4 )
        {
          *(__int64 *)((char *)v18 + (_QWORD)v4) = *v4;
          *v4 = 0LL;
        }
        ++v4;
      }
      while ( v4 != v16 );
    }
  }
  v19 = *a1;
  if ( *a1 )
  {
    v21 = a1[1];
    if ( v19 != v21 )
    {
      do
      {
        v22 = *v19;
        if ( *v19 )
        {
          *v19 = 0LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 16LL))(v22, v18);
        }
        ++v19;
      }
      while ( v19 != v21 );
      v19 = *a1;
    }
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v19) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = v13;
  a1[1] = &v13[v23];
  a1[2] = &v13[v11];
  return v15;
}
