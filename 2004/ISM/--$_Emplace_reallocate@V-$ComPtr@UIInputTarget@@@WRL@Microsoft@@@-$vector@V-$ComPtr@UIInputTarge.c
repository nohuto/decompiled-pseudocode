/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800020E0
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017DA0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180067D98 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@0@@Z @ 0x1801373C0 (--$_Uninitialized_move@PEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPt.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 *v14; // r15
  __int64 *v15; // r12
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *i; // rdx
  __int64 *v19; // rbx
  __int64 *v20; // r14
  __int64 v21; // rcx
  const struct std::nothrow_t *v22; // rdx
  size_t v24; // rcx
  void *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+80h] [rbp+8h] BYREF
  void *v29; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v26 = v7 + 1;
  v9 = a1[2] - *a1;
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
  v30 = v11;
  v12 = 8 * v11;
  v27 = v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v12 < 0x1000 )
  {
    if ( v12 )
    {
      v14 = (__int64 *)operator new(v12);
      goto LABEL_9;
    }
    goto LABEL_34;
  }
  v24 = v13 + 39;
  if ( v13 + 39 < v13 )
    v24 = -1LL;
  v25 = operator new(v24);
  if ( v25 )
  {
    v14 = (__int64 *)(((unsigned __int64)v25 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v14 - 1) = (__int64)v25;
    goto LABEL_9;
  }
  _o__invalid_parameter_noinfo_noreturn();
  __debugbreak();
LABEL_34:
  v14 = 0LL;
LABEL_9:
  v28 = (unsigned __int64)v14;
  v15 = &v14[v6];
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v29 = &v14[v6];
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    for ( i = v14; v17 != v16; ++v17 )
    {
      *i = 0LL;
      if ( i != v17 )
      {
        *i = *v17;
        *v17 = 0LL;
      }
      ++i;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IInputTarget> *,Microsoft::WRL::ComPtr<IInputTarget> *,std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(
      v17,
      a2,
      v14);
    v29 = v14;
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IInputTarget> *,Microsoft::WRL::ComPtr<IInputTarget> *,std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(
      a2,
      a1[1],
      v15 + 1);
  }
  v19 = *a1;
  if ( *a1 )
  {
    v20 = a1[1];
    if ( v19 != v20 )
    {
      do
      {
        v21 = *v19;
        if ( *v19 )
        {
          *v19 = 0LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 16LL))(v21, i);
        }
        ++v19;
      }
      while ( v19 != v20 );
      v19 = *a1;
    }
    v22 = (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v19) & 0xFFFFFFFFFFFFFFF8uLL);
    v28 = (unsigned __int64)v22;
    v29 = v19;
    if ( (unsigned __int64)v22 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v29, &v28);
      v22 = (const struct std::nothrow_t *)v28;
      v19 = (__int64 *)v29;
    }
    operator delete(v19, v22);
  }
  *a1 = v14;
  a1[1] = &v14[v26];
  a1[2] = &v14[v27];
  return v15;
}
