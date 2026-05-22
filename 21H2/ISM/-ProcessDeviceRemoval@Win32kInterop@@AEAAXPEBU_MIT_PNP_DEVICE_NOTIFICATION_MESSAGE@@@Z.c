/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800B1240
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180029D00 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180029D00.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x180024020 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CBKUtagPOINTF@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@@Z @ 0x1800884FC (-erase@-$list@U-$pair@$$CBKUtagPOINTF@@@std@@V-$allocator@U-$pair@$$CBKUtagPOINTF@@@std@@@2@@std.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800B0B9C (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B1418 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@@Z @ 0x1800B3FEC (-erase@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  unsigned int v2; // esi
  __int64 v4; // rcx
  __int64 appended; // rbp
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 *i; // r8
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r11
  __int64 j; // rbx
  _QWORD *v13; // rsi
  void *v14; // rbp
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v22; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a2 + 1);
  LODWORD(v22) = v2;
  if ( Win32kInterop::IsDeviceAttached(this, v2, 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceRemoval(v2);
    appended = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&v22, 4uLL);
    v6 = *((_QWORD *)this + 19);
    v7 = (__int64 *)*((_QWORD *)this + 17);
    for ( i = *(__int64 **)(v6 + 16 * (appended & *((_QWORD *)this + 22))); ; i = (__int64 *)*i )
    {
      v9 = *(__int64 **)(v6 + 16 * (appended & *((_QWORD *)this + 22))) == v7
         ? (__int64 *)*((_QWORD *)this + 17)
         : **(__int64 ***)(v6 + 16 * (appended & *((_QWORD *)this + 22)) + 8);
      if ( i == v9 )
        break;
      if ( *((_DWORD *)i + 4) == v2 )
        goto LABEL_10;
    }
    i = (__int64 *)*((_QWORD *)this + 17);
LABEL_10:
    if ( i != v7 )
    {
      v10 = i[3];
      std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::erase(
        (char *)this + 128,
        &v22);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = appended & *((_QWORD *)this + 14);
    for ( j = *(_QWORD *)(*((_QWORD *)this + 11) + 16 * v11);
          j != *std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
                  (__int64)this + 64,
                  &v22,
                  v11);
          j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 16) == v2 )
        goto LABEL_17;
    }
    j = *((_QWORD *)this + 9);
LABEL_17:
    v13 = (_QWORD *)((char *)this + 72);
    if ( j == *((_QWORD *)this + 9) )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        550LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)0x80004005LL);
      __debugbreak();
    }
    v14 = *(void **)(j + 24);
    v15 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7), v14);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        554LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v17 = std::_Fnv1a_append_bytes(v16, (const unsigned __int8 *const)(j + 16), 4uLL);
    v18 = *((_QWORD *)this + 11);
    v19 = 2 * (*((_QWORD *)this + 14) & v17);
    if ( *(_QWORD *)(v18 + 16 * (*((_QWORD *)this + 14) & v17) + 8) == j )
    {
      if ( *(_QWORD *)(v18 + 16 * (*((_QWORD *)this + 14) & v17)) == j )
      {
        *(_QWORD *)(v18 + 16 * (*((_QWORD *)this + 14) & v17)) = *v13;
        v18 = *((_QWORD *)this + 11);
        v20 = *v13;
      }
      else
      {
        v20 = *(_QWORD *)(j + 8);
      }
      *(_QWORD *)(v18 + 8 * v19 + 8) = v20;
    }
    else if ( *(_QWORD *)(v18 + 16 * (*((_QWORD *)this + 14) & v17)) == j )
    {
      *(_QWORD *)(v18 + 16 * (*((_QWORD *)this + 14) & v17)) = *(_QWORD *)j;
    }
    std::list<std::pair<unsigned long const,tagPOINTF>>::erase((__int64)this + 72, &v22, (__int64 *)j);
    operator delete(v14, (const struct std::nothrow_t *)0x60C);
  }
}
