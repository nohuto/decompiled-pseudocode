/*
 * XREFs of ??1?$unordered_map@Uguid@winrt@@_KU?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@@std@@QEAA@XZ @ 0x1800C9238
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$57 @ 0x1800C9036 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$57.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$14 @ 0x1800C9042 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$14.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C6178 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@-.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CF1B4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::unordered_map<winrt::guid,unsigned __int64>::~unordered_map<winrt::guid,unsigned __int64>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::vector<void *>::_Tidy(a1 + 24);
  std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
