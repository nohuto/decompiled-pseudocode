/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18000D960
 * Callers:
 *     ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x18000D8C0 (-GetCursors@DWMCursorBroker@@UEAA-AV-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AE84 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1800D5918 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPtr@UIC.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  _QWORD *v15; // r8
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  size_t v19; // rcx
  void *v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]

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
  v21 = v11;
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 >= 0x1000 )
  {
    v19 = v12 + 39;
    if ( v12 + 39 < v12 )
      v19 = -1LL;
    v20 = operator new(v19);
    if ( v20 )
    {
      v13 = (_QWORD *)(((unsigned __int64)v20 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v13 - 1) = v20;
      goto LABEL_10;
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  else if ( v12 )
  {
    v13 = operator new(v12);
    goto LABEL_10;
  }
  v13 = 0LL;
LABEL_10:
  v14 = &v13[v6];
  *v14 = 0LL;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v15 = (_QWORD *)a1[1];
  v16 = (_QWORD *)*a1;
  if ( a2 == v15 )
  {
    v17 = v13;
    while ( v16 != v15 )
    {
      *v17 = 0LL;
      if ( v17 != v16 )
      {
        *v17 = *v16;
        *v16 = 0LL;
      }
      ++v17;
      ++v16;
    }
  }
  else
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      v16,
      a2,
      v13);
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      a2,
      a1[1],
      v14 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      *a1,
      a1[1],
      v15);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = &v13[v8];
  a1[2] = &v13[v21];
  return v14;
}
