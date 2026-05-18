/*
 * XREFs of sub_180130DFB @ 0x180130DFB
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F484 @ 0x18008F484 (sub_18008F484.c)
 *     sub_18011FEFC @ 0x18011FEFC (sub_18011FEFC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130DFB(__int64 a1, __int64 *a2)
{
  sub_18008F484(a2[4], a2 + 5, a2[19]);
  sub_18011FEFC(a2[4], (__int64)(a2 + 6));
  throw;
}
