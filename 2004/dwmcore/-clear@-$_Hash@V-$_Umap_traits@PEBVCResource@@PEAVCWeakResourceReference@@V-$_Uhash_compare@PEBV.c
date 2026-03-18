/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017ACFC
 * Callers:
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x18009C304 (--1CWeakResourceReference@@MEAA@XZ.c)
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C93D4 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::clear()
{
  _QWORD **v0; // rcx
  _QWORD *v1; // rcx
  _QWORD *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rcx

  v0 = (_QWORD **)qword_180349418;
  **(_QWORD **)(qword_180349418 + 8) = 0LL;
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
  *(_QWORD *)qword_180349418 = qword_180349418;
  result = qword_180349418;
  *(_QWORD *)(qword_180349418 + 8) = qword_180349418;
  qword_180349420 = 0LL;
  v4 = (unsigned __int64)(xmmword_180349430 - qword_180349428 + 7) >> 3;
  if ( qword_180349428 > (unsigned __int64)xmmword_180349430 )
    v4 = 0LL;
  if ( v4 )
  {
    result = qword_180349418;
    memset64((void *)qword_180349428, qword_180349418, v4);
  }
  return result;
}
