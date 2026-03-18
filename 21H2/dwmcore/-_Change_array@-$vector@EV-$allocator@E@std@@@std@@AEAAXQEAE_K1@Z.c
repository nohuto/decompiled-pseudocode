/*
 * XREFs of ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1800CEC84
 * Callers:
 *     ??$insert@V?$span_iterator@$$CBE@details@gsl@@$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@$$CBE@details@gsl@@1@Z @ 0x1800CE938 (--$insert@V-$span_iterator@$$CBE@details@gsl@@$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800CEA90 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x1800CEAFC (--$_Emplace_reallocate@E@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z.c)
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x1800CEBC0 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 *     ??$_Insert_range@PEAD@?$vector@DV?$allocator@D@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@D@std@@@std@@@1@PEAD1Uforward_iterator_tag@1@@Z @ 0x1800E818C (--$_Insert_range@PEAD@-$vector@DV-$allocator@D@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??$_Emplace_reallocate@D@?$vector@DV?$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z @ 0x1800E82C0 (--$_Emplace_reallocate@D@-$vector@DV-$allocator@D@std@@@std@@QEAAPEADQEAD$$QEAD@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
