/*
 * XREFs of ?_Change_array@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXQEAUINPUT_SPACE_REGION@@_K1@Z @ 0x180037510
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180037424 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18012AAA0 (--$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPU.c)
 *     ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x18012D7F0 (-_Reallocate_exactly@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(200 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 200LL)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 200 * a3;
  result = a2 + 200 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
