/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEBVCResource@@@Z @ 0x180031E68
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800DE334 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 *     ??1CWeakResourceReference@@MEAA@XZ @ 0x1800DF834 (--1CWeakResourceReference@@MEAA@XZ.c)
 * Callees:
 *     ??$_Find_last@PEBVCResource@@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@AEBQEBVCResource@@_K@Z @ 0x180032080 (--$_Find_last@PEBVCResource@@@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
        unsigned __int64 a1,
        const unsigned __int8 *a2)
{
  unsigned __int64 appended; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a2, 8uLL);
  v5 = *(_QWORD **)(std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
                      v4,
                      v12,
                      v3,
                      appended)
                  + 8);
  if ( !v5 )
    return 0LL;
  v7 = qword_1803D37C8;
  v8 = 2 * (v6 & xmmword_1803D37E0);
  if ( *(_QWORD **)(qword_1803D37C8 + 16 * (v6 & xmmword_1803D37E0) + 8) == v5 )
  {
    if ( *(_QWORD **)(qword_1803D37C8 + 16 * (v6 & xmmword_1803D37E0)) == v5 )
    {
      v9 = qword_1803D37B8;
      *(_QWORD *)(qword_1803D37C8 + 16 * (v6 & xmmword_1803D37E0)) = qword_1803D37B8;
    }
    else
    {
      v9 = v5[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(qword_1803D37C8 + 16 * (v6 & xmmword_1803D37E0)) == v5 )
  {
    *(_QWORD *)(qword_1803D37C8 + 16 * (v6 & xmmword_1803D37E0)) = *v5;
  }
  v10 = *v5;
  --qword_1803D37C0;
  *(_QWORD *)v5[1] = v10;
  *(_QWORD *)(v10 + 8) = v5[1];
  std::_Deallocate<16,0>(v5, 32LL);
  return 1LL;
}
