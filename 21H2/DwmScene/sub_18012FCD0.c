/*
 * XREFs of sub_18012FCD0 @ 0x18012FCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F484 @ 0x18008F484 (sub_18008F484.c)
 *     sub_18010D174 @ 0x18010D174 (sub_18010D174.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FCD0(__int64 a1, __int64 *a2)
{
  sub_18008F484(a2[4], a2 + 5, a2[19]);
  sub_18010D174(a2[4], (__int64)(a2 + 6));
  throw;
}
