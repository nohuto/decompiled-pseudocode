/*
 * XREFs of ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180164958
 * Callers:
 *     ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x18017ECF0 (-Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoData.c)
 *     ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x1801810C0 (-OnDisconnected@DataProviderProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BF834 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180164F48 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 */

__int64 __fastcall DataProviderManager::RemoveDataProvider(DataProviderManager *this, struct DataProviderProxy *a2)
{
  char *v2; // rdi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 appended; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *i; // r11
  __int64 *v14; // rax
  __int64 v16; // rax
  _QWORD *v17; // r11
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)a2 + 8;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2);
  LODWORD(v20) = v4;
  HIDWORD(v20) = *(_DWORD *)(v5 + 4);
  v6 = v20;
  appended = std::_Fnv1a_append_bytes(HIDWORD(v20), (const unsigned __int8 *const)&v20, 8uLL);
  v10 = *((_QWORD *)this + 8);
  v11 = (__int64 *)*((_QWORD *)this + 6);
  v12 = 2 * (*((_QWORD *)this + 11) & appended);
  for ( i = *(__int64 **)(v10 + 16 * (*((_QWORD *)this + 11) & appended)); ; i = (__int64 *)*i )
  {
    v14 = *(__int64 **)(v10 + 8 * v12) == v11 ? (__int64 *)*((_QWORD *)this + 6) : **(__int64 ***)(v10 + 8 * v12 + 8);
    if ( i == v14 )
      break;
    if ( i[2] == v6 )
      goto LABEL_9;
  }
  i = (__int64 *)*((_QWORD *)this + 6);
LABEL_9:
  if ( i == v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    v16 = std::_Fnv1a_append_bytes(v8, (const unsigned __int8 *const)i + 16, v9);
    v18 = 2 * (*((_QWORD *)this + 11) & v16);
    if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 11) & v16) + 8) == v17 )
    {
      if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 11) & v16)) == v17 )
      {
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 11) & v16)) = v11;
        *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v18 + 8) = *((_QWORD *)this + 6);
      }
      else
      {
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 11) & v16) + 8) = v17[1];
      }
    }
    else if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 11) & v16)) == v17 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 11) & v16)) = *v17;
    }
    std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(
      (char *)this + 48,
      &v20,
      v17);
    return 0LL;
  }
}
