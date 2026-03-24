/*
 * XREFs of ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800CD174
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x1800A0EAC (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x18004DF18 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x18004F26C (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800CD29C (--0-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ @ 0x1800D25C0 (-_Tidy@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017957C (-clear@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 */

void __fastcall CWeakResourceReference::OnResourceDestroyed(CWeakResourceReference *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *i; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  void (__fastcall **v7)(CWeakResourceReference *); // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbp
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = *((_QWORD *)this + 2);
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
    (unsigned __int64)this,
    &v10,
    (const unsigned __int8 *)&v12);
  v2 = v10;
  v3 = v11;
  for ( i = v10; i != v11; i = (_QWORD *)*i )
    ;
  if ( v10 == *(_QWORD **)qword_18034B4B8 && v11 == (_QWORD *)qword_18034B4B8 )
  {
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::clear();
  }
  else
  {
    while ( v2 != v3 )
    {
      v5 = (__int64)v2;
      v2 = (_QWORD *)*v2;
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
        &CWeakResourceReference::s_weakReferenceMap,
        (__int64)&v12,
        v5);
    }
  }
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 2) + 32LL) &= ~8u;
  v7 = *(void (__fastcall ***)(CWeakResourceReference *))this;
  *((_QWORD *)this + 2) = 0LL;
  (*v7)(this);
  std::vector<CResource *>::vector<CResource *>(&v10, (char *)this + 24);
  v8 = v10;
  v9 = (unsigned __int64)((char *)v11 - (char *)v10 + 7) >> 3;
  if ( v10 > v11 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v8 + 72LL))(*v8, 0LL, 0LL);
      ++v6;
      ++v8;
    }
    while ( v6 != v9 );
  }
  std::vector<CResource *>::_Tidy(&v10);
  (*(void (__fastcall **)(CWeakResourceReference *))(*(_QWORD *)this + 8LL))(this);
}
