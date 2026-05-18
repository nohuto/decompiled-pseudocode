/*
 * XREFs of sub_1800E0C94 @ 0x1800E0C94
 * Callers:
 *     sub_1800E0E90 @ 0x1800E0E90 (sub_1800E0E90.c)
 * Callees:
 *     sub_1800DF014 @ 0x1800DF014 (sub_1800DF014.c)
 *     sub_1800DF3E4 @ 0x1800DF3E4 (sub_1800DF3E4.c)
 *     sub_1800DF730 @ 0x1800DF730 (sub_1800DF730.c)
 *     sub_1800DFA78 @ 0x1800DFA78 (sub_1800DFA78.c)
 *     sub_1800DFEE0 @ 0x1800DFEE0 (sub_1800DFEE0.c)
 *     sub_1800E012C @ 0x1800E012C (sub_1800E012C.c)
 *     sub_1800E03E8 @ 0x1800E03E8 (sub_1800E03E8.c)
 *     sub_1800E05E0 @ 0x1800E05E0 (sub_1800E05E0.c)
 *     sub_1800E0868 @ 0x1800E0868 (sub_1800E0868.c)
 *     sub_1800E09F8 @ 0x1800E09F8 (sub_1800E09F8.c)
 *     sub_1800E0EC0 @ 0x1800E0EC0 (sub_1800E0EC0.c)
 */

__int64 __fastcall sub_1800E0C94(_QWORD *a1)
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
  sub_1800E0EC0();
  sub_1800E09F8(v8);
  sub_1800E0868(v7);
  sub_1800E05E0(v6);
  sub_1800E03E8(v5);
  sub_1800E012C(v4);
  sub_1800DFEE0(v3);
  sub_1800DFA78(v2);
  sub_1800DF730(v1);
  sub_1800DF3E4(a1 + 145);
  sub_1800DF014(a1 + 8);
  return sub_1800DED04(a1);
}
