/*
 * XREFs of ??1CWeakResourceReference@@MEAA@XZ @ 0x1800DF834
 * Callers:
 *     ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x1800DF7F0 (--_ECWeakResourceReference@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEBVCResource@@@Z @ 0x180031E68 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 */

void __fastcall CWeakResourceReference::~CWeakResourceReference(CWeakResourceReference *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  if ( *((_QWORD *)this + 2) )
  {
    v2 = *((_QWORD *)this + 2);
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
      (unsigned __int64)this,
      (const unsigned __int8 *)&v2);
    *(_DWORD *)(*((_QWORD *)this + 2) + 32LL) &= ~8u;
  }
  std::vector<CResource *>::_Tidy((char *)this + 24);
}
