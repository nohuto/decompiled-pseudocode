/*
 * XREFs of ??$_Insert@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x1800353F8
 * Callers:
 *     ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180035138 (-OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::_Insert<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x276276276276276LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *((_OWORD *)result + 1) = *(_OWORD *)a3;
  *((_OWORD *)result + 2) = *(_OWORD *)(a3 + 16);
  result[6] = *(_QWORD *)(a3 + 32);
  *(_OWORD *)(result + 7) = *a4;
  *(_OWORD *)(result + 9) = a4[1];
  *(_OWORD *)(result + 11) = a4[2];
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
