/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@1@AEBV?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@1@@Z @ 0x1800B2754
 * Callers:
 *     ??0?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA@XZ @ 0x1800B2724 (--0-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U-$hash@PEBVCResource@@@std@@U-$eq.c)
 * Callees:
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18002A4F8 (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBII.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

int *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  __m128i si128; // xmm0
  int *result; // rax

  CWeakResourceReference::s_weakReferenceMap = *a2;
  qword_18034D478 = 0LL;
  qword_18034D480 = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_18034D478 = (__int64)v2;
  qword_18034D488 = 0LL;
  xmmword_18034D490 = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,unsigned int>>>>>::_Buy_raw(
    &qword_18034D488,
    0x10uLL);
  v3 = qword_18034D488;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  memset64((void *)qword_18034D488, (unsigned __int64)v2, 0x10uLL);
  CWeakResourceReference::s_weakReferenceMap = (int)FLOAT_1_0;
  *(_QWORD *)&xmmword_18034D490 = v3 + 128;
  result = &CWeakResourceReference::s_weakReferenceMap;
  xmmword_18034D4A0 = (__int128)si128;
  return result;
}
