/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017D8FC
 * Callers:
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x180097524 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C264C (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::clear()
{
  _QWORD **v0; // rcx
  _QWORD *v1; // rcx
  _QWORD *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rcx

  v0 = (_QWORD **)qword_18034D478;
  **(_QWORD **)(qword_18034D478 + 8) = 0LL;
  v1 = *v0;
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v1, 0x20uLL);
      v1 = v2;
    }
    while ( v2 );
  }
  *(_QWORD *)qword_18034D478 = qword_18034D478;
  result = qword_18034D478;
  *(_QWORD *)(qword_18034D478 + 8) = qword_18034D478;
  qword_18034D480 = 0LL;
  v4 = (unsigned __int64)(xmmword_18034D490 - qword_18034D488 + 7) >> 3;
  if ( qword_18034D488 > (unsigned __int64)xmmword_18034D490 )
    v4 = 0LL;
  if ( v4 )
  {
    result = qword_18034D478;
    memset64((void *)qword_18034D488, qword_18034D478, v4);
  }
  return result;
}
