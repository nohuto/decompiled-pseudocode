/*
 * XREFs of sub_1800DB1F8 @ 0x1800DB1F8
 * Callers:
 *     sub_180067FF0 @ 0x180067FF0 (sub_180067FF0.c)
 * Callees:
 *     sub_1800D93E8 @ 0x1800D93E8 (sub_1800D93E8.c)
 *     sub_1800D95D8 @ 0x1800D95D8 (sub_1800D95D8.c)
 *     sub_1800D9A08 @ 0x1800D9A08 (sub_1800D9A08.c)
 *     sub_1800D9D50 @ 0x1800D9D50 (sub_1800D9D50.c)
 *     sub_1800DA08C @ 0x1800DA08C (sub_1800DA08C.c)
 *     sub_1800DA5B0 @ 0x1800DA5B0 (sub_1800DA5B0.c)
 *     sub_1800DA7F8 @ 0x1800DA7F8 (sub_1800DA7F8.c)
 *     sub_1800DAA08 @ 0x1800DAA08 (sub_1800DAA08.c)
 *     sub_1800DACAC @ 0x1800DACAC (sub_1800DACAC.c)
 *     sub_1800DAF48 @ 0x1800DAF48 (sub_1800DAF48.c)
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800DB1F8(_QWORD *a1, __int64 a2, __int64 a3)
{
  int *v6; // rax
  int *v7; // rax
  int *v8; // rax
  _QWORD *result; // rax
  char v11; // [rsp+78h] [rbp+10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h]
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a3;
  sub_1800D93E8((__int64)a1, a3);
  sub_1800D95D8((__int64)(a1 + 8), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v11);
  sub_1800D9A08((__int64)(a1 + 145), *v6, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v13);
  sub_1800D9D50((__int64)(a1 + 579), *v7, a3);
  sub_1800DA08C((__int64)(a1 + 1157), a3);
  sub_1800DA5B0((__int64)(a1 + 1213), a3);
  sub_1800DA7F8((__int64)(a1 + 1222), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v11);
  sub_1800DAA08((__int64)(a1 + 1231), *v8, a3);
  sub_1800DACAC(a1 + 1809, a3);
  sub_1800DAF48((__int64)(a1 + 1817), v12);
  sub_1800DB0F0((__int64)(a1 + 1828), v12);
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
