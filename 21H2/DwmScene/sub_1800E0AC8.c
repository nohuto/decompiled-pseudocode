/*
 * XREFs of sub_1800E0AC8 @ 0x1800E0AC8
 * Callers:
 *     sub_18006D8C0 @ 0x18006D8C0 (sub_18006D8C0.c)
 * Callees:
 *     sub_1800DECB8 @ 0x1800DECB8 (sub_1800DECB8.c)
 *     sub_1800DEEA8 @ 0x1800DEEA8 (sub_1800DEEA8.c)
 *     sub_1800DF2D8 @ 0x1800DF2D8 (sub_1800DF2D8.c)
 *     sub_1800DF620 @ 0x1800DF620 (sub_1800DF620.c)
 *     sub_1800DF95C @ 0x1800DF95C (sub_1800DF95C.c)
 *     sub_1800DFE80 @ 0x1800DFE80 (sub_1800DFE80.c)
 *     sub_1800E00C8 @ 0x1800E00C8 (sub_1800E00C8.c)
 *     sub_1800E02D8 @ 0x1800E02D8 (sub_1800E02D8.c)
 *     sub_1800E057C @ 0x1800E057C (sub_1800E057C.c)
 *     sub_1800E0818 @ 0x1800E0818 (sub_1800E0818.c)
 *     sub_1800E09C0 @ 0x1800E09C0 (sub_1800E09C0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800E0AC8(_QWORD *a1, __int64 a2, __int64 a3)
{
  int *v6; // rax
  int *v7; // rax
  int *v8; // rax
  _QWORD *result; // rax
  char v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h]
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a3;
  sub_1800DECB8((__int64)a1, a3);
  sub_1800DEEA8((__int64)(a1 + 8), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v11);
  sub_1800DF2D8((__int64)(a1 + 145), *v6, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v13);
  sub_1800DF620((__int64)(a1 + 579), *v7, a3);
  sub_1800DF95C((__int64)(a1 + 1157), a3);
  sub_1800DFE80((__int64)(a1 + 1213), a3);
  sub_1800E00C8((__int64)(a1 + 1222), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v11);
  sub_1800E02D8((__int64)(a1 + 1231), *v8, a3);
  sub_1800E057C(a1 + 1809, a3);
  sub_1800E0818((__int64)(a1 + 1817), v12);
  sub_1800E09C0((__int64)(a1 + 1828), v12);
  result = a1;
  *a1 = &Spectre::Engine::CommandListState::`vftable';
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  a1[1817] = &Spectre::Engine::CommandListState::`vftable';
  a1[1828] = &Spectre::Engine::CommandListState::`vftable';
  return result;
}
