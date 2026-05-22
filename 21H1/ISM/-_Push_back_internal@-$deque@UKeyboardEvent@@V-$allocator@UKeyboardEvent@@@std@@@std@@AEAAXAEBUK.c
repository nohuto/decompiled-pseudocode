/*
 * XREFs of ?_Push_back_internal@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800B62B8
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800B5934 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z @ 0x1800B5FF8 (-_Growmap@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<KeyboardEvent>::_Push_back_internal(_QWORD *a1, _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<KeyboardEvent>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = a1[1];
  v6 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(v5 + 8 * v6) )
  {
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x128uLL);
    v5 = a1[1];
  }
  v7 = *(_OWORD **)(v5 + 8 * v6);
  v8 = 2LL;
  do
  {
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
    v7[6] = a2[6];
    v7 += 8;
    v9 = a2[7];
    a2 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *a2;
  v7[1] = a2[1];
  result = *((_QWORD *)a2 + 4);
  *((_QWORD *)v7 + 4) = result;
  ++a1[4];
  return result;
}
