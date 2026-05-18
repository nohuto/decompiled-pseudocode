/*
 * XREFs of sub_18012B97D @ 0x18012B97D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008AF94 @ 0x18008AF94 (sub_18008AF94.c)
 *     sub_18008F484 @ 0x18008F484 (sub_18008F484.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B97D(__int64 a1, _QWORD *a2)
{
  sub_18008F484(a2[10], a2 + 4, a2[13]);
  sub_18008AF94(a2[10], (__int64)(a2 + 5));
  throw;
}
