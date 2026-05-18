/*
 * XREFs of sub_18012CB1C @ 0x18012CB1C
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 *     sub_1800ABE80 @ 0x1800ABE80 (sub_1800ABE80.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CB1C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = sub_180010B74(*(_QWORD *)(a2 + 80));
  v4 = sub_180010B74(*(_QWORD *)(a2 + 80));
  sub_1800ABE80(v4, v3, *(__int64 **)(a2 + 88));
  throw;
}
