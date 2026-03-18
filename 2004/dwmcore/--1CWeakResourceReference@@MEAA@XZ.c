/*
 * XREFs of ??1CWeakResourceReference@@MEAA@XZ @ 0x18009C304
 * Callers:
 *     ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x18009C2C0 (--_ECWeakResourceReference@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x180029EC8 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x180047EC0 (-equal_range@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017ACFC (-clear@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 */

void __fastcall CWeakResourceReference::~CWeakResourceReference(CWeakResourceReference *this)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rax
  __int64 v4; // r8
  _QWORD *v5; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  if ( *((_QWORD *)this + 2) )
  {
    v7 = *((_QWORD *)this + 2);
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
      (unsigned __int64)this,
      &v5,
      (const unsigned __int8 *)&v7);
    v2 = v5;
    for ( i = v5; i != v6; i = (_QWORD *)*i )
      ;
    if ( v5 == *(_QWORD **)qword_180349418 && v6 == (_QWORD *)qword_180349418 )
    {
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::clear();
    }
    else
    {
      while ( v2 != v6 )
      {
        v4 = (__int64)v2;
        v2 = (_QWORD *)*v2;
        std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
          &CWeakResourceReference::s_weakReferenceMap,
          (__int64)&v7,
          v4);
      }
    }
    *(_DWORD *)(*((_QWORD *)this + 2) + 32LL) &= ~8u;
  }
  std::vector<CResource *>::_Tidy((char *)this + 24);
}
