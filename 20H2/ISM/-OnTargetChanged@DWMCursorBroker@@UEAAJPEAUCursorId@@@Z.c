/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18019BBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x1800242D0 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x18002610C (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18019BD3C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v8; // rbx
  int CursorDefaultState; // edi
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  _BYTE v13[16]; // [rsp+20h] [rbp-58h] BYREF
  char v14[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 12) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)a2, 4uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
           (__int64)this + 48,
           &v18,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(_DWORD *)(v6 + 16) == *(_DWORD *)a2 )
      goto LABEL_6;
  }
  v6 = *((_QWORD *)this + 7);
LABEL_6:
  if ( v6 == *((_QWORD *)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v8 = *(_QWORD *)(v6 + 24);
  CursorDefaultState = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
  if ( CursorDefaultState < 0 )
  {
    v10 = 183LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)CursorDefaultState);
    return (unsigned int)CursorDefaultState;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
  CursorDefaultState = GetCursorDefaultState(v11, (__int64)v13);
  if ( CursorDefaultState < 0 )
  {
    v10 = 185LL;
    goto LABEL_10;
  }
  v15 = *(_QWORD *)a2;
  v14[0] = 6;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
  CursorDefaultState = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v14);
  if ( CursorDefaultState < 0 )
  {
    v10 = 191LL;
    goto LABEL_10;
  }
  v12 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 40LL))(v8, &v18);
  result = 0LL;
  *(_QWORD *)a2 = v12;
  return result;
}
