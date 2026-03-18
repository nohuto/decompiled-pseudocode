/*
 * XREFs of ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18019AC28
 * Callers:
 *     ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x1801A67DC (-_Reallocate_exactly@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x1801AEB14 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x1801BA090 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18022B7F8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z @ 0x18022BC40 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@QEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18022BD54 (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18022C8AC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Insert_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1Uforward_iterator_tag@1@@Z @ 0x18023F0F8 (--$_Insert_range@PEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180258CB0 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z @ 0x18025CF1C (--$_Emplace_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAI$$QEAI@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801854E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<4>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 4 * a1;
}
