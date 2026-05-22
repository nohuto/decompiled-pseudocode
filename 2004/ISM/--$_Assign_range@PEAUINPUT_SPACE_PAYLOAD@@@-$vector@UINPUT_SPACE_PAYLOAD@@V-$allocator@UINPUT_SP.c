/*
 * XREFs of ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180035D2C
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x180035ABC (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAX_K@Z @ 0x180035DD0 (-_Clear_and_reserve_geometric@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@.c)
 *     memmove_0 @ 0x18004A697 (memmove_0.c)
 */

char *__fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Assign_range<INPUT_SPACE_PAYLOAD *>(
        char **a1,
        const void *a2,
        __int64 a3)
{
  char *v3; // rdi
  size_t v4; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  char *result; // rax

  v3 = *a1;
  v4 = a3 - (_QWORD)a2;
  v7 = (__int64)((unsigned __int128)((a3 - (__int64)a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  v8 = (v7 >> 63) + v7;
  if ( v8 > (a1[2] - *a1) / 24 )
  {
    std::vector<INPUT_SPACE_PAYLOAD>::_Clear_and_reserve_geometric(a1, v8);
    v3 = *a1;
  }
  memmove_0(v3, a2, v4);
  result = &v3[v4];
  a1[1] = &v3[v4];
  return result;
}
