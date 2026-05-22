/*
 * XREFs of ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x1800261F8
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180001950 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180026104 (--$_Range_construct_or_tidy@PEBU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@.c)
 */

__int128 *__fastcall std::vector<std::pair<unsigned short,bool>>::vector<std::pair<unsigned short,bool>>(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int *v3; // rdx

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(unsigned int **)a2;
  qword_180208C50 = 0LL;
  xmmword_180208C40 = 0LL;
  std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
    a1,
    v3,
    v2);
  return &xmmword_180208C40;
}
