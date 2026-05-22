/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800ACEC4
 * Callers:
 *     ??1?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003B384 (--1-$unordered_map@IV-$vector@IV-$allocator@I@std@@@std@@U-$hash@I@2@U-$equal_to@I@2@V-$allocato.c)
 *     ??1?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800AE860 (--1-$list@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@std@@V-$allocator@U-$pair@$$CBIV-$v.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800B3F1C (-clear@-$_Hash@V-$_Umap_traits@IV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@IU-$hash@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B2EC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::vector<unsigned int>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::vector<Windows::UI::Color>::_Tidy((__int64)(v2 + 3));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v2 = v3;
    }
    while ( v3 );
  }
}
