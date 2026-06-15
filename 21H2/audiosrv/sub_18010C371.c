/*
 * XREFs of sub_18010C371 @ 0x18010C371
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_18010E48C @ 0x18010E48C (sub_18010E48C.c)
 */

void __fastcall __noreturn sub_18010C371(__int64 a1, __int64 a2)
{
  sub_18010E48C(a1, *(_QWORD *)(a2 + 160));
  throw;
}
