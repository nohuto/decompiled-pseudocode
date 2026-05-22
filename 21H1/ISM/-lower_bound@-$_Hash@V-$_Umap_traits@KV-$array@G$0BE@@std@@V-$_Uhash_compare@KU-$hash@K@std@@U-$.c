/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800349C4
 * Callers:
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A7E0 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::lower_bound(
        __int64 a1,
        __int64 **a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 *i; // r8
  __int64 *v11; // rax

  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v7 = v6[3];
  v8 = (__int64 *)v6[1];
  v9 = 2 * (v6[6] & appended);
  for ( i = *(__int64 **)(v7 + 16 * (v6[6] & appended)); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v7 + 8 * v9) == v8 )
      v11 = (__int64 *)v6[1];
    else
      v11 = **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
    {
      *a2 = v8;
      return a2;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  *a2 = i;
  return a2;
}
