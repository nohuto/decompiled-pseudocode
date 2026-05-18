/*
 * XREFs of sub_1800DB3C4 @ 0x1800DB3C4
 * Callers:
 *     sub_1800DB5C0 @ 0x1800DB5C0 (sub_1800DB5C0.c)
 * Callees:
 *     sub_1800D9744 @ 0x1800D9744 (sub_1800D9744.c)
 *     sub_1800D9B14 @ 0x1800D9B14 (sub_1800D9B14.c)
 *     sub_1800D9E60 @ 0x1800D9E60 (sub_1800D9E60.c)
 *     sub_1800DA1A8 @ 0x1800DA1A8 (sub_1800DA1A8.c)
 *     sub_1800DA610 @ 0x1800DA610 (sub_1800DA610.c)
 *     sub_1800DA85C @ 0x1800DA85C (sub_1800DA85C.c)
 *     sub_1800DAB18 @ 0x1800DAB18 (sub_1800DAB18.c)
 *     sub_1800DAD10 @ 0x1800DAD10 (sub_1800DAD10.c)
 *     sub_1800DAF98 @ 0x1800DAF98 (sub_1800DAF98.c)
 *     sub_1800DB128 @ 0x1800DB128 (sub_1800DB128.c)
 *     sub_1800DB5F0 @ 0x1800DB5F0 (sub_1800DB5F0.c)
 */

__int64 __fastcall sub_1800DB3C4(_QWORD *a1)
{
  _QWORD *v1; // r13
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  *a1 = &Spectre::Engine::CommandListState::`vftable';
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  v1 = a1 + 579;
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  v2 = a1 + 1157;
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  v3 = a1 + 1213;
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  v4 = a1 + 1222;
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  v5 = a1 + 1231;
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  v6 = a1 + 1809;
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  v7 = a1 + 1817;
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  v8 = a1 + 1828;
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  sub_1800DB5F0();
  sub_1800DB128(v8);
  sub_1800DAF98(v7);
  sub_1800DAD10(v6);
  sub_1800DAB18(v5);
  sub_1800DA85C(v4);
  sub_1800DA610(v3);
  sub_1800DA1A8(v2);
  sub_1800D9E60(v1);
  sub_1800D9B14(a1 + 145);
  sub_1800D9744(a1 + 8);
  return sub_1800D9434(a1);
}
