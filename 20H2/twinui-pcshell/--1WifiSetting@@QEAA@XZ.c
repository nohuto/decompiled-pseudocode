/*
 * XREFs of ??1WifiSetting@@QEAA@XZ @ 0x18008C5A0
 * Callers:
 *     _dynamic_atexit_destructor_for__c_retailDemoHotspot__ @ 0x1801063B0 (_dynamic_atexit_destructor_for__c_retailDemoHotspot__.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall WifiSetting::~WifiSetting(WifiSetting *this)
{
  std::wstring::_Tidy_deallocate(qword_1805CC970);
  std::wstring::_Tidy_deallocate(qword_1805CC950);
}
