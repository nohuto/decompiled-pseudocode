/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VAltTabWindowHookData@@@2@_K1@Z @ 0x180320CF4
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VAltTabWindowHookData@@@std@@@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VAltTabWindowHookData@@@1@QEAV21@AEAV21@@Z @ 0x18031E6A0 (--$_Emplace_reallocate@AEAV-$shared_ptr@VAltTabWindowHookData@@@std@@@-$vector@V-$shared_ptr@VAl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18021D8F8 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 */

void __fastcall std::vector<std::shared_ptr<AltTabWindowHookData>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (_QWORD)AltTabWindowHook::s_altTabHooks )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(
      AltTabWindowHook::s_altTabHooks,
      *((__int64 *)&AltTabWindowHook::s_altTabHooks + 1));
    std::_Deallocate<16,0>(
      (void *)AltTabWindowHook::s_altTabHooks,
      (const struct std::nothrow_t *)((qword_1805CC9D8 - AltTabWindowHook::s_altTabHooks) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *(_QWORD *)&AltTabWindowHook::s_altTabHooks = a2;
  qword_1805CC9D8 = a2 + 16 * a4;
  *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1) = a2 + 16 * a3;
}
