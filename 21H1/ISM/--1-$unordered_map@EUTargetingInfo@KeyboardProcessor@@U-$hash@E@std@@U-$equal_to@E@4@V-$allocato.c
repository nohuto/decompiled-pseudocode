/*
 * XREFs of ??1?$unordered_map@EUTargetingInfo@KeyboardProcessor@@U?$hash@E@std@@U?$equal_to@E@4@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x18004818C
 * Callers:
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x1801354D4 (--1KeyboardProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045A74 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180047CE0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEA.c)
 */

void __fastcall std::unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>::~unordered_map<unsigned char,KeyboardProcessor::TargetingInfo>(
        __int64 a1)
{
  __int64 v2; // rcx
  _QWORD **v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  v3 = *(_QWORD ***)(a1 + 8);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>>>(
        v2,
        (__int64)v4);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
