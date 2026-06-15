/*
 * XREFs of ??$_Fill_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V12@@std@@YAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x180035104
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800348F0 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18003555C (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$_ea_18003555C.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Fill_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx

  v3 = 0LL;
  v4 = a1;
  v5 = (a2 - (unsigned __int64)a1 + 7) >> 3;
  if ( (unsigned __int64)a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( v5 >= 2 )
    {
      v6 = (unsigned __int64)&a1[v5 - 1];
      if ( v4 > a3 || v6 < (unsigned __int64)a3 )
      {
        v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v3 += 2LL;
        while ( v3 != v7 );
        v8 = 8 * v7;
        memset64(v4, *a3, v8 >> 3);
        v4 = (unsigned __int64 *)((char *)v4 + v8);
      }
    }
    while ( v3 != v5 )
    {
      ++v3;
      *v4++ = *a3;
    }
  }
}
