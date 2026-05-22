/*
 * XREFs of ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x18012DCE0
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012AD5C (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012C03C (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rcx
  _QWORD *v6; // rsi

  v4 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 200LL;
  v5 = 200 * a2;
  if ( a2 > 0x147AE147AE147AELL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<INPUT_SPACE_REGION>::_Change_array(a1, (__int64)v6, v4, a2);
}
