/*
 * XREFs of ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C7898
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$13 @ 0x1800C7543 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$13.c)
 *     ??1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C7BC0 (--1WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800CB704 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder_::_1_::dtor$0 @ 0x1800CB884 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveTabsFromWindowOrder_--_1_.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800CBB14 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800CD654 (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<unsigned __int64>::~deque<unsigned __int64>(void **a1)
{
  void *v2; // rcx

  std::deque<unsigned __int64>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
