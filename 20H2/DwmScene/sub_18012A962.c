/*
 * XREFs of sub_18012A962 @ 0x18012A962
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CD1EC @ 0x1800CD1EC (sub_1800CD1EC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A962(__int64 a1, __int64 a2)
{
  sub_1800CD1EC(a2 + 80, *(_QWORD *)(a2 + 32));
  throw;
}
