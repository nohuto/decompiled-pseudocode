/*
 * XREFs of sub_18003CA71 @ 0x18003CA71
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E238 @ 0x18000E238 (sub_18000E238.c)
 *     sub_180030498 @ 0x180030498 (sub_180030498.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003CA71(__int64 a1, __int64 a2)
{
  unsigned __int8 **v3; // rax

  v3 = (unsigned __int8 **)sub_18000E238(a1, (_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 88));
  sub_180030498(*(_QWORD **)(a2 + 64), (_QWORD *)(a2 + 40), *v3);
  throw;
}
