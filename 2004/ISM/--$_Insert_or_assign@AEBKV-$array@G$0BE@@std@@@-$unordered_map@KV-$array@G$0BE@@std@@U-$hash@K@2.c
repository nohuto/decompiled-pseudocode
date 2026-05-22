/*
 * XREFs of ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x18003484C
 * Callers:
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800347A0 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKV?$array@G$0BE@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@1@@Z @ 0x180034900 (--$_Insert_unverified@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@V-$_List_unchecked_iterator@V-$_Li.c)
 *     ??$_Insert@AEBKV?$array@G$0BE@@std@@@?$list@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x180034A8C (--$_Insert@AEBKV-$array@G$0BE@@std@@@-$list@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@V-$allocator.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,std::array<unsigned short,20>>::_Insert_or_assign<unsigned long const &,std::array<unsigned short,20>>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 *v9; // rdx
  __int64 v10; // r9
  __int64 *i; // r8
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int128 v15; // xmm2
  __int64 v16; // xmm0_8

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v8 = a1[3];
  v9 = (__int64 *)a1[1];
  v10 = 2 * (a1[6] & appended);
  for ( i = *(__int64 **)(v8 + 16 * (a1[6] & appended)); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v8 + 8 * v10) == v9 )
      v12 = (__int64 *)a1[1];
    else
      v12 = **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( i == v12 )
    {
      i = (__int64 *)a1[1];
      v13 = i;
      goto LABEL_6;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  v13 = i;
LABEL_6:
  if ( v13 == v9 )
  {
    std::list<std::pair<unsigned long const,std::array<unsigned short,20>>>::_Insert<unsigned long const &,std::array<unsigned short,20>>(
      a1 + 1,
      *v9,
      a3,
      v7);
    std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::_Insert_unverified<std::pair<unsigned long const,std::array<unsigned short,20>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    v15 = *(_OWORD *)(v7 + 16);
    v16 = *(_QWORD *)(v7 + 32);
    *(_OWORD *)((char *)i + 20) = *(_OWORD *)v7;
    *(_OWORD *)((char *)i + 36) = v15;
    *(__int64 *)((char *)i + 52) = v16;
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
