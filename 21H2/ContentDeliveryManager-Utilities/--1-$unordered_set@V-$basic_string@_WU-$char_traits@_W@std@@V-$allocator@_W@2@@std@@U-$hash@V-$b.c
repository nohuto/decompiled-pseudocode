/*
 * XREFs of ??1?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x18008C580
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009D88C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::GetMacros_::_1_::dtor$0 @ 0x1800D8BA8 (_CreativeFramework--NotificationManager--ToastHelpers--GetMacros_--_1_--dtor$0.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::EnforceSchemaAndValidate_::_1_::dtor$0 @ 0x1800D8BFD (_CreativeFramework--NotificationManager--ToastHelpers--EnforceSchemaAndValidate_--_1_--dtor$0.c)
 * Callees:
 *     ?clear@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAXXZ @ 0x18008C7E4 (-clear@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

void __fastcall std::unordered_set<std::wstring>::~unordered_set<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>,std::allocator<std::wstring>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  std::list<std::wstring>::clear(a1);
  operator delete(*(void **)a1);
}
