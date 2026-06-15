/*
 * XREFs of sub_18003C9F2 @ 0x18003C9F2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E238 @ 0x18000E238 (sub_18000E238.c)
 *     sub_18002FDFC @ 0x18002FDFC (sub_18002FDFC.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003C9F2(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  v3 = sub_18000E238(a1, (_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 136));
  sub_18002FDFC(*(_QWORD **)(a2 + 112), a2 + 32, (_QWORD *)*v3);
  throw;
}
