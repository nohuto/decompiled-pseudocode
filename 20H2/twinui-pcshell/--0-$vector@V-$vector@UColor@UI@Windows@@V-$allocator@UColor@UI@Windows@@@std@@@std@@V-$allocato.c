/*
 * XREFs of ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x18008C074
 * Callers:
 *     _dynamic_initializer_for__error__ @ 0x180003170 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180003EC0 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__listening__ @ 0x180003FE0 (_dynamic_initializer_for__listening__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180005370 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x1800064E0 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180450A54 (--$_Range_construct_or_tidy@PEBV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std.c)
 */

_QWORD *__fastcall std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = a2[1];
  v3 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<std::vector<Windows::UI::Color>>::_Range_construct_or_tidy<std::vector<Windows::UI::Color> const *>(
    a1,
    v3,
    v2);
  return a1;
}
