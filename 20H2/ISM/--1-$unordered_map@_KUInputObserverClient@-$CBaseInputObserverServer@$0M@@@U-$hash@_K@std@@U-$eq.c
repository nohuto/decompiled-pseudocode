/*
 * XREFs of ??1?$unordered_map@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@@std@@QEAA@XZ @ 0x1800F47F8
 * Callers:
 *     _CBaseInputObserverServer_12_::CBaseInputObserverServer_12__::_1_::dtor$1 @ 0x1800509D1 (_CBaseInputObserverServer_12_--CBaseInputObserverServer_12__--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unordered_map<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>>::~unordered_map<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>>(
        __int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy(a1 + 24);
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      }
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x28);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x28);
}
