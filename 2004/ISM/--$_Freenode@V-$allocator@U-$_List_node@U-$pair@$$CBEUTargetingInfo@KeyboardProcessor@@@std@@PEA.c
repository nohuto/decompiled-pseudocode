/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800476D0
 * Callers:
 *     ??1?$list@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x180047B2C (--1-$list@U-$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V-$allocator@U-$pair@$$CBKUTargetin.c)
 *     ??1?$unordered_map@EUTargetingInfo@KeyboardProcessor@@U?$hash@E@std@@U?$equal_to@E@4@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x180047B7C (--1-$unordered_map@EUTargetingInfo@KeyboardProcessor@@U-$hash@E@std@@U-$equal_to@E@4@V-$allocato.c)
 *     ?erase@?$list@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180047F58 (-erase@-$list@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V-$allocator@U-$pair@$$CBEUTa.c)
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x180049E04 (--1ButtonProcessor@@MEAA@XZ.c)
 * Callees:
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x180047BD4 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  KeyboardProcessor::TargetingInfo::~TargetingInfo((KeyboardProcessor::TargetingInfo *)(a2 + 24));
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x28);
}
