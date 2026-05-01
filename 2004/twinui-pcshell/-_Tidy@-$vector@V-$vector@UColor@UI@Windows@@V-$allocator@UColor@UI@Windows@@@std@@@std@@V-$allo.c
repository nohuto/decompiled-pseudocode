/*
 * XREFs of ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008C564
 * Callers:
 *     _dynamic_atexit_destructor_for__error__ @ 0x180104E90 (_dynamic_atexit_destructor_for__error__.c)
 *     _dynamic_atexit_destructor_for__idle__ @ 0x180104EA0 (_dynamic_atexit_destructor_for__idle__.c)
 *     _dynamic_atexit_destructor_for__listening__ @ 0x180104EB0 (_dynamic_atexit_destructor_for__listening__.c)
 *     _dynamic_atexit_destructor_for__responding__ @ 0x180104EC0 (_dynamic_atexit_destructor_for__responding__.c)
 *     _dynamic_atexit_destructor_for__thinking__ @ 0x180104ED0 (_dynamic_atexit_destructor_for__thinking__.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1804514C0 (--1-$_Tidy_guard@V-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@s.c)
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x180451800 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@0@0AEAV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@0@@Z @ 0x18045115C (--$_Destroy_range@V-$allocator@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 */

void __fastcall std::vector<std::vector<Windows::UI::Color>>::_Tidy(_QWORD *a1)
{
  void *v1; // rdi

  v1 = (void *)*a1;
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)(24 * ((a1[2] - (_QWORD)v1) / 24LL)));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
