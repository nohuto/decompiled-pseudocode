/*
 * XREFs of sub_18003B722 @ 0x18003B722
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E238 @ 0x18000E238 (sub_18000E238.c)
 *     sub_18000E988 @ 0x18000E988 (sub_18000E988.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003B722(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  v3 = sub_18000E238(a1, (_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 120));
  sub_18000E988(*(_QWORD **)(a2 + 96), (_QWORD *)(a2 + 32), (_QWORD *)*v3);
  throw;
}
