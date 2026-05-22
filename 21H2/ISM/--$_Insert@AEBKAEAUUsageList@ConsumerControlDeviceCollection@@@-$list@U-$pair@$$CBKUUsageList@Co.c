/*
 * XREFs of ??$_Insert@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@?$list@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@Z @ 0x18009710C
 * Callers:
 *     ??$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$unordered_map@KUUsageList@MobileButtonDeviceCollection@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x1800971C0 (--$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@-$unordered_map@KUUsageLis.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::_Insert<unsigned long const &,ConsumerControlDeviceCollection::UsageList &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *((_DWORD *)result + 4) = *a3;
  *(_OWORD *)(result + 3) = *a4;
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
