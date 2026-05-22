/*
 * XREFs of ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x18019BE20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x180024240 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursor(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        struct ICursor **a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 appended; // rax
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 *v13; // rdx
  __int64 v14; // r11
  __int64 *i; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // r10
  int v22; // r11d
  struct ICursor *v23; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = __PAIR64__(a3, a2);
  std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v25 + 4, 4uLL);
  appended = std::_Fnv1a_append_bytes(v8, (const unsigned __int8 *const)&v25, v9);
  v11 = *((_QWORD *)this + 17);
  v13 = (__int64 *)*((_QWORD *)this + 15);
  v14 = 2 * (*((_QWORD *)this + 20) & (appended ^ v12));
  for ( i = *(__int64 **)(v11 + 8 * v14); ; i = (__int64 *)*i )
  {
    v16 = *(__int64 **)(v11 + 8 * v14) == v13 ? *((_QWORD *)this + 15) : **(_QWORD **)(v11 + 8 * v14 + 8);
    if ( i == (__int64 *)v16 )
      break;
    if ( *((_DWORD *)i + 4) == a2 && *((_DWORD *)i + 5) == a3 )
      goto LABEL_11;
  }
  i = (__int64 *)*((_QWORD *)this + 15);
LABEL_11:
  if ( i == v13 )
  {
    v17 = 649LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v25 = i[3];
  v19 = *((_QWORD *)this + 12) & std::_Fnv1a_append_bytes(v16, (const unsigned __int8 *const)&v25, 4uLL);
  while ( 1 )
  {
    v20 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
            (__int64)this + 48,
            &v25,
            v19);
    if ( v21 == *v20 )
      break;
    if ( *(_DWORD *)(v21 + 16) == v22 )
      goto LABEL_19;
  }
  v21 = *((_QWORD *)this + 7);
LABEL_19:
  if ( v21 == *((_QWORD *)this + 7) )
  {
    v17 = 656LL;
    goto LABEL_13;
  }
  v23 = *(struct ICursor **)(v21 + 24);
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v23 + 8LL))(v23);
  result = 0LL;
  *a4 = v23;
  return result;
}
