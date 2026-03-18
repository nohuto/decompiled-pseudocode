/*
 * XREFs of ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x18005BC18
 * Callers:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x1800583DC (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18005BC80 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1801EF85C (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x18021D790 (--$_Insert_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, a1[2] - v6);
  *a1 = a2;
  a1[1] = a2 + a3;
  result = a2 + a4;
  a1[2] = a2 + a4;
  return result;
}
