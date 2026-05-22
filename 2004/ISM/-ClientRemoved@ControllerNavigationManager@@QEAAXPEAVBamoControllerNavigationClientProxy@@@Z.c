/*
 * XREFs of ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011C6CC
 * Callers:
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E360 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800FC724 (-erase@-$list@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V-$allocator@U-.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011CA6C (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 */

void __fastcall ControllerNavigationManager::ClientRemoved(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *i; // rbx
  _QWORD *v14; // rax
  __int64 appended; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL));
  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  v7 = (const char *)*(unsigned int *)(v4 + 32);
  LODWORD(v20) = *(_DWORD *)(v4 + 32);
  do
  {
    v8 = *((unsigned __int8 *)&v20 + v5++);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v5 < 4 );
  v9 = (_QWORD *)((char *)this + 136);
  v10 = v6 & *((_QWORD *)this + 22);
  v11 = *((_QWORD *)this + 19);
  v12 = 2 * v10;
  for ( i = *(_QWORD **)(v11 + 8 * v12); ; i = (_QWORD *)*i )
  {
    v14 = *(_QWORD *)(v11 + 8 * v12) == *v9 ? (_QWORD *)*v9 : **(_QWORD ***)(v11 + 8 * v12 + 8);
    if ( i == v14 )
      break;
    if ( *((_DWORD *)i + 4) == (_DWORD)v7 )
      goto LABEL_11;
  }
  i = (_QWORD *)*v9;
LABEL_11:
  if ( i == (_QWORD *)*v9 || (struct BamoControllerNavigationClientProxy *)i[3] != a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      349LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v7);
    JUMPOUT(0x18011C831LL);
  }
  if ( *((_DWORD *)this + 56) == (_DWORD)v7 )
    ControllerNavigationManager::DisableNavigation(this);
  appended = std::_Fnv1a_append_bytes(v12, (const unsigned __int8 *const)i + 16, 4uLL);
  v16 = *((_QWORD *)this + 19);
  v17 = 2 * (*((_QWORD *)this + 22) & appended);
  if ( *(_QWORD **)(v16 + 16 * (*((_QWORD *)this + 22) & appended) + 8) == i )
  {
    if ( *(_QWORD **)(v16 + 16 * (*((_QWORD *)this + 22) & appended)) == i )
    {
      *(_QWORD *)(v16 + 16 * (*((_QWORD *)this + 22) & appended)) = *v9;
      v16 = *((_QWORD *)this + 19);
      v18 = (_QWORD *)*v9;
    }
    else
    {
      v18 = (_QWORD *)i[1];
    }
    *(_QWORD *)(v16 + 8 * v17 + 8) = v18;
  }
  else if ( *(_QWORD **)(v16 + 16 * (*((_QWORD *)this + 22) & appended)) == i )
  {
    *(_QWORD *)(v16 + 16 * (*((_QWORD *)this + 22) & appended)) = *i;
  }
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>::erase(
    (__int64)this + 136,
    &v20,
    (_QWORD **)i);
}
